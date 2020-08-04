#include <verilated.h>
#include "Vcore_wrapper.h"
#include "testbench.h"


int main(int argc, char** argv, char** env) {
    TESTBENCH<Vcore_wrapper> *tb;
    Verilated::commandArgs(argc, argv);
    tb = new TESTBENCH<Vcore_wrapper>();
    tb->opentrace("logs/trace.vcd");

    int result = 0;
    int exp_mem[10][2];    
    for(int i = 0; i < 10; i++){
        exp_mem[i][0] = 100+i*4;
        exp_mem[i][1] = i;
    }

    tb->load_program("main.hex", 0x0);

    for(int i = 0; i < 1000; i++){
        tb->tick();
    }

    result = tb->check_memory((int*) exp_mem, 10);

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
