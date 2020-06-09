#include <verilated.h>
#include "Vriscv_top.h"

#if VM_TRACE
# include <verilated_vcd_c.h>
#endif

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    long r;
    int flags;
    Vriscv_top* top = new Vriscv_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    Verilated::mkdir("logs");
    tfp->open("logs/vlt_dump.vcd");  // Open the dump file
    
    // Set some inputs
    int clk = 0;
    top->clk = 0;
    top->resetn_i = 0;
    for(clk = 0; clk < 10; clk++){
        top->eval();
        tfp->dump(clk);
        top->clk = !top->clk;
    }
    top->resetn_i = 1;
    for(clk; clk < 10000; clk++){
        top->eval();
        tfp->dump(clk);
        top->clk = !top->clk;
    }
    // Final model cleanup
    top->final();

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
