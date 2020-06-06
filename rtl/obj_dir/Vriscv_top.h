// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vriscv_top_H_
#define _Vriscv_top_H_

#include "verilated.h"
#include "verilated_cov.h"

class Vriscv_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vriscv_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(resetn_i,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_IF_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__IF_ID_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_ID_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_EX_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_REG_rs1,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_REG_rs2,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_WB_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__WB_EX_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__WB_REG_rd,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__REG_mux,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__j,1,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__i,2,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs1,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs2,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs2_mux,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_operation,3,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__overflow,0,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_ID_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_EX_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_EX_rs1,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_EX_rs2,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_WB_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_WB_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_REG_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__REG_rs1_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__REG_rs2_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__CS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__NS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__IF_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__CS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__NS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_EX_rs2_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT__immediate,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__CS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__NS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d0,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d1,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_result,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__result,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT__CS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT__NS,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[32],31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[8],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(riscv_top__DOT____Vtogcov__clk,0,0);
    VL_SIG8(riscv_top__DOT____Vtogcov__resetn_i,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_IF_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__IF_ID_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__EX_ID_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_EX_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_REG_rs1,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_REG_rs2,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__EX_WB_give,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__WB_EX_get,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__WB_REG_rd,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT____Vtogcov__REG_mux,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__IF_i__DOT____Vtogcov__j,1,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__IF_i__DOT____Vtogcov__i,2,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__rs1,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__rs2,4,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__rs2_mux,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__alu_operation,3,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__alu_overflow,0,0);
    VL_SIG8(riscv_top__DOT__core_top_i__DOT__WB_i__DOT____Vtogcov__WB_REG_access_o,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__IF_ID_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_EX_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_EX_rs1,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__ID_EX_rs2,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__REG_ID_rs1_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__REG_ID_rs2_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__EX_WB_instr,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__EX_WB_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT____Vtogcov__WB_REG_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT____Vtogcov__IF_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__ID_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__ID_EX_rs2_d,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__ID_i__DOT____Vtogcov__immediate,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__EX_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__EX_d0,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__EX_d1,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__alu_result,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__EX_i__DOT____Vtogcov__EX_result,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT____Vtogcov__WB_instruction,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__WB_i__DOT____Vtogcov__WB_d,31,0);
    VL_SIG(__Vchglast__TOP__riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__result,31,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG(riscv_top__DOT__core_top_i__DOT__IF_i__DOT____Vtogcov__instructions[8],31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_top__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
	const char* hierp, const char* pagep, const char* commentp);
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_top(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vriscv_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__6(Vriscv_top__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _eval(Vriscv_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_top__Syms* __restrict vlSymsp);
    static void _eval_settle(Vriscv_top__Syms* __restrict vlSymsp);
    static void _initial__TOP__3(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vriscv_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
