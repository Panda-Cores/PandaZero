#include <verilated.h>
#include "Vcore_wrapper.h"

#if VM_TRACE
# include <verilated_vcd_c.h>
#endif

static int t_cnt = 0;
static Vcore_wrapper* top = new Vcore_wrapper;
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

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    Verilated::mkdir("logs");
    tfp->open("logs/vlt_dump.vcd");  // Open the dump file
    
    // Set some inputs
    int clk = 0;
    top->clk = 0;
    top->rstn_i = 0;
    for(clk = 0; clk < 10; clk++)
        tick();
    top->rstn_i = 1;

    for(clk; clk < 10000; clk++)
        tick();

    // Final model cleanup
    tick();
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
