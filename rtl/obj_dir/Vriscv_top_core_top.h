// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef _Vriscv_top_core_top_H_
#define _Vriscv_top_core_top_H_

#include "verilated.h"
#include "verilated_cov.h"
#include "Vriscv_top__Dpi.h"

class Vriscv_top__Syms;
class Vriscv_top_instructionFetch;
class VerilatedVcd;

//----------

VL_MODULE(Vriscv_top_core_top) {
  public:
    // CELLS
    Vriscv_top_instructionFetch*	instructionFetch_i;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn_i,0,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__rd,4,0);
    VL_SIG8(__PVT__rs1,4,0);
    VL_SIG8(__PVT__rs2,4,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__ex_rd,4,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__rs1,4,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__rs2,4,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__decode_valid,0,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__ex_data0_mux,0,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__ex_data1_mux,0,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__fetch_next,0,0);
    VL_SIG8(__PVT__instructionDecode_i__DOT__ex_operation,6,0);
    VL_SIG8(__PVT__execute_i__DOT__ex_valid,0,0);
    VL_SIG8(__PVT__execute_i__DOT__flags,3,0);
    VL_SIG8(__PVT__execute_i__DOT__rd,4,0);
    VL_SIG8(__PVT__execute_i__DOT__ID_next,0,0);
    VL_SIG8(__PVT__execute_i__DOT__operation,6,0);
    VL_SIG8(__PVT__execute_i__DOT__alu_i__DOT__overflow,0,0);
    VL_SIG8(__PVT__writeBack_i__DOT__register_access,0,0);
    VL_SIG8(__PVT__writeBack_i__DOT__execute_next,0,0);
    VL_SIG8(__PVT__writeBack_i__DOT__wb_enable,0,0);
    VL_SIG8(__PVT__writeBack_i__DOT__rd,4,0);
    VL_SIG8(__PVT__writeBack_i__DOT__rd_t,4,0);
    VL_SIG(__PVT__rd_data,31,0);
    VL_SIG(__PVT__rs1_data,31,0);
    VL_SIG(__PVT__rs2_data,31,0);
    VL_SIG(__PVT__rs1_data_ID,31,0);
    VL_SIG(__PVT__rs2_data_ID,31,0);
    VL_SIG(__PVT__instructionDecode_i__DOT__ex_data0,31,0);
    VL_SIG(__PVT__instructionDecode_i__DOT__ex_data1,31,0);
    VL_SIG(__PVT__instructionDecode_i__DOT__immediate,31,0);
    VL_SIG(__PVT__instructionDecode_i__DOT__instruction,31,0);
    VL_SIG(__PVT__execute_i__DOT__data0,31,0);
    VL_SIG(__PVT__execute_i__DOT__data1,31,0);
    VL_SIG(__PVT__execute_i__DOT__result,31,0);
    VL_SIG(__PVT__execute_i__DOT__alu_i__DOT__result,31,0);
    VL_SIG(__PVT__writeBack_i__DOT__rd_data,31,0);
    VL_SIG(__PVT__writeBack_i__DOT__rd_data_t,31,0);
    VL_SIG(__PVT__registerFile_i__DOT__registers[32],31,0);
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtogcov__register_access,0,0);
    VL_SIG8(__Vtogcov__rd,4,0);
    VL_SIG8(__Vtogcov__rs1,4,0);
    VL_SIG8(__Vtogcov__rs2,4,0);
    VL_SIG8(__Vtogcov__instr_valid,0,0);
    VL_SIG8(__Vtogcov__next_instr,0,0);
    VL_SIG8(__Vtogcov__ID_valid,0,0);
    VL_SIG8(__Vtogcov__next_ID,0,0);
    VL_SIG8(__Vtogcov__rs1_ID,4,0);
    VL_SIG8(__Vtogcov__rs2_ID,4,0);
    VL_SIG8(__Vtogcov__ex_rd,4,0);
    VL_SIG8(__Vtogcov__ex_operation,6,0);
    VL_SIG8(__Vtogcov__ex_valid,0,0);
    VL_SIG8(__Vtogcov__ex_next,0,0);
    VL_SIG8(__Vtogcov__ex_flags,3,0);
    VL_SIG8(__Vtogcov__wb_rd,4,0);
    VL_SIG8(__Vtogcov__rd_WB,4,0);
    VL_SIG8(instructionDecode_i__DOT____Vtogcov__ex_data0_mux,0,0);
    VL_SIG8(instructionDecode_i__DOT____Vtogcov__ex_data1_mux,0,0);
    VL_SIG8(execute_i__DOT____Vtogcov__alu_overflow,0,0);
    VL_SIG8(execute_i__DOT____Vtogcov__operation,6,0);
    VL_SIG8(writeBack_i__DOT____Vtogcov__wb_enable,0,0);
    VL_SIG8(writeBack_i__DOT____Vtogcov__rd_t,4,0);
    VL_SIG(__Vtogcov__rd_data,31,0);
    VL_SIG(__Vtogcov__rs1_data,31,0);
    VL_SIG(__Vtogcov__rs2_data,31,0);
    VL_SIG(__Vtogcov__instruction,31,0);
    VL_SIG(__Vtogcov__instr_addr,31,0);
    VL_SIG(__Vtogcov__rs1_data_ID,31,0);
    VL_SIG(__Vtogcov__rs2_data_ID,31,0);
    VL_SIG(__Vtogcov__ex_data0,31,0);
    VL_SIG(__Vtogcov__ex_data1,31,0);
    VL_SIG(__Vtogcov__wb_data,31,0);
    VL_SIG(__Vtogcov__rd_data_WB,31,0);
    VL_SIG(instructionDecode_i__DOT____Vtogcov__immediate,31,0);
    VL_SIG(instructionDecode_i__DOT____Vtogcov__instruction,31,0);
    VL_SIG(execute_i__DOT____Vtogcov__data0,31,0);
    VL_SIG(execute_i__DOT____Vtogcov__data1,31,0);
    VL_SIG(execute_i__DOT____Vtogcov__alu_result,31,0);
    VL_SIG(writeBack_i__DOT____Vtogcov__rd_data_t,31,0);
    
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
    VL_UNCOPYABLE(Vriscv_top_core_top);  ///< Copying not allowed
  public:
    Vriscv_top_core_top(const char* name="TOP");
    ~Vriscv_top_core_top();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__riscv_top__core_top_i__3(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_top__core_top_i__4(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_top__core_top_i__5(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_top__core_top_i__1(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_top__core_top_i__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
