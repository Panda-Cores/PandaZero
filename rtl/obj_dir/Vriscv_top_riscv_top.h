// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef _Vriscv_top_riscv_top_H_
#define _Vriscv_top_riscv_top_H_

#include "verilated.h"
#include "verilated_cov.h"
#include "Vriscv_top__Dpi.h"

class Vriscv_top__Syms;
class Vriscv_top_core_top;
class VerilatedVcd;

//----------

VL_MODULE(Vriscv_top_riscv_top) {
  public:
    // CELLS
    Vriscv_top_core_top*	core_top_i;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(resetn_i,0,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtogcov__clk,0,0);
    VL_SIG8(__Vtogcov__resetn_i,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vriscv_top__Syms* __VlSymsp;  // Symbol table
  public:
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
	const char* hierp, const char* pagep, const char* commentp);
    
    // PARAMETERS
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_top_riscv_top);  ///< Copying not allowed
  public:
    Vriscv_top_riscv_top(const char* name="TOP");
    ~Vriscv_top_riscv_top();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _settle__TOP__riscv_top__1(Vriscv_top__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
