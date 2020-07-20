#include <verilated.h>
#include "Vcore_wrapper.h"
#include "testbench.h"

TESTBENCH<Vcore_wrapper> *tb;

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    tb = new TESTBENCH<Vcore_wrapper>();
    tb->opentrace("logs/trace.vcd");

    int result = 0;

    // Initialize inputs

    // Reset
    tb->reset();

    // Run tests
    for(int i = 0; i < 1000; i++)
        tb->tick();

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
