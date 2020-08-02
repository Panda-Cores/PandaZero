#include <verilated.h>
#include "Vcore_wrapper.h"
#include "testbench.h"

TESTBENCH<Vcore_wrapper> *tb;

int read(int addr){
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
    for(int i = startAddr; i < (startAddr + len); i++)
        write(i*4, program[i]);
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
    int program[32];

    program[0x0]      = 0b00000001000000000000000010010011;     // addi 16, x0, x1;
    program[0x1]      = 0b00000000000100010000000100010011;     // addi 1, x2, x2;
    program[0x2]      = 0b11111110000100010100111011100011;     // blt x2, x1, -2
    program[0x3]      = 0b00000110001000000000000000100011;     // sw x2, 64+x0;
    program[0x4]      = 0b00000000000100010000000100010011;     // addi 1, x2, x2;
    program[0x5]      = 0b00000000000100011000000110010011;     // addi 1, x3, x3;
    program[0x6]      = 0b00000000000100100000001000010011;     // addi 1, x4, x4;
    program[0x7]      = 0b00000000000100101000001010010011;     // addi 1, x5, x5;
    program[0x8]      = 0b00000000000100110000001100010011;     // addi 1, x6, x6;
    program[0x9]      = 0b00000110001000000010000000100011;     // sw x2, 64+x0;
    program[0xa]      = 0b00000110001100000010001000100011;     // sw x3, 68+x0;
    program[0xb]      = 0b00000110010000000010010000100011;     // sw x4, 72+x0;
    program[0xc]      = 0b00000110010100000010011000100011;     // sw x5, 76+x0;
    program[0xd]      = 0b00000110011000000010100000100011;     // sw x5, 80+x0;
    program[0xe]      = 0b00000000000100010000000100010011;     // addi 1, x2, x2;
    program[0xf]      = 0b00000000000100011000000110010011;     // addi 1, x3, x3;
    program[0x10]     = 0b00000000000100100000001000010011;     // addi 1, x4, x4;
    program[0x11]     = 0b00000000000100101000001010010011;     // addi 1, x5, x5;
    program[0x12]     = 0b00000000000100110000001100010011;     // addi 1, x6, x6;
    program[0x13]     = 0b00000110001000000010000000100011;     // sw x2, 64+x0;
    program[0x14]     = 0b00000110001100000010001000100011;     // sw x3, 68+x0;
    program[0x15]     = 0b00000110010000000010010000100011;     // sw x4, 72+x0;
    program[0x16]     = 0b00000110010100000010011000100011;     // sw x5, 76+x0;
    program[0x17]     = 0b00000110011000000010100000100011;     // sw x5, 80+x0;

    int exp_mem[10][2];
    exp_mem[0][0] = 0x18;
    exp_mem[0][1] = 0x12;
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
    load_program(program, 0x17, 0x4);
    // Resume the core
    set_pc(0x4);
    resume_core();

    for(int i = 0; i < 1000; i++){
        tb->tick();
    }
    int data;
    if(data = read(exp_mem[0][0]*4) != exp_mem[0][1])
        std::cout << "FAILED " << data << std::endl;
    else
        std::cout << "PASSED" << std::endl;
    

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
