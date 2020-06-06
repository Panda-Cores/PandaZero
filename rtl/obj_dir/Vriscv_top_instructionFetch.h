// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef _Vriscv_top_instructionFetch_H_
#define _Vriscv_top_instructionFetch_H_

#include "verilated.h"
#include "verilated_cov.h"
#include "Vriscv_top__Dpi.h"

class Vriscv_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vriscv_top_instructionFetch) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn_i,0,0);
    VL_IN8(fetch_next_i,0,0);
    VL_OUT8(fetch_valid_o,0,0);
    VL_IN(__PVT__ADDR_i,31,0);
    VL_OUT(__PVT__instruction_o,31,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__valid,0,0);
    VL_SIG8(__PVT__i,2,0);
    VL_SIG(__PVT__instruction,31,0);
    VL_SIG(__PVT__instructions[8],31,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtogcov__fetch_next_i,0,0);
    VL_SIG8(__Vtogcov__valid,0,0);
    VL_SIG8(__Vtogcov__i,2,0);
    VL_SIG(__Vtogcov__instructions[8],31,0);
    
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
    VL_UNCOPYABLE(Vriscv_top_instructionFetch);  ///< Copying not allowed
  public:
    Vriscv_top_instructionFetch(const char* name="TOP");
    ~Vriscv_top_instructionFetch();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
    static void _combo__TOP__riscv_top__core_top_i__instructionFetch_i__5(Vriscv_top__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__riscv_top__core_top_i__instructionFetch_i__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_top__core_top_i__instructionFetch_i__3(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_top__core_top_i__instructionFetch_i__1(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_top__core_top_i__instructionFetch_i__4(Vriscv_top__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
