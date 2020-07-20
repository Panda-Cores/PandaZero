#include <verilated.h>
#include "Vwishbone_tb.h"

#if VM_TRACE
# include <verilated_vcd_c.h>
#endif

typedef unsigned __int128 uint128_t;

static int t_cnt = 0;
static Vwishbone_tb* top = new Vwishbone_tb;
VerilatedVcdC* tfp = new VerilatedVcdC;

void tick(){
    top->clk = 0;
    top->eval();
    tfp->dump(t_cnt);

    top->clk = 1;
    t_cnt++;
    top->eval();
    tfp->dump(t_cnt);

    top->clk = 0;
    t_cnt++;
    top->eval();
}

void write_nowait(int master, int addr, int data){
    top->mdata_i = top->mdata_i & ( ~( (uint128_t) 0xffffffff << (32*master)));
    top->mdata_i = top->mdata_i | (uint128_t) data << (32*master);
    top->maddr_i = top->maddr_i & (~((uint128_t) 0xffffffff << (32*master)));
    top->maddr_i = top->maddr_i | (uint128_t) addr << (32*master);
    top->mwe_i = top->mwe_i | (0b1111 << (4 * master));
    top->mvalid_i = top->mvalid_i | (1 << master);
}

void write(int master, int addr, int data){
    write_nowait(master, addr, data);
    tick();
    while((top->mvalid_o & (1 << master)) == 0){
        tick();
    }
    top->mvalid_i = 0;
    tick();
}

void read_nowait(int master, int addr){
    top->mdata_i = top->mdata_i & (~((uint128_t) 0xffffffff << (32*master)));
    top->maddr_i = top->maddr_i & (~((uint128_t) 0xffffffff << (32*master)));
    top->maddr_i = top->maddr_i | (uint128_t) addr << (32*master);
    top->mwe_i = top->mwe_i & (~(0b1111 << (4 * master)));
    top->mvalid_i = top->mvalid_i | (1 << master);
}

int read(int master, int addr){
    read_nowait(master, addr);
    tick();
    while((top->mvalid_o & (1 << master) == 0)){
        tick();
    }
    top->mvalid_i = 0;
    tick();
    return (uint32_t) (top->mdata_o >> (32 * master));
}

uint128_t simultaneous_read(int master0, int master1, int addr0, int addr1){
    read_nowait(master0, addr0);
    read_nowait(master1, addr1);
    int valid = top->mvalid_o;
    while(((valid & (1 << master0)) == 0) || ((valid & (1 << master1)) == 0)){
        tick();
        valid |= top->mvalid_o;
        top->mvalid_i = ~valid;
    }
    top->mvalid_i = 0;
    tick();
    return (uint128_t) top->mdata_o;
}

int simultaneous_read_write(int wmaster, int rmaster, int waddr, int raddr, int wdata){
    write_nowait(wmaster, waddr, wdata);
    read_nowait(rmaster, raddr);
    int valid = top->mvalid_o;
    while((valid & (1 << wmaster) == 0) || (valid & (1 << rmaster)) == 0){
        tick();
        valid |= top->mvalid_o;
        top->mvalid_i = ~valid;
    }
    top->mvalid_i = 0;
    tick();
    return (uint32_t) (top->mdata_o >> (32 * rmaster));
}

int simultaneous_write(int master0, int master1, int addr0, int addr1, int data0, int data1){
    write_nowait(master0, addr0, data0);
    write_nowait(master1, addr1, data1);
    int valid = top->mvalid_o;
    while((valid & (1 << master0) == 0) || (valid & (1 << master1)) == 0){
        tick();
        valid |= top->mvalid_o;
        top->mvalid_i = ~valid;
    }
    top->mvalid_i = 0;
    tick();
    if(read(master1, addr0) != data0)
        return 1;
        
    if(read(master0, addr1) != data1)
        return 2;
    return 0;
}

void n_write(int master, int addr, int data[7], int n){
    top->mnaccess_i = n;
    for(int i = 0; i < n; i++){
        write_nowait(master, addr, data[i]);
        tick();
        while(top->mvalid_o & (1 << master) == 0){
            tick();
        }
    }
    top->mvalid_i = 0;
    top->mnaccess_i = 0;
    tick();
}

int n_read(int master, int addr, int data[7], int n){
    top->mnaccess_i = n;
    for(int i = 0; i < n; i++){
        read_nowait(master, addr);
        tick();
        while(top->mvalid_o & (1 << master) == 0){
            tick();
        }
        if((uint32_t) (top->mdata_o >> (32 * master)) != data[i])
            return i + 1;
    }
    top->mvalid_i = 0;
    top->mnaccess_i = 0;
    tick();
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
    tick();

    // Read request on both masters at the same time
    if(simultaneous_read(1, 0, 0x8, 0xc) != (uint128_t) 0xababcdcddedefafa)
        return 1<<7;

    tick();
    if(simultaneous_read_write(0, 1, 0x10, 0x10, 0x0000ffff) != 0x0000ffff)
        return 1000;

    tick(); // TODO: This additional tick is currently required in order for the
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
    int result = 0;
    
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    Verilated::mkdir("logs");
    tfp->open("logs/vlt_dump.vcd");  // Open the dump file
    
    // Reset the core
    top->clk = 0;
    top->rstn_i = 0;
    top->mvalid_i = 0;
    top->maddr_i = 0;
    top->mdata_i = 0;
    top->mwe_i = 0;
    top->mnaccess_i = 0;
    for(int i = 0; i < 4; i++){
        tick();
    }
    top->rstn_i = 1;

    // Run tests
    // result = simultaneous_write(0, 1, 0x8, 0x14, 0xdeadbeef, 0xbeefdead);

    result = test_wishbone();

    // Final model cleanup
    tick();
    top->final();

    if(result == 0)
        std::cout << "PASSED" << std::endl;
    else
        std::cout << "FAILED " << result << std::endl;
    

    // Close trace if opened
    if (tfp) { tfp->close(); tfp = NULL; }

    //  Coverage analysis (since test passed)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    VerilatedCov::write("logs/coverage.dat");
#endif

    // Destroy model
    delete top; top = NULL;

    // Fin
    exit(0);
}
