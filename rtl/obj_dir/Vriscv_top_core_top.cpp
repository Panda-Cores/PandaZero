// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top_core_top.h"
#include "Vriscv_top__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vriscv_top_core_top) {
    VL_CELL(instructionFetch_i, Vriscv_top_instructionFetch);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_top_core_top::__Vconfigure(Vriscv_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    this->_configure_coverage(vlSymsp, first);
}

Vriscv_top_core_top::~Vriscv_top_core_top() {
}

// Coverage
void Vriscv_top_core_top::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    static uint32_t fake_zero_count = 0;
    if (!enable) countp = &fake_zero_count;
    *countp = 0;
    VL_COVER_INSERT(countp,  "filename",filenamep,  "lineno",lineno,  "column",column,
	"hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

//--------------------
// Internal Methods

void Vriscv_top_core_top::_settle__TOP__riscv_top__core_top_i__1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_settle__TOP__riscv_top__core_top_i__1\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/core_top.sv:67
    if ((1U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_addr)) {
	++(vlSymsp->__Vcoverage[148]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_addr 
	    = (0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_addr);
    }
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers[0U] = 0U;
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux) {
	++(vlSymsp->__Vcoverage[454]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux)))) {
	++(vlSymsp->__Vcoverage[455]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_instr)) {
	++(vlSymsp->__Vcoverage[147]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_instr 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data0_mux)) {
	++(vlSymsp->__Vcoverage[388]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data0_mux 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux;
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[156]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[157]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[158]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[159]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[160]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[474]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[475]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[476]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[477]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[478]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[479]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[480]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[481]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[482]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[483]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[484]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[485]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[486]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[487]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[488]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[489]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[490]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[491]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[492]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[493]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[494]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[495]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[496]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[497]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[498]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[499]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[500]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[501]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[502]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[503]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[504]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[505]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[506]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[507]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[508]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[509]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[510]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[511]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[512]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[513]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[514]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[515]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[516]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[517]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[518]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[519]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[520]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[521]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[522]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[523]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[524]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[525]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[526]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[527]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[528]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[529]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[530]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[531]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[532]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[533]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[534]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[535]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[536]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[537]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[303]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xeU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[304]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xdU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[305]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xbU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[306]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((7U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[307]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[308]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[309]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[310]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[311]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[312]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[313]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[314]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[315]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[316]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[317]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[318]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[319]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[320]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[321]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[322]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[323]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[324]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[325]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[326]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[327]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[328]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[329]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[330]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[331]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[332]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[333]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[334]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[335]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[336]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[337]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[338]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[589]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[590]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[591]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[592]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[586]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[598]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[595]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[583]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[587]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[593]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[585]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[597]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[596]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[588]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[594]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[584]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow 
		    = (1U & ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
			      ? (IData)((VL_ULL(1) 
					 & (((QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0)) 
					     - (QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))) 
					    >> 0x20U)))
			      : (IData)((VL_ULL(1) 
					 & (((QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0)) 
					     + (QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))) 
					    >> 0x20U)))));
	    }
	}
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[571]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[572]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[573]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[574]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x77U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[575]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x6fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[576]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x5fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x20U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[577]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x3fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x40U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	= ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	    ? ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	        ? ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? ((vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			    == vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
			    ? 1U : 0U) : ((vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   > vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
					   ? 1U : 0U))
		    : ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      ^ vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		        : (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      | vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))))
	        : ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		        : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   ^ vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		    : ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   | vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
		        : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))))
	    : ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	        ? ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   << 0x1fU)) 
			   | (0x7fffffffU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					     >> 1U)))
		        : ((0xfffffffeU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   << 1U)) 
			   | (1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
				    >> 0x1fU)))) : 
		   ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		     ? (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			>> 1U) : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
				  << 1U))) : ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
					       ? ((1U 
						   & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
						   ? 
						  VL_DIV_III(32, vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0, vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
						   : 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   * vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
					       : ((1U 
						   & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
						   ? 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   - vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
						   : 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   + vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)))));
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux) {
	++(vlSymsp->__Vcoverage[456]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux)))) {
	++(vlSymsp->__Vcoverage[457]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data1_mux)) {
	++(vlSymsp->__Vcoverage[389]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data1_mux 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux;
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[151]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[152]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[153]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[154]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[155]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[225]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[226]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[227]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[228]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[229]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[294]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[295]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[296]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[297]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x77U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[298]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x6fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[299]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x5fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x20U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[300]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x3fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x40U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[390]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[391]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[392]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[393]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[394]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[395]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[396]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[397]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[398]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[399]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[400]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[401]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[402]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[403]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[404]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[405]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[406]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[407]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[408]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[409]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[410]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[411]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[412]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[413]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[414]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[415]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[416]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[417]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[418]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[419]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[420]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[421]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	++(vlSymsp->__Vcoverage[381]);
    }
    // ALWAYS at core/core_top.sv:67
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)))) {
	++(vlSymsp->__Vcoverage[382]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__register_access)) {
	++(vlSymsp->__Vcoverage[2]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__register_access 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ID_valid)) {
	++(vlSymsp->__Vcoverage[149]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ID_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_ID)) {
	++(vlSymsp->__Vcoverage[150]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next;
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[344]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[345]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[346]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[347]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[348]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[349]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[350]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[351]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[352]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[353]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[354]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[355]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[356]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[357]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[358]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[359]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[360]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[361]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[362]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[363]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[364]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[365]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[366]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[367]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[368]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[369]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[370]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[371]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[372]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[373]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[374]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[375]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[376]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[377]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[378]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[379]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[380]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[422]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[423]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[424]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[425]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[426]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[427]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[428]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[429]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[430]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[431]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[432]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[433]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[434]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[435]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[436]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[437]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[438]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[439]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[440]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[441]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[442]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[443]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[444]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[445]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[446]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[447]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[448]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[449]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[450]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[451]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[452]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[453]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[606]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[607]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[608]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[609]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[610]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[611]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[612]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[613]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[614]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[615]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[616]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[617]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[618]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[619]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[620]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[621]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[622]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[623]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[624]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[625]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[626]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[627]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[628]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[629]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[630]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[631]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[632]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[633]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[634]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[635]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[636]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[637]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd = 
	((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	  ? 0U : (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd));
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2;
    }
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	    ? (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)
	    : 0U);
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	    ? 0U : vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data);
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i 
	= vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_valid)) {
	++(vlSymsp->__Vcoverage[301]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_next)) {
	++(vlSymsp->__Vcoverage[302]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_next 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__wb_enable)) {
	++(vlSymsp->__Vcoverage[600]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__wb_enable 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable;
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[339]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[340]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[341]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[342]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[343]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[601]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[602]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[603]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[604]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[605]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[114]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[115]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[116]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[117]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[118]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[119]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[120]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[121]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[122]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[123]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[124]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[125]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[126]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[127]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[128]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[129]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[130]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[131]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[132]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[133]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[134]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[135]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[136]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[137]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[138]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[139]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[140]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[141]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[142]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[143]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[144]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[145]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_overflow)) {
	++(vlSymsp->__Vcoverage[570]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_overflow 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[538]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[539]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[540]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[541]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[542]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[543]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[544]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[545]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[546]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[547]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[548]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[549]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[550]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[551]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[552]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[553]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[554]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[555]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[556]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[557]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[558]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[559]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[560]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[561]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[562]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[563]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[564]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[565]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[566]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[567]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[568]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[569]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    // ALWAYS at core/registerFile.sv:25
    if (((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)) 
	 & (0U != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)))) {
	++(vlSymsp->__Vcoverage[383]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[3]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[4]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[5]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[6]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[7]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU == (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))) {
	++(vlSymsp->__Vcoverage[387]);
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))) {
	++(vlSymsp->__Vcoverage[386]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[13]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[14]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[15]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[16]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[17]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU == (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))) {
	++(vlSymsp->__Vcoverage[385]);
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))) {
	++(vlSymsp->__Vcoverage[384]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[8]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[9]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[10]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[11]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[12]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[18]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[19]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[20]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[21]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[22]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[23]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[24]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[25]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[26]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[27]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[28]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[29]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[30]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[31]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[32]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[33]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[34]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[35]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[36]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[37]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[38]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[39]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[40]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[41]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[42]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[43]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[44]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[45]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[46]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[47]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[48]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[49]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    // ALWAYS at core/registerFile.sv:25
    if (((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)) 
	 & (0U != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)))) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers[vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd] 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data;
    }
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	= ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers
	   [vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1]
	    : 0U);
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	= ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers
	   [vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2]
	    : 0U);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[50]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[51]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[52]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[53]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[54]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[55]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[56]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[57]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[58]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[59]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[60]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[61]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[62]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[63]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[64]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[65]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[66]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[67]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[68]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[69]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[70]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[71]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[72]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[73]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[74]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[75]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[76]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[77]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[78]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[79]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[80]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[81]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[82]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[83]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[84]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[85]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[86]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[87]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[88]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[89]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[90]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[91]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[92]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[93]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[94]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[95]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[96]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[97]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[98]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[99]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[100]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[101]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[102]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[103]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[104]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[105]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[106]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[107]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[108]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[109]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[110]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[111]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[112]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[113]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[161]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[162]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[163]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[164]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[165]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[166]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[167]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[168]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[169]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[170]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[171]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[172]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[173]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[174]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[175]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[176]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[177]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[178]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[179]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[180]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[181]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[182]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[183]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[184]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[185]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[186]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[187]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[188]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[189]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[190]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[191]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[192]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux)
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate
	    : vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[193]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[194]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[195]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[196]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[197]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[198]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[199]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[200]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[201]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[202]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[203]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[204]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[205]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[206]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[207]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[208]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[209]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[210]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[211]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[212]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[213]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[214]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[215]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[216]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[217]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[218]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[219]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[220]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[221]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[222]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[223]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[224]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux)
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate
	    : vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[230]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[231]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[232]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[233]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[234]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[235]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[236]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[237]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[238]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[239]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[240]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[241]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[242]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[243]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[244]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[245]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[246]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[247]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[248]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[249]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[250]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[251]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[252]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[253]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[254]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[255]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[256]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[257]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[258]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[259]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[260]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[261]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[262]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[263]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[264]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[265]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[266]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[267]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[268]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[269]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[270]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[271]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[272]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[273]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[274]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[275]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[276]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[277]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[278]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[279]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[280]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[281]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[282]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[283]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[284]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[285]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[286]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[287]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[288]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[289]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[290]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[291]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[292]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[293]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
}

void Vriscv_top_core_top::_settle__TOP__riscv_top__core_top_i__2(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_settle__TOP__riscv_top__core_top_i__2\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_valid)) {
	++(vlSymsp->__Vcoverage[146]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o;
    }
}

void Vriscv_top_core_top::_initial__TOP__riscv_top__core_top_i__3(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_initial__TOP__riscv_top__core_top_i__3\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at core/core_top.sv:63
}

VL_INLINE_OPT void Vriscv_top_core_top::_sequent__TOP__riscv_top__core_top_i__4(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_sequent__TOP__riscv_top__core_top_i__4\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__instructionDecode_i__DOT__decode_valid,0,0);
    VL_SIG8(__Vdly__execute_i__DOT__rd,4,0);
    VL_SIG8(__Vdly__execute_i__DOT__ex_valid,0,0);
    VL_SIG(__Vdly__writeBack_i__DOT__rd_data_t,31,0);
    // Body
    __Vdly__instructionDecode_i__DOT__decode_valid 
	= vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid;
    __Vdly__execute_i__DOT__rd = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd;
    __Vdly__execute_i__DOT__ex_valid = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid;
    __Vdly__writeBack_i__DOT__rd_data_t = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t;
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) {
	++(vlSymsp->__Vcoverage[638]);
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid)))) {
	++(vlSymsp->__Vcoverage[639]);
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) {
	++(vlSymsp->__Vcoverage[578]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o) {
	++(vlSymsp->__Vcoverage[458]);
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable) {
	++(vlSymsp->__Vcoverage[640]);
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	++(vlSymsp->__Vcoverage[582]);
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid)))) {
	if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	    ++(vlSymsp->__Vcoverage[579]);
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	++(vlSymsp->__Vcoverage[473]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o)))) {
	if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	     & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	    ++(vlSymsp->__Vcoverage[459]);
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			      >> 0xeU)))) {
		    if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				  >> 0xdU)))) {
			if ((0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			    ++(vlSymsp->__Vcoverage[465]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			      >> 0xeU)))) {
		    if ((0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			++(vlSymsp->__Vcoverage[467]);
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
		    if ((0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			if ((0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			    ++(vlSymsp->__Vcoverage[464]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
		    if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				  >> 0xdU)))) {
			if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				      >> 0xcU)))) {
			    ++(vlSymsp->__Vcoverage[462]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    ++(vlSymsp->__Vcoverage[460]);
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			      >> 0xeU)))) {
		    if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				  >> 0xdU)))) {
			if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				      >> 0xcU)))) {
			    ++(vlSymsp->__Vcoverage[461]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x33U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		    if ((0U != (7U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				      >> 0xcU)))) {
			++(vlSymsp->__Vcoverage[470]);
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
		    if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				  >> 0xdU)))) {
			if ((0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			    ++(vlSymsp->__Vcoverage[466]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
		    if ((0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
			if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				      >> 0xcU)))) {
			    ++(vlSymsp->__Vcoverage[463]);
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		++(vlSymsp->__Vcoverage[468]);
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x33U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		    if ((0U == (7U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				      >> 0xcU)))) {
			++(vlSymsp->__Vcoverage[469]);
		    }
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x33U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		    ++(vlSymsp->__Vcoverage[471]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    if ((0x13U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		if ((0x33U != (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		    ++(vlSymsp->__Vcoverage[472]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	if ((0U == (7U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 4U)))) {
	    ++(vlSymsp->__Vcoverage[580]);
	}
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	if ((0U != (7U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 4U)))) {
	    ++(vlSymsp->__Vcoverage[581]);
	}
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux = 0U;
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0;
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1;
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2 = 0U;
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    __Vdly__instructionDecode_i__DOT__decode_valid = 0U;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	__Vdly__instructionDecode_i__DOT__decode_valid = 1U;
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o)))) {
	if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	     & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next = 1U;
	}
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) {
	__Vdly__execute_i__DOT__rd = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd;
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) {
	__Vdly__writeBack_i__DOT__rd_data_t = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result;
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux) {
	++(vlSymsp->__Vcoverage[454]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux)))) {
	++(vlSymsp->__Vcoverage[455]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data0_mux)) {
	++(vlSymsp->__Vcoverage[388]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data0_mux 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[474]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[475]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[476]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[477]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[478]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[479]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[480]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[481]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[482]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[483]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[484]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[485]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[486]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[487]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[488]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[489]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[490]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[491]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[492]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[493]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[494]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[495]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[496]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[497]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[498]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[499]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[500]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[501]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[502]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[503]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[504]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0))) {
	++(vlSymsp->__Vcoverage[505]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data0) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[506]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[507]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[508]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[509]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[510]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[511]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[512]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[513]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[514]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[515]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[516]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[517]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[518]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[519]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[520]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[521]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[522]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[523]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[524]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[525]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[526]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[527]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[528]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[529]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[530]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[531]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[532]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[533]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[534]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[535]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[536]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1))) {
	++(vlSymsp->__Vcoverage[537]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__data1) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[156]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[157]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[158]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[159]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID))) {
	++(vlSymsp->__Vcoverage[160]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_ID)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2)));
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_instr)) {
	++(vlSymsp->__Vcoverage[147]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_instr 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next;
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    __Vdly__execute_i__DOT__ex_valid = 0U;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags = 0U;
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	if ((0U == (7U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 4U)))) {
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		= vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result;
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags 
		= ((0xeU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)) 
		   | (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow));
	    __Vdly__execute_i__DOT__ex_valid = 1U;
	}
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[303]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xeU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[304]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xdU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[305]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((0xbU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags))) {
	++(vlSymsp->__Vcoverage[306]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags 
	    = ((7U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_flags)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__flags)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[307]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[308]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[309]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[310]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[311]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[312]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[313]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[314]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[315]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[316]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[317]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[318]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[319]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[320]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[321]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[322]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[323]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[324]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[325]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[326]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[327]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[328]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[329]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[330]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[331]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[332]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[333]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[334]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[335]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[336]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[337]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data))) {
	++(vlSymsp->__Vcoverage[338]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__result));
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation;
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[589]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[590]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[591]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[592]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[586]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[598]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[595]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[583]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[587]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[593]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[585]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)))) {
		    ++(vlSymsp->__Vcoverage[597]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[596]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[588]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[594]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		if ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))) {
		    ++(vlSymsp->__Vcoverage[584]);
		}
	    }
	}
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  >> 3U)))) {
	if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		      >> 2U)))) {
	    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
			  >> 1U)))) {
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow 
		    = (1U & ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
			      ? (IData)((VL_ULL(1) 
					 & (((QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0)) 
					     - (QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))) 
					    >> 0x20U)))
			      : (IData)((VL_ULL(1) 
					 & (((QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0)) 
					     + (QData)((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))) 
					    >> 0x20U)))));
	    }
	}
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[571]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[572]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[573]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x7bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[574]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x77U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[575]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x6fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[576]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x5fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x20U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation))) {
	++(vlSymsp->__Vcoverage[577]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation 
	    = ((0x3fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__operation)) 
	       | (0x40U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation)));
    }
    // ALWAYS at core/pipelineStages/execute/alu.sv:28
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	= ((8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	    ? ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	        ? ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? ((vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			    == vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
			    ? 1U : 0U) : ((vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   > vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
					   ? 1U : 0U))
		    : ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      ^ vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		        : (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      | vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))))
	        : ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			      & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		        : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   ^ vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
		    : ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   | vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
		        : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			   & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))))
	    : ((4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
	        ? ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		    ? ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		        ? ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   << 0x1fU)) 
			   | (0x7fffffffU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					     >> 1U)))
		        : ((0xfffffffeU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
					   << 1U)) 
			   | (1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
				    >> 0x1fU)))) : 
		   ((1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
		     ? (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
			>> 1U) : (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
				  << 1U))) : ((2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
					       ? ((1U 
						   & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
						   ? 
						  VL_DIV_III(32, vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0, vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
						   : 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   * vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1))
					       : ((1U 
						   & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__operation))
						   ? 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   - vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)
						   : 
						  (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data0 
						   + vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__data1)))));
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation = 0x3fU;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1 = 0U;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux = 0U;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access))) {
	if ((0x37U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1 = 0U;
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		= (0xfffff000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction);
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd 
		= (0x1fU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			    >> 7U));
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux = 1U;
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation = 0U;
	} else {
	    if ((0x13U == (0x7fU & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction))) {
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1 
		    = (0x1fU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				>> 0xfU));
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    = (0xfffU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				 >> 0x14U));
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd 
		    = (0x1fU & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				>> 7U));
		vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux = 1U;
		if ((0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)) {
		    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation 
			= ((0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)
			    ? ((0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)
			        ? 8U : 9U) : ((0x1000U 
					       & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)
					       ? 5U
					       : 0xaU));
		} else {
		    if ((1U & (~ (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
				  >> 0xdU)))) {
			vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation 
			    = ((0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction)
			        ? 4U : 0U);
		    }
		}
	    }
	}
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_overflow)) {
	++(vlSymsp->__Vcoverage[570]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_overflow 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__overflow;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[538]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[539]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[540]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[541]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[542]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[543]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[544]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[545]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[546]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[547]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[548]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[549]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[550]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[551]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[552]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[553]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[554]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[555]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[556]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[557]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[558]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[559]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[560]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[561]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[562]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[563]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[564]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[565]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[566]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[567]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[568]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result 
			^ vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result))) {
	++(vlSymsp->__Vcoverage[569]);
	vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.execute_i__DOT____Vtogcov__alu_result) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__alu_i__DOT__result));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[225]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[226]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[227]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[228]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd))) {
	++(vlSymsp->__Vcoverage[229]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_rd)));
    }
    // ALWAYS at core/pipelineStages/execute/execute.sv:44
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid)))) {
	if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) {
	    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next = 1U;
	}
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[294]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[295]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[296]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x7bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[297]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x77U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[298]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x6fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[299]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x5fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x20U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation))) {
	++(vlSymsp->__Vcoverage[300]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation 
	    = ((0x3fU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_operation)) 
	       | (0x40U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_operation)));
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux) {
	++(vlSymsp->__Vcoverage[456]);
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux)))) {
	++(vlSymsp->__Vcoverage[457]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data1_mux)) {
	++(vlSymsp->__Vcoverage[389]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__ex_data1_mux 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[390]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[391]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[392]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[393]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[394]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[395]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[396]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[397]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[398]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[399]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[400]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[401]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[402]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[403]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[404]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[405]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[406]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[407]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[408]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[409]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[410]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[411]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[412]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[413]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[414]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[415]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[416]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[417]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[418]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[419]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[420]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate))) {
	++(vlSymsp->__Vcoverage[421]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__immediate) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[151]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[152]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[153]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[154]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID))) {
	++(vlSymsp->__Vcoverage[155]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_ID)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)));
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd = 0U;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access = 1U;
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access = 0U;
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t;
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t;
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:78
    if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction;
    }
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid 
	= __Vdly__instructionDecode_i__DOT__decode_valid;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	= __Vdly__writeBack_i__DOT__rd_data_t;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_ID)) {
	++(vlSymsp->__Vcoverage[150]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__next_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ID_next;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ID_valid)) {
	++(vlSymsp->__Vcoverage[149]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ID_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__decode_valid;
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid)))) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next = 1U;
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable = 0U;
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable = 1U;
    }
    // ALWAYS at core/pipelineStages/write_back/writeBack.sv:36
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[606]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[607]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[608]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[609]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[610]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[611]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[612]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[613]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[614]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[615]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[616]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[617]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[618]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[619]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[620]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[621]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[622]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[623]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[624]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[625]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[626]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[627]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[628]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[629]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[630]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[631]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[632]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[633]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[634]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[635]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[636]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t 
			^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t))) {
	++(vlSymsp->__Vcoverage[637]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_data_t) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data_t));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[344]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[345]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[346]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[347]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB))) {
	++(vlSymsp->__Vcoverage[348]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_WB)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[349]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[350]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[351]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[352]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[353]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[354]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[355]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[356]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[357]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[358]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[359]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[360]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[361]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[362]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[363]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[364]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[365]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[366]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[367]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[368]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[369]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[370]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[371]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[372]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[373]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[374]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[375]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[376]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[377]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[378]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[379]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB))) {
	++(vlSymsp->__Vcoverage[380]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data_WB) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	++(vlSymsp->__Vcoverage[381]);
    }
    // ALWAYS at core/core_top.sv:67
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)))) {
	++(vlSymsp->__Vcoverage[382]);
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__register_access)) {
	++(vlSymsp->__Vcoverage[2]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__register_access 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access;
    }
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd = 
	((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	  ? 0U : (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd));
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs2;
    }
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	    ? (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__rs1)
	    : 0U);
    // ALWAYS at core/core_top.sv:67
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access)
	    ? 0U : vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_data);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[422]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[423]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[424]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[425]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[426]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[427]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[428]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[429]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[430]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[431]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[432]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[433]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[434]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[435]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[436]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[437]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[438]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[439]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[440]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[441]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[442]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[443]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[444]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[445]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[446]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[447]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[448]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[449]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[450]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[451]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[452]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[453]);
	vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.instructionDecode_i__DOT____Vtogcov__instruction) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__instruction));
    }
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid 
	= __Vdly__execute_i__DOT__ex_valid;
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd 
	= __Vdly__execute_i__DOT__rd;
    // ALWAYS at core/registerFile.sv:25
    if (((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)) 
	 & (0U != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)))) {
	++(vlSymsp->__Vcoverage[383]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[3]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[4]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[5]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[6]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd))) {
	++(vlSymsp->__Vcoverage[7]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)));
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU == (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))) {
	++(vlSymsp->__Vcoverage[387]);
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))) {
	++(vlSymsp->__Vcoverage[386]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[13]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[14]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[15]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[16]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2))) {
	++(vlSymsp->__Vcoverage[17]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2)));
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU == (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))) {
	++(vlSymsp->__Vcoverage[385]);
    }
    // ALWAYS at core/registerFile.sv:25
    if ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))) {
	++(vlSymsp->__Vcoverage[384]);
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[8]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[9]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[10]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[11]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1))) {
	++(vlSymsp->__Vcoverage[12]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[18]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[19]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[20]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[21]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[22]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[23]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[24]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[25]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[26]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[27]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[28]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[29]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[30]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[31]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[32]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[33]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[34]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[35]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[36]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[37]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[38]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[39]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[40]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[41]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[42]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[43]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[44]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[45]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[46]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[47]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[48]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data))) {
	++(vlSymsp->__Vcoverage[49]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rd_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data));
    }
    // ALWAYS at core/registerFile.sv:25
    if (((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)) 
	 & (0U != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd)))) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers[vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd] 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rd_data;
    }
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	= ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1))
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers
	   [vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1]
	    : 0U);
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	= ((0x1fU != (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2))
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__registerFile_i__DOT__registers
	   [vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2]
	    : 0U);
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_next)) {
	++(vlSymsp->__Vcoverage[302]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_next 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__execute_next;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__wb_enable)) {
	++(vlSymsp->__Vcoverage[600]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__wb_enable 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__wb_enable;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_valid)) {
	++(vlSymsp->__Vcoverage[301]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__ex_valid;
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[339]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[340]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[341]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[342]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd))) {
	++(vlSymsp->__Vcoverage[343]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__wb_rd)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__execute_i__DOT__rd)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[601]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1eU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[602]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1dU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[603]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x1bU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[604]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0x17U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (8U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t) 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t))) {
	++(vlSymsp->__Vcoverage[605]);
	vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t 
	    = ((0xfU & (IData)(vlSymsp->TOP__riscv_top__core_top_i.writeBack_i__DOT____Vtogcov__rd_t)) 
	       | (0x10U & (IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__rd_t)));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[50]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[51]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[52]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[53]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[54]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[55]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[56]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[57]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[58]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[59]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[60]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[61]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[62]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[63]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[64]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[65]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[66]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[67]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[68]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[69]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[70]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[71]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[72]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[73]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[74]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[75]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[76]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[77]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[78]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[79]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[80]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data))) {
	++(vlSymsp->__Vcoverage[81]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[82]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[83]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[84]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[85]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[86]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[87]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[88]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[89]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[90]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[91]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[92]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[93]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[94]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[95]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[96]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[97]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[98]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[99]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[100]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[101]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[102]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[103]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[104]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[105]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[106]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[107]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[108]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[109]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[110]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[111]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[112]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data))) {
	++(vlSymsp->__Vcoverage[113]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data));
    }
    // ALWAYS at core/core_top.sv:67
    if (vlSymsp->TOP__riscv_top__core_top_i.__PVT__writeBack_i__DOT__register_access) {
	vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	    = vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[161]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[162]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[163]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[164]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[165]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[166]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[167]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[168]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[169]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[170]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[171]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[172]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[173]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[174]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[175]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[176]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[177]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[178]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[179]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[180]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[181]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[182]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[183]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[184]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[185]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[186]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[187]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[188]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[189]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[190]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[191]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID))) {
	++(vlSymsp->__Vcoverage[192]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs1_data_ID) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID));
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:61
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0_mux)
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate
	    : vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs1_data_ID);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[193]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[194]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[195]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[196]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[197]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[198]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[199]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[200]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[201]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[202]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[203]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[204]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[205]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[206]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[207]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[208]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[209]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[210]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[211]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[212]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[213]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[214]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[215]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[216]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[217]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[218]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[219]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[220]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[221]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[222]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[223]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID))) {
	++(vlSymsp->__Vcoverage[224]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__rs2_data_ID) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID));
    }
    // ALWAYS at core/pipelineStages/instructionDecode/instructionDecode.sv:70
    vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	= ((IData)(vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1_mux)
	    ? vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__immediate
	    : vlSymsp->TOP__riscv_top__core_top_i.__PVT__rs2_data_ID);
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[230]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[231]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[232]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[233]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[234]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[235]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[236]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[237]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[238]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[239]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[240]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[241]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[242]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[243]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[244]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[245]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[246]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[247]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[248]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[249]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[250]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[251]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[252]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[253]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[254]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[255]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[256]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[257]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[258]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[259]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[260]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0))) {
	++(vlSymsp->__Vcoverage[261]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data0) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data0));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[262]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[263]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[264]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[265]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[266]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[267]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[268]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[269]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[270]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[271]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[272]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[273]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[274]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[275]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[276]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[277]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[278]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[279]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[280]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[281]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[282]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[283]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[284]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[285]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[286]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[287]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[288]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[289]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[290]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[291]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[292]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1))) {
	++(vlSymsp->__Vcoverage[293]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__ex_data1) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__ex_data1));
    }
}

VL_INLINE_OPT void Vriscv_top_core_top::_sequent__TOP__riscv_top__core_top_i__5(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_sequent__TOP__riscv_top__core_top_i__5\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i 
	= vlSymsp->TOP__riscv_top__core_top_i.__PVT__instructionDecode_i__DOT__fetch_next;
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[114]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[115]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[116]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
	       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[117]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[118]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[119]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[120]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		  ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[121]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[122]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[123]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[124]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		   ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[125]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[126]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[127]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[128]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[129]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[130]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[131]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[132]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		     ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[133]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[134]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[135]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[136]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		      ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[137]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[138]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[139]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[140]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		       ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[141]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[142]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[143]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[144]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
			^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction))) {
	++(vlSymsp->__Vcoverage[145]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instruction) 
	       | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction));
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_valid)) {
	++(vlSymsp->__Vcoverage[146]);
	vlSymsp->TOP__riscv_top__core_top_i.__Vtogcov__instr_valid 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o;
    }
}

void Vriscv_top_core_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__resetn_i = VL_RAND_RESET_I(1);
    __PVT__rd = VL_RAND_RESET_I(5);
    __PVT__rs1 = VL_RAND_RESET_I(5);
    __PVT__rs2 = VL_RAND_RESET_I(5);
    __PVT__rd_data = VL_RAND_RESET_I(32);
    __PVT__rs1_data = VL_RAND_RESET_I(32);
    __PVT__rs2_data = VL_RAND_RESET_I(32);
    __PVT__rs1_data_ID = VL_RAND_RESET_I(32);
    __PVT__rs2_data_ID = VL_RAND_RESET_I(32);
    __Vtogcov__register_access = VL_RAND_RESET_I(1);
    __Vtogcov__rd = VL_RAND_RESET_I(5);
    __Vtogcov__rs1 = VL_RAND_RESET_I(5);
    __Vtogcov__rs2 = VL_RAND_RESET_I(5);
    __Vtogcov__rd_data = VL_RAND_RESET_I(32);
    __Vtogcov__rs1_data = VL_RAND_RESET_I(32);
    __Vtogcov__rs2_data = VL_RAND_RESET_I(32);
    __Vtogcov__instruction = VL_RAND_RESET_I(32);
    __Vtogcov__instr_valid = VL_RAND_RESET_I(1);
    __Vtogcov__next_instr = VL_RAND_RESET_I(1);
    __Vtogcov__instr_addr = VL_RAND_RESET_I(32);
    __Vtogcov__ID_valid = VL_RAND_RESET_I(1);
    __Vtogcov__next_ID = VL_RAND_RESET_I(1);
    __Vtogcov__rs1_ID = VL_RAND_RESET_I(5);
    __Vtogcov__rs2_ID = VL_RAND_RESET_I(5);
    __Vtogcov__rs1_data_ID = VL_RAND_RESET_I(32);
    __Vtogcov__rs2_data_ID = VL_RAND_RESET_I(32);
    __Vtogcov__ex_rd = VL_RAND_RESET_I(5);
    __Vtogcov__ex_data0 = VL_RAND_RESET_I(32);
    __Vtogcov__ex_data1 = VL_RAND_RESET_I(32);
    __Vtogcov__ex_operation = VL_RAND_RESET_I(7);
    __Vtogcov__ex_valid = VL_RAND_RESET_I(1);
    __Vtogcov__ex_next = VL_RAND_RESET_I(1);
    __Vtogcov__ex_flags = VL_RAND_RESET_I(4);
    __Vtogcov__wb_data = VL_RAND_RESET_I(32);
    __Vtogcov__wb_rd = VL_RAND_RESET_I(5);
    __Vtogcov__rd_WB = VL_RAND_RESET_I(5);
    __Vtogcov__rd_data_WB = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    __PVT__registerFile_i__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__instructionDecode_i__DOT__ex_rd = VL_RAND_RESET_I(5);
    __PVT__instructionDecode_i__DOT__rs1 = VL_RAND_RESET_I(5);
    __PVT__instructionDecode_i__DOT__rs2 = VL_RAND_RESET_I(5);
    __PVT__instructionDecode_i__DOT__decode_valid = VL_RAND_RESET_I(1);
    __PVT__instructionDecode_i__DOT__ex_data0_mux = VL_RAND_RESET_I(1);
    __PVT__instructionDecode_i__DOT__ex_data1_mux = VL_RAND_RESET_I(1);
    __PVT__instructionDecode_i__DOT__fetch_next = VL_RAND_RESET_I(1);
    __PVT__instructionDecode_i__DOT__ex_operation = VL_RAND_RESET_I(7);
    __PVT__instructionDecode_i__DOT__ex_data0 = VL_RAND_RESET_I(32);
    __PVT__instructionDecode_i__DOT__ex_data1 = VL_RAND_RESET_I(32);
    __PVT__instructionDecode_i__DOT__immediate = VL_RAND_RESET_I(32);
    __PVT__instructionDecode_i__DOT__instruction = VL_RAND_RESET_I(32);
    instructionDecode_i__DOT____Vtogcov__ex_data0_mux = VL_RAND_RESET_I(1);
    instructionDecode_i__DOT____Vtogcov__ex_data1_mux = VL_RAND_RESET_I(1);
    instructionDecode_i__DOT____Vtogcov__immediate = VL_RAND_RESET_I(32);
    instructionDecode_i__DOT____Vtogcov__instruction = VL_RAND_RESET_I(32);
    __PVT__execute_i__DOT__data0 = VL_RAND_RESET_I(32);
    __PVT__execute_i__DOT__data1 = VL_RAND_RESET_I(32);
    __PVT__execute_i__DOT__result = VL_RAND_RESET_I(32);
    __PVT__execute_i__DOT__ex_valid = VL_RAND_RESET_I(1);
    __PVT__execute_i__DOT__flags = VL_RAND_RESET_I(4);
    __PVT__execute_i__DOT__rd = VL_RAND_RESET_I(5);
    __PVT__execute_i__DOT__ID_next = VL_RAND_RESET_I(1);
    __PVT__execute_i__DOT__operation = VL_RAND_RESET_I(7);
    execute_i__DOT____Vtogcov__data0 = VL_RAND_RESET_I(32);
    execute_i__DOT____Vtogcov__data1 = VL_RAND_RESET_I(32);
    execute_i__DOT____Vtogcov__alu_result = VL_RAND_RESET_I(32);
    execute_i__DOT____Vtogcov__alu_overflow = VL_RAND_RESET_I(1);
    execute_i__DOT____Vtogcov__operation = VL_RAND_RESET_I(7);
    __PVT__execute_i__DOT__alu_i__DOT__result = VL_RAND_RESET_I(32);
    __PVT__execute_i__DOT__alu_i__DOT__overflow = VL_RAND_RESET_I(1);
    __PVT__writeBack_i__DOT__register_access = VL_RAND_RESET_I(1);
    __PVT__writeBack_i__DOT__execute_next = VL_RAND_RESET_I(1);
    __PVT__writeBack_i__DOT__wb_enable = VL_RAND_RESET_I(1);
    __PVT__writeBack_i__DOT__rd = VL_RAND_RESET_I(5);
    __PVT__writeBack_i__DOT__rd_data = VL_RAND_RESET_I(32);
    __PVT__writeBack_i__DOT__rd_t = VL_RAND_RESET_I(5);
    __PVT__writeBack_i__DOT__rd_data_t = VL_RAND_RESET_I(32);
    writeBack_i__DOT____Vtogcov__wb_enable = VL_RAND_RESET_I(1);
    writeBack_i__DOT____Vtogcov__rd_t = VL_RAND_RESET_I(5);
    writeBack_i__DOT____Vtogcov__rd_data_t = VL_RAND_RESET_I(32);
}

void Vriscv_top_core_top::_configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_core_top::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "core/core_top.sv", 13, 0, "", "v_toggle/core_top", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "core/core_top.sv", 14, 0, "", "v_toggle/core_top", "resetn_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "core/core_top.sv", 18, 0, "", "v_toggle/core_top", "register_access");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "core/core_top.sv", 21, 0, "", "v_toggle/core_top", "resetn");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "core/core_top.sv", 24, 0, "", "v_toggle/core_top", "rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "core/core_top.sv", 24, 0, "", "v_toggle/core_top", "rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "core/core_top.sv", 24, 0, "", "v_toggle/core_top", "rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "core/core_top.sv", 24, 0, "", "v_toggle/core_top", "rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "core/core_top.sv", 24, 0, "", "v_toggle/core_top", "rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "core/core_top.sv", 25, 0, "", "v_toggle/core_top", "rs1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "core/core_top.sv", 25, 0, "", "v_toggle/core_top", "rs1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "core/core_top.sv", 25, 0, "", "v_toggle/core_top", "rs1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "core/core_top.sv", 25, 0, "", "v_toggle/core_top", "rs1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "core/core_top.sv", 25, 0, "", "v_toggle/core_top", "rs1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "core/core_top.sv", 26, 0, "", "v_toggle/core_top", "rs2[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "core/core_top.sv", 26, 0, "", "v_toggle/core_top", "rs2[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "core/core_top.sv", 26, 0, "", "v_toggle/core_top", "rs2[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "core/core_top.sv", 26, 0, "", "v_toggle/core_top", "rs2[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "core/core_top.sv", 26, 0, "", "v_toggle/core_top", "rs2[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "core/core_top.sv", 27, 0, "", "v_toggle/core_top", "rd_data[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "core/core_top.sv", 28, 0, "", "v_toggle/core_top", "rs1_data[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "core/core_top.sv", 29, 0, "", "v_toggle/core_top", "rs2_data[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "core/core_top.sv", 32, 0, "", "v_toggle/core_top", "instruction[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "core/core_top.sv", 33, 0, "", "v_toggle/core_top", "instr_valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "core/core_top.sv", 34, 0, "", "v_toggle/core_top", "next_instr");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 35, 0, "", "v_toggle/core_top", "instr_addr[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "core/core_top.sv", 38, 0, "", "v_toggle/core_top", "ID_valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "core/core_top.sv", 39, 0, "", "v_toggle/core_top", "next_ID");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "core/core_top.sv", 40, 0, "", "v_toggle/core_top", "rs1_ID[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "core/core_top.sv", 40, 0, "", "v_toggle/core_top", "rs1_ID[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "core/core_top.sv", 40, 0, "", "v_toggle/core_top", "rs1_ID[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "core/core_top.sv", 40, 0, "", "v_toggle/core_top", "rs1_ID[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "core/core_top.sv", 40, 0, "", "v_toggle/core_top", "rs1_ID[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "core/core_top.sv", 41, 0, "", "v_toggle/core_top", "rs2_ID[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "core/core_top.sv", 41, 0, "", "v_toggle/core_top", "rs2_ID[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "core/core_top.sv", 41, 0, "", "v_toggle/core_top", "rs2_ID[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "core/core_top.sv", 41, 0, "", "v_toggle/core_top", "rs2_ID[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "core/core_top.sv", 41, 0, "", "v_toggle/core_top", "rs2_ID[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "core/core_top.sv", 42, 0, "", "v_toggle/core_top", "rs1_data_ID[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "core/core_top.sv", 43, 0, "", "v_toggle/core_top", "rs2_data_ID[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "core/core_top.sv", 46, 0, "", "v_toggle/core_top", "ex_rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "core/core_top.sv", 46, 0, "", "v_toggle/core_top", "ex_rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "core/core_top.sv", 46, 0, "", "v_toggle/core_top", "ex_rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "core/core_top.sv", 46, 0, "", "v_toggle/core_top", "ex_rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "core/core_top.sv", 46, 0, "", "v_toggle/core_top", "ex_rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "core/core_top.sv", 47, 0, "", "v_toggle/core_top", "ex_data0[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "core/core_top.sv", 48, 0, "", "v_toggle/core_top", "ex_data1[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "core/core_top.sv", 49, 0, "", "v_toggle/core_top", "ex_operation[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "core/core_top.sv", 50, 0, "", "v_toggle/core_top", "ex_valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "core/core_top.sv", 51, 0, "", "v_toggle/core_top", "ex_next");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "core/core_top.sv", 52, 0, "", "v_toggle/core_top", "ex_flags[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "core/core_top.sv", 52, 0, "", "v_toggle/core_top", "ex_flags[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "core/core_top.sv", 52, 0, "", "v_toggle/core_top", "ex_flags[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "core/core_top.sv", 52, 0, "", "v_toggle/core_top", "ex_flags[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "core/core_top.sv", 55, 0, "", "v_toggle/core_top", "wb_data[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "core/core_top.sv", 56, 0, "", "v_toggle/core_top", "wb_rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "core/core_top.sv", 56, 0, "", "v_toggle/core_top", "wb_rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "core/core_top.sv", 56, 0, "", "v_toggle/core_top", "wb_rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "core/core_top.sv", 56, 0, "", "v_toggle/core_top", "wb_rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "core/core_top.sv", 56, 0, "", "v_toggle/core_top", "wb_rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "core/core_top.sv", 57, 0, "", "v_toggle/core_top", "rd_WB[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "core/core_top.sv", 57, 0, "", "v_toggle/core_top", "rd_WB[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "core/core_top.sv", 57, 0, "", "v_toggle/core_top", "rd_WB[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "core/core_top.sv", 57, 0, "", "v_toggle/core_top", "rd_WB[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "core/core_top.sv", 57, 0, "", "v_toggle/core_top", "rd_WB[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 58, 0, "", "v_toggle/core_top", "rs1_WB[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 58, 0, "", "v_toggle/core_top", "rs1_WB[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 58, 0, "", "v_toggle/core_top", "rs1_WB[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 58, 0, "", "v_toggle/core_top", "rs1_WB[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 58, 0, "", "v_toggle/core_top", "rs1_WB[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "core/core_top.sv", 59, 0, "", "v_toggle/core_top", "rd_data_WB[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/core_top.sv", 60, 0, "", "v_toggle/core_top", "rs1_data_WB[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "core/core_top.sv", 69, 0, "", "v_line/core_top", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "core/core_top.sv", 79, 0, "", "v_line/core_top", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "core/registerFile.sv", 13, 0, ".registerFile_i", "v_toggle/registerFile", "rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "core/registerFile.sv", 13, 0, ".registerFile_i", "v_toggle/registerFile", "rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "core/registerFile.sv", 13, 0, ".registerFile_i", "v_toggle/registerFile", "rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "core/registerFile.sv", 13, 0, ".registerFile_i", "v_toggle/registerFile", "rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "core/registerFile.sv", 13, 0, ".registerFile_i", "v_toggle/registerFile", "rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "core/registerFile.sv", 14, 0, ".registerFile_i", "v_toggle/registerFile", "rs1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "core/registerFile.sv", 14, 0, ".registerFile_i", "v_toggle/registerFile", "rs1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "core/registerFile.sv", 14, 0, ".registerFile_i", "v_toggle/registerFile", "rs1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "core/registerFile.sv", 14, 0, ".registerFile_i", "v_toggle/registerFile", "rs1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "core/registerFile.sv", 14, 0, ".registerFile_i", "v_toggle/registerFile", "rs1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "core/registerFile.sv", 15, 0, ".registerFile_i", "v_toggle/registerFile", "rs2[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "core/registerFile.sv", 15, 0, ".registerFile_i", "v_toggle/registerFile", "rs2[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "core/registerFile.sv", 15, 0, ".registerFile_i", "v_toggle/registerFile", "rs2[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "core/registerFile.sv", 15, 0, ".registerFile_i", "v_toggle/registerFile", "rs2[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "core/registerFile.sv", 15, 0, ".registerFile_i", "v_toggle/registerFile", "rs2[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "core/registerFile.sv", 16, 0, ".registerFile_i", "v_toggle/registerFile", "data_rd_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "core/registerFile.sv", 17, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs1_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "core/registerFile.sv", 18, 0, ".registerFile_i", "v_toggle/registerFile", "data_rs2_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "core/registerFile.sv", 27, 0, ".registerFile_i", "v_line/registerFile", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "core/registerFile.sv", 30, 0, ".registerFile_i", "v_line/registerFile", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "core/registerFile.sv", 33, 0, ".registerFile_i", "v_line/registerFile", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "core/registerFile.sv", 35, 0, ".registerFile_i", "v_line/registerFile", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "core/registerFile.sv", 38, 0, ".registerFile_i", "v_line/registerFile", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 17, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 18, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "resetn_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 19, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 20, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 20, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 20, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 20, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 20, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 21, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 21, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 21, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 21, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 21, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 22, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 23, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 24, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 25, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 26, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 27, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "decode_valid_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 28, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "decode_next_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 29, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "fetch_next_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 30, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instr_valid_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 31, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 31, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 31, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 31, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 31, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 32, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "register_access_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 34, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 34, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 34, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 34, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 34, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 35, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 35, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 35, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 35, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 35, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 36, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 36, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 36, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 36, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 36, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "rs2[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 37, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "decode_valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 38, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0_mux");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 39, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1_mux");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 40, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "fetch_next");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 41, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs1[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 42, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "data_rs2[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 43, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_operation[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 44, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data0[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 45, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "ex_data1[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 46, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "immediate[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 47, 0, ".instructionDecode_i", "v_toggle/instructionDecode__B20", "instruction[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 63, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 66, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 72, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 75, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 88, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 91, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "elsif");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 98, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 112, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 115, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 118, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 121, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 124, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 127, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 130, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 105, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 136, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 139, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 134, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 143, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "core/pipelineStages/instructionDecode/instructionDecode.sv", 94, 0, ".instructionDecode_i", "v_line/instructionDecode__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "core/pipelineStages/execute/execute.sv", 13, 0, ".execute_i", "v_toggle/execute__B20", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "core/pipelineStages/execute/execute.sv", 14, 0, ".execute_i", "v_toggle/execute__B20", "data0_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "core/pipelineStages/execute/execute.sv", 15, 0, ".execute_i", "v_toggle/execute__B20", "data1_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "core/pipelineStages/execute/execute.sv", 16, 0, ".execute_i", "v_toggle/execute__B20", "rd_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "core/pipelineStages/execute/execute.sv", 16, 0, ".execute_i", "v_toggle/execute__B20", "rd_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "core/pipelineStages/execute/execute.sv", 16, 0, ".execute_i", "v_toggle/execute__B20", "rd_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "core/pipelineStages/execute/execute.sv", 16, 0, ".execute_i", "v_toggle/execute__B20", "rd_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "core/pipelineStages/execute/execute.sv", 16, 0, ".execute_i", "v_toggle/execute__B20", "rd_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "core/pipelineStages/execute/execute.sv", 17, 0, ".execute_i", "v_toggle/execute__B20", "operation_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "core/pipelineStages/execute/execute.sv", 18, 0, ".execute_i", "v_toggle/execute__B20", "data_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "core/pipelineStages/execute/execute.sv", 19, 0, ".execute_i", "v_toggle/execute__B20", "rd_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "core/pipelineStages/execute/execute.sv", 19, 0, ".execute_i", "v_toggle/execute__B20", "rd_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "core/pipelineStages/execute/execute.sv", 19, 0, ".execute_i", "v_toggle/execute__B20", "rd_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "core/pipelineStages/execute/execute.sv", 19, 0, ".execute_i", "v_toggle/execute__B20", "rd_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "core/pipelineStages/execute/execute.sv", 19, 0, ".execute_i", "v_toggle/execute__B20", "rd_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "core/pipelineStages/execute/execute.sv", 20, 0, ".execute_i", "v_toggle/execute__B20", "ex_valid_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "core/pipelineStages/execute/execute.sv", 21, 0, ".execute_i", "v_toggle/execute__B20", "flags_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "core/pipelineStages/execute/execute.sv", 21, 0, ".execute_i", "v_toggle/execute__B20", "flags_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "core/pipelineStages/execute/execute.sv", 21, 0, ".execute_i", "v_toggle/execute__B20", "flags_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "core/pipelineStages/execute/execute.sv", 21, 0, ".execute_i", "v_toggle/execute__B20", "flags_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "core/pipelineStages/execute/execute.sv", 22, 0, ".execute_i", "v_toggle/execute__B20", "ex_next_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "core/pipelineStages/execute/execute.sv", 23, 0, ".execute_i", "v_toggle/execute__B20", "valid_ID_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "core/pipelineStages/execute/execute.sv", 24, 0, ".execute_i", "v_toggle/execute__B20", "ID_next_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "core/pipelineStages/execute/execute.sv", 27, 0, ".execute_i", "v_toggle/execute__B20", "data0[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "core/pipelineStages/execute/execute.sv", 28, 0, ".execute_i", "v_toggle/execute__B20", "data1[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "core/pipelineStages/execute/execute.sv", 29, 0, ".execute_i", "v_toggle/execute__B20", "result[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "core/pipelineStages/execute/execute.sv", 30, 0, ".execute_i", "v_toggle/execute__B20", "alu_result[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "core/pipelineStages/execute/execute.sv", 31, 0, ".execute_i", "v_toggle/execute__B20", "ex_valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "core/pipelineStages/execute/execute.sv", 32, 0, ".execute_i", "v_toggle/execute__B20", "flags[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "core/pipelineStages/execute/execute.sv", 32, 0, ".execute_i", "v_toggle/execute__B20", "flags[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "core/pipelineStages/execute/execute.sv", 32, 0, ".execute_i", "v_toggle/execute__B20", "flags[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "core/pipelineStages/execute/execute.sv", 32, 0, ".execute_i", "v_toggle/execute__B20", "flags[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "core/pipelineStages/execute/execute.sv", 33, 0, ".execute_i", "v_toggle/execute__B20", "rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "core/pipelineStages/execute/execute.sv", 33, 0, ".execute_i", "v_toggle/execute__B20", "rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "core/pipelineStages/execute/execute.sv", 33, 0, ".execute_i", "v_toggle/execute__B20", "rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "core/pipelineStages/execute/execute.sv", 33, 0, ".execute_i", "v_toggle/execute__B20", "rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "core/pipelineStages/execute/execute.sv", 33, 0, ".execute_i", "v_toggle/execute__B20", "rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "core/pipelineStages/execute/execute.sv", 34, 0, ".execute_i", "v_toggle/execute__B20", "alu_overflow");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "core/pipelineStages/execute/execute.sv", 35, 0, ".execute_i", "v_toggle/execute__B20", "ID_next");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "core/pipelineStages/execute/execute.sv", 36, 0, ".execute_i", "v_toggle/execute__B20", "operation[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "core/pipelineStages/execute/execute.sv", 50, 0, ".execute_i", "v_line/execute__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "core/pipelineStages/execute/execute.sv", 58, 0, ".execute_i", "v_line/execute__B20", "elsif");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "core/pipelineStages/execute/execute.sv", 64, 0, ".execute_i", "v_line/execute__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "core/pipelineStages/execute/execute.sv", 69, 0, ".execute_i", "v_line/execute__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "core/pipelineStages/execute/execute.sv", 61, 0, ".execute_i", "v_line/execute__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "core/pipelineStages/execute/alu.sv", 15, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "A_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "core/pipelineStages/execute/alu.sv", 16, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "B_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "core/pipelineStages/execute/alu.sv", 17, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "operation_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "core/pipelineStages/execute/alu.sv", 17, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "operation_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "core/pipelineStages/execute/alu.sv", 17, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "operation_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "core/pipelineStages/execute/alu.sv", 17, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "operation_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "core/pipelineStages/execute/alu.sv", 18, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "R_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "core/pipelineStages/execute/alu.sv", 19, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "overflow_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "core/pipelineStages/execute/alu.sv", 22, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "result[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "core/pipelineStages/execute/alu.sv", 23, 0, ".execute_i.alu_i", "v_toggle/alu__B20", "overflow");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "core/pipelineStages/execute/alu.sv", 30, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "core/pipelineStages/execute/alu.sv", 32, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "core/pipelineStages/execute/alu.sv", 34, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "core/pipelineStages/execute/alu.sv", 36, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "core/pipelineStages/execute/alu.sv", 38, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "core/pipelineStages/execute/alu.sv", 40, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "core/pipelineStages/execute/alu.sv", 42, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "core/pipelineStages/execute/alu.sv", 44, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "core/pipelineStages/execute/alu.sv", 46, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "core/pipelineStages/execute/alu.sv", 48, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "core/pipelineStages/execute/alu.sv", 50, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "core/pipelineStages/execute/alu.sv", 52, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "core/pipelineStages/execute/alu.sv", 54, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "core/pipelineStages/execute/alu.sv", 56, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "core/pipelineStages/execute/alu.sv", 58, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "core/pipelineStages/execute/alu.sv", 60, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "core/pipelineStages/execute/alu.sv", 62, 0, ".execute_i.alu_i", "v_line/alu__B20", "case");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "core/pipelineStages/write_back/writeBack.sv", 13, 0, ".writeBack_i", "v_toggle/writeBack__B20", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "core/pipelineStages/write_back/writeBack.sv", 14, 0, ".writeBack_i", "v_toggle/writeBack__B20", "data_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "core/pipelineStages/write_back/writeBack.sv", 15, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "core/pipelineStages/write_back/writeBack.sv", 15, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "core/pipelineStages/write_back/writeBack.sv", 15, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "core/pipelineStages/write_back/writeBack.sv", 15, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "core/pipelineStages/write_back/writeBack.sv", 15, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "core/pipelineStages/write_back/writeBack.sv", 16, 0, ".writeBack_i", "v_toggle/writeBack__B20", "ex_valid_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "core/pipelineStages/write_back/writeBack.sv", 17, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "core/pipelineStages/write_back/writeBack.sv", 17, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "core/pipelineStages/write_back/writeBack.sv", 17, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "core/pipelineStages/write_back/writeBack.sv", 17, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "core/pipelineStages/write_back/writeBack.sv", 17, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "core/pipelineStages/write_back/writeBack.sv", 18, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "core/pipelineStages/write_back/writeBack.sv", 19, 0, ".writeBack_i", "v_toggle/writeBack__B20", "register_access_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "core/pipelineStages/write_back/writeBack.sv", 20, 0, ".writeBack_i", "v_toggle/writeBack__B20", "ex_next_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "core/pipelineStages/write_back/writeBack.sv", 23, 0, ".writeBack_i", "v_toggle/writeBack__B20", "register_access");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "core/pipelineStages/write_back/writeBack.sv", 24, 0, ".writeBack_i", "v_toggle/writeBack__B20", "execute_next");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "core/pipelineStages/write_back/writeBack.sv", 25, 0, ".writeBack_i", "v_toggle/writeBack__B20", "wb_enable");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "core/pipelineStages/write_back/writeBack.sv", 26, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "core/pipelineStages/write_back/writeBack.sv", 26, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "core/pipelineStages/write_back/writeBack.sv", 26, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "core/pipelineStages/write_back/writeBack.sv", 26, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "core/pipelineStages/write_back/writeBack.sv", 26, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "core/pipelineStages/write_back/writeBack.sv", 27, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "core/pipelineStages/write_back/writeBack.sv", 28, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_t[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "core/pipelineStages/write_back/writeBack.sv", 28, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_t[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "core/pipelineStages/write_back/writeBack.sv", 28, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_t[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "core/pipelineStages/write_back/writeBack.sv", 28, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_t[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "core/pipelineStages/write_back/writeBack.sv", 28, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_t[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "core/pipelineStages/write_back/writeBack.sv", 29, 0, ".writeBack_i", "v_toggle/writeBack__B20", "rd_data_t[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "core/pipelineStages/write_back/writeBack.sv", 42, 0, ".writeBack_i", "v_line/writeBack__B20", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "core/pipelineStages/write_back/writeBack.sv", 49, 0, ".writeBack_i", "v_line/writeBack__B20", "else");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "core/pipelineStages/write_back/writeBack.sv", 51, 0, ".writeBack_i", "v_line/writeBack__B20", "if");
}
