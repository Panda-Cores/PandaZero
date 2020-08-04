#include <verilated.h>
#include "Vcore_wrapper.h"
#include "testbench.h"

TESTBENCH<Vcore_wrapper> *tb;

int read_mem(int addr){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_addr_i = addr;
    tb->m_core->dbg_cmd_i = 0x01;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    return (int) tb->m_core->dbg_data_o;
}

int read_reg(int reg){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_addr_i = reg;
    tb->m_core->dbg_cmd_i = 0x13;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    return (int) tb->m_core->dbg_data_o;
}

void write_reg(int reg, int data){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_addr_i = reg;
    tb->m_core->dbg_cmd_i = 0x14;
    tb->m_core->dbg_data_i = data;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    tb->tick();
}

void write(int addr, int data){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_addr_i = addr;
    tb->m_core->dbg_data_i = data;
    tb->m_core->dbg_cmd_i = 0x02;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    tb->tick();
}

void halt_core(){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x11;
    tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
}

void resume_core(){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x12;
    tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
}

void reset_core(){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x03;
    tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
}

int read_pc(){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x15;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    return (int) tb->m_core->dbg_data_o;
}

void set_pc(int pc){
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x16;
    tb->m_core->dbg_data_i = pc;
    tb->tick();
    while(tb->m_core->dbg_ready_o == 0)
        tb->tick();
    tb->m_core->dbg_cmd_i = 0x0;
    tb->tick();
}

void load_program(int program[1024], int len, int startAddr){
    halt_core();
    for(int i = 0; i < len; i++){
        write(startAddr + 4*i, program[i]);
    }
}

int test_registers(){
    // Register 0 should never be changed
    write_reg(0x0, 0xff);
    if(read_reg(0x0) != 0x0)
        return 1;
    
    for(int i = 1; i < 32; i++){
        write_reg(i, 0xf00+i);
        if(read_reg(i) != (0xf00+i))
            return i;
        // Clear register again
        write_reg(i, 0x0);
    }

    return 0;
}

int main(int argc, char** argv, char** env) {
    int program[1024];
    int instr_cnt = 0;
    size_t len = 0;
    ssize_t read;
    char * line = NULL;
    int exp_mem[10][2];
    FILE *fp;
    fp = fopen("main.hex", "r");
    if(fp){
        while((read = getline(&line, &len, fp)) != -1){
            program[instr_cnt] = (int)strtol(line, NULL, 16);;
            instr_cnt +=1;
        }
    } else {
        std::cout << "Error reading dump" << std::endl;
        exit(-10);
    }

    // fclose(fp);
    // if(line != NULL){free(line);}
    for(int i = 0; i < 10; i++){
        exp_mem[i][0] = 100+i*4;
        exp_mem[i][1] = i;
    }
    
    Verilated::commandArgs(argc, argv);
    tb = new TESTBENCH<Vcore_wrapper>();
    tb->opentrace("logs/trace.vcd");

    int result = 0;

    // Initialize inputs

    // Reset
    tb->reset();

    // Stop the core
    halt_core();

    // Test reading and writing to register        
    result = test_registers();
    if(result != 0){
        std::cout << "regcheck FAILED " << result << std::endl;
        exit(0);
    }
    // Load the program
    load_program(program, instr_cnt, 0x0);
    // Resume the core
    set_pc(0x0);
    resume_core();

    for(int i = 0; i < 1000; i++){
        tb->tick();
    }
    int data;
    for(int i = 0; i < 10; i++){
        if(data = read_mem(exp_mem[i][0]) != exp_mem[i][1])
            std::cout << "FAILED " << data << std::endl;
        else
            std::cout << "PASSED" << std::endl;
    }
    

    // Cleanup
    tb->tick();
    tb->m_core->final();

    // Evaluate test
    // if(result == 0)
    //     std::cout << "PASSED" << std::endl;
    // else
    //     std::cout << "FAILED " << result << std::endl;
    
    //  Coverage analysis (since test passed)
    VerilatedCov::write("logs/coverage.dat");

    // Destroy model
    delete tb->m_core; tb->m_core = NULL;

    exit(0);
}
