#include <verilated.h>
#include "Vwishbone_tb.h"
#include "testbench.h"

typedef unsigned __int128 uint128_t;

TESTBENCH<Vwishbone_tb> *tb;

void write_nowait(int master, int addr, int data){
    tb->m_core->mdata_i = tb->m_core->mdata_i & ( ~( (uint128_t) 0xffffffff << (32*master)));
    tb->m_core->mdata_i = tb->m_core->mdata_i | (uint128_t) data << (32*master);
    tb->m_core->maddr_i = tb->m_core->maddr_i & (~((uint128_t) 0xffffffff << (32*master)));
    tb->m_core->maddr_i = tb->m_core->maddr_i | (uint128_t) addr << (32*master);
    tb->m_core->mwe_i = tb->m_core->mwe_i | (0b1111 << (4 * master));
    tb->m_core->mvalid_i = tb->m_core->mvalid_i | (1 << master);
}

void write(int master, int addr, int data){
    write_nowait(master, addr, data);
    tb->tick();
    while((tb->m_core->mvalid_o & (1 << master)) == 0){
        tb->tick();
    }
    tb->m_core->mvalid_i = 0;
    tb->tick();
}

void read_nowait(int master, int addr){
    tb->m_core->mdata_i = tb->m_core->mdata_i & (~((uint128_t) 0xffffffff << (32*master)));
    tb->m_core->maddr_i = tb->m_core->maddr_i & (~((uint128_t) 0xffffffff << (32*master)));
    tb->m_core->maddr_i = tb->m_core->maddr_i | (uint128_t) addr << (32*master);
    tb->m_core->mwe_i = tb->m_core->mwe_i & (~(0b1111 << (4 * master)));
    tb->m_core->mvalid_i = tb->m_core->mvalid_i | (1 << master);
}

int read(int master, int addr){
    read_nowait(master, addr);
    tb->tick();
    while((tb->m_core->mvalid_o & (1 << master) == 0)){
        tb->tick();
    }
    tb->m_core->mvalid_i = 0;
    tb->tick();
    return (uint32_t) (tb->m_core->mdata_o >> (32 * master));
}

uint128_t simultaneous_read(int master0, int master1, int addr0, int addr1){
    read_nowait(master0, addr0);
    read_nowait(master1, addr1);
    int valid = tb->m_core->mvalid_o;
    while(((valid & (1 << master0)) == 0) || ((valid & (1 << master1)) == 0)){
        tb->tick();
        valid |= tb->m_core->mvalid_o;
        tb->m_core->mvalid_i = ~valid;
    }
    tb->m_core->mvalid_i = 0;
    tb->tick();
    return (uint128_t) tb->m_core->mdata_o;
}

int simultaneous_read_write(int wmaster, int rmaster, int waddr, int raddr, int wdata){
    write_nowait(wmaster, waddr, wdata);
    read_nowait(rmaster, raddr);
    int valid = tb->m_core->mvalid_o;
    while((valid & (1 << wmaster) == 0) || (valid & (1 << rmaster)) == 0){
        tb->tick();
        valid |= tb->m_core->mvalid_o;
        tb->m_core->mvalid_i = ~valid;
    }
    tb->m_core->mvalid_i = 0;
    tb->tick();
    return (uint32_t) (tb->m_core->mdata_o >> (32 * rmaster));
}

int simultaneous_write(int master0, int master1, int addr0, int addr1, int data0, int data1){
    write_nowait(master0, addr0, data0);
    write_nowait(master1, addr1, data1);
    int valid = tb->m_core->mvalid_o;
    while((valid & (1 << master0) == 0) || (valid & (1 << master1)) == 0){
        tb->tick();
        valid |= tb->m_core->mvalid_o;
        tb->m_core->mvalid_i = ~valid;
    }
    tb->m_core->mvalid_i = 0;
    tb->tick();
    if(read(master1, addr0) != data0)
        return 1;
        
    if(read(master0, addr1) != data1)
        return 2;
    return 0;
}

void n_write(int master, int addr, int data[7], int n){
    tb->m_core->mnaccess_i = n;
    for(int i = 0; i < n; i++){
        write_nowait(master, addr, data[i]);
        tb->tick();
        while(tb->m_core->mvalid_o & (1 << master) == 0){
            tb->tick();
        }
    }
    tb->m_core->mvalid_i = 0;
    tb->m_core->mnaccess_i = 0;
    tb->tick();
}

int n_read(int master, int addr, int data[7], int n){
    tb->m_core->mnaccess_i = n;
    for(int i = 0; i < n; i++){
        read_nowait(master, addr);
        tb->tick();
        while(tb->m_core->mvalid_o & (1 << master) == 0){
            tb->tick();
        }
        if((uint32_t) (tb->m_core->mdata_o >> (32 * master)) != data[i])
            return i + 1;
    }
    tb->m_core->mvalid_i = 0;
    tb->m_core->mnaccess_i = 0;
    tb->tick();
    return 0;
}

int test_wishbone(){
    // Write with one master, read with the other and the other way around
    for(int i = 0; i < 0x1a; i+=4){
        write(0, i, (0xababcd00 + i));
        if(read(1, i) != (0xababcd00 + i))
            return i+1;
        write(1, i, 0xcdcdab00 + i );
        if(read(0, i) != 0xcdcdab00 + i)
            return i+2;
    }
    // Write request on both masters at the same time, read crossed
    if(simultaneous_write(0, 1, 0x8, 0xc, 0xababcdcd, 0xdedefafa) != 0)
        return 1<<6;
    tb->tick();

    // Read request on both masters at the same time
    if(simultaneous_read(1, 0, 0x8, 0xc) != (uint128_t) 0xababcdcddedefafa)
        return 1<<7;

    tb->tick();
    if(simultaneous_read_write(0, 1, 0x10, 0x10, 0x0000ffff) != 0x0000ffff)
        return 1000;

    tb->tick(); // TODO: This additional tick is currently required in order for the
            //       low prio master (1) to free the bus and let the interconnect
            //       decide who to access next. Otherwise, in the next simultaneous
            //       request, the low prio master remains in ownership of the bus
            
    if(simultaneous_read_write(1, 0, 0x10, 0x10, 0xffff0000) != 0x0000ffff)
        return 1001;

    int data[4] = {0x1, 0x2, 0x3, 0x4};
    n_write(0, 0x0, data, 4);
    if(n_read(0, 0x0, data, 4) != 0)
        return 1200;
    
    return 0;
}
int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    tb = new TESTBENCH<Vwishbone_tb>();
    tb->opentrace("logs/trace.vcd");
    int result = 0;

    // Initialize inputs
    tb->m_core->mvalid_i = 0;
    tb->m_core->maddr_i = 0;
    tb->m_core->mdata_i = 0;
    tb->m_core->mwe_i = 0;
    tb->m_core->mnaccess_i = 0;

    // Reset
    tb->reset();

    // Run tests
    result = test_wishbone();
    
    // Cleanup
    tb->tick();
    tb->m_core->final();

    // Evaluate test
    if(result == 0)
        std::cout << "PASSED" << std::endl;
    else
        std::cout << "FAILED " << result << std::endl;
    
    //  Coverage analysis (since test passed)
    VerilatedCov::write("logs/coverage.dat");

    // Destroy model
    delete tb->m_core; tb->m_core = NULL;

    exit(0);
}
