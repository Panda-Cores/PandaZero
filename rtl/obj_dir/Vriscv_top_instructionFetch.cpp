// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top_instructionFetch.h"
#include "Vriscv_top__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vriscv_top_instructionFetch) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_top_instructionFetch::__Vconfigure(Vriscv_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    this->_configure_coverage(vlSymsp, first);
}

Vriscv_top_instructionFetch::~Vriscv_top_instructionFetch() {
}

// Coverage
void Vriscv_top_instructionFetch::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    static uint32_t fake_zero_count = 0;
    if (!enable) countp = &fake_zero_count;
    *countp = 0;
    VL_COVER_INSERT(countp,  "filename",filenamep,  "lineno",lineno,  "column",column,
	"hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

//--------------------
// Internal Methods

void Vriscv_top_instructionFetch::_settle__TOP__riscv_top__core_top_i__instructionFetch_i__1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_settle__TOP__riscv_top__core_top_i__instructionFetch_i__1\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[0U] = 0xffffe0b7U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[1U] = 0x100093U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[2U] = 0xfc7fe2b7U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[3U] = 0x1a01b3U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[4U] = 0x1a01b3U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[5U] = 0x1a01b3U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[6U] = 0x1a01b3U;
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions[7U] = 0x1a01b3U;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__valid)) {
	++(vlSymsp->__Vcoverage[642]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__valid 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid;
    }
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o 
	= vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid;
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__fetch_next_i)) {
	++(vlSymsp->__Vcoverage[641]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__fetch_next_i 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i;
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[646]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[647]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[648]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[649]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[650]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[651]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[652]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[653]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[654]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[655]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[656]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[657]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[658]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[659]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[660]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[661]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[662]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[663]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[664]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[665]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[666]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[667]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[668]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[669]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[670]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[671]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[672]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[673]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[674]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[675]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[676]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[677]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[678]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[679]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[680]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[681]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[682]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[683]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[684]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[685]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[686]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[687]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[688]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[689]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[690]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[691]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[692]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[693]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[694]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[695]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[696]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[697]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[698]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[699]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[700]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[701]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[702]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[703]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[704]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[705]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[706]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[707]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[708]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[709]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[710]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[711]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[712]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[713]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[714]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[715]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[716]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[717]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[718]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[719]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[720]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[721]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[722]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[723]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[724]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[725]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[726]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[727]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[728]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[729]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[730]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[731]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[732]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[733]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[734]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[735]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[736]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[737]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[738]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[739]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[740]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[741]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[742]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[743]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[744]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[745]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[746]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[747]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[748]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[749]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[750]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[751]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[752]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[753]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[754]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[755]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[756]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[757]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[758]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[759]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[760]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[761]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[762]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[763]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[764]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[765]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[766]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[767]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[768]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[769]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[770]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[771]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[772]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[773]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[774]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[775]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[776]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[777]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[778]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[779]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[780]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[781]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[782]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[783]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[784]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[785]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[786]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[787]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[788]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[789]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[790]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[791]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[792]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[793]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[794]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[795]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[796]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[797]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[798]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[799]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[800]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[801]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[802]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[803]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[804]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[805]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[806]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[807]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[808]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[809]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[810]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[811]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[812]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[813]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[814]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[815]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[816]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[817]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[818]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[819]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[820]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[821]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[822]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[823]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[824]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[825]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[826]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[827]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[828]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[829]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[830]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[831]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[832]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[833]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[834]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[835]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[836]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[837]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[838]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[839]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[840]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[841]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[842]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[843]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[844]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[845]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[846]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[847]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[848]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[849]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[850]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[851]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[852]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[853]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[854]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[855]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[856]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[857]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[858]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[859]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[860]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[861]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[862]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[863]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[864]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[865]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[866]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[867]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[868]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[869]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[870]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[871]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[872]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[873]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[874]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[875]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[876]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[877]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[878]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[879]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[880]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[881]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[882]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[883]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[884]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[885]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[886]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[887]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[888]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[889]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[890]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[891]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[892]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[893]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[894]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[895]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[896]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[897]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[898]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[899]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[900]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[901]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[646]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[647]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[648]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [0U]))) {
	++(vlSymsp->__Vcoverage[649]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[650]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[651]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[652]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [0U]))) {
	++(vlSymsp->__Vcoverage[653]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[654]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[655]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[656]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [0U]))) {
	++(vlSymsp->__Vcoverage[657]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[658]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[659]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[660]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [0U]))) {
	++(vlSymsp->__Vcoverage[661]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[662]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[663]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[664]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [0U]))) {
	++(vlSymsp->__Vcoverage[665]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[666]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[667]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[668]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [0U]))) {
	++(vlSymsp->__Vcoverage[669]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[670]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[671]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[672]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [0U]))) {
	++(vlSymsp->__Vcoverage[673]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[674]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[675]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[676]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[0U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[0U]))) {
	++(vlSymsp->__Vcoverage[677]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[0U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[0U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [0U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[678]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[679]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[680]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [1U]))) {
	++(vlSymsp->__Vcoverage[681]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[682]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[683]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[684]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [1U]))) {
	++(vlSymsp->__Vcoverage[685]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[686]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[687]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[688]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [1U]))) {
	++(vlSymsp->__Vcoverage[689]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[690]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[691]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[692]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [1U]))) {
	++(vlSymsp->__Vcoverage[693]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[694]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[695]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[696]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [1U]))) {
	++(vlSymsp->__Vcoverage[697]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[698]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[699]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[700]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [1U]))) {
	++(vlSymsp->__Vcoverage[701]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[702]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[703]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[704]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [1U]))) {
	++(vlSymsp->__Vcoverage[705]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[706]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[707]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[708]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[1U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[1U]))) {
	++(vlSymsp->__Vcoverage[709]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[1U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[1U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [1U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[710]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[711]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[712]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [2U]))) {
	++(vlSymsp->__Vcoverage[713]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[714]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[715]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[716]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [2U]))) {
	++(vlSymsp->__Vcoverage[717]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[718]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[719]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[720]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [2U]))) {
	++(vlSymsp->__Vcoverage[721]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[722]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[723]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[724]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [2U]))) {
	++(vlSymsp->__Vcoverage[725]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[726]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[727]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[728]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [2U]))) {
	++(vlSymsp->__Vcoverage[729]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[730]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[731]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[732]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [2U]))) {
	++(vlSymsp->__Vcoverage[733]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[734]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[735]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[736]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [2U]))) {
	++(vlSymsp->__Vcoverage[737]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[738]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[739]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[740]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[2U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[2U]))) {
	++(vlSymsp->__Vcoverage[741]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[2U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[2U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [2U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[742]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[743]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[744]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [3U]))) {
	++(vlSymsp->__Vcoverage[745]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[746]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[747]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[748]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [3U]))) {
	++(vlSymsp->__Vcoverage[749]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[750]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[751]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[752]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [3U]))) {
	++(vlSymsp->__Vcoverage[753]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[754]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[755]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[756]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [3U]))) {
	++(vlSymsp->__Vcoverage[757]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[758]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[759]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[760]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [3U]))) {
	++(vlSymsp->__Vcoverage[761]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[762]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[763]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[764]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [3U]))) {
	++(vlSymsp->__Vcoverage[765]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[766]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[767]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[768]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [3U]))) {
	++(vlSymsp->__Vcoverage[769]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[770]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[771]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[772]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[3U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[3U]))) {
	++(vlSymsp->__Vcoverage[773]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[3U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[3U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [3U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[774]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[775]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[776]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [4U]))) {
	++(vlSymsp->__Vcoverage[777]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[778]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[779]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[780]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [4U]))) {
	++(vlSymsp->__Vcoverage[781]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[782]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[783]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[784]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [4U]))) {
	++(vlSymsp->__Vcoverage[785]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[786]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[787]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[788]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [4U]))) {
	++(vlSymsp->__Vcoverage[789]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[790]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[791]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[792]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [4U]))) {
	++(vlSymsp->__Vcoverage[793]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[794]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[795]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[796]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [4U]))) {
	++(vlSymsp->__Vcoverage[797]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[798]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[799]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[800]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [4U]))) {
	++(vlSymsp->__Vcoverage[801]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[802]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[803]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[804]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[4U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[4U]))) {
	++(vlSymsp->__Vcoverage[805]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[4U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[4U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [4U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[806]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[807]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[808]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [5U]))) {
	++(vlSymsp->__Vcoverage[809]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[810]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[811]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[812]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [5U]))) {
	++(vlSymsp->__Vcoverage[813]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[814]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[815]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[816]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [5U]))) {
	++(vlSymsp->__Vcoverage[817]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[818]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[819]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[820]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [5U]))) {
	++(vlSymsp->__Vcoverage[821]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[822]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[823]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[824]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [5U]))) {
	++(vlSymsp->__Vcoverage[825]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[826]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[827]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[828]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [5U]))) {
	++(vlSymsp->__Vcoverage[829]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[830]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[831]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[832]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [5U]))) {
	++(vlSymsp->__Vcoverage[833]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[834]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[835]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[836]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[5U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[5U]))) {
	++(vlSymsp->__Vcoverage[837]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[5U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[5U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [5U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[838]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[839]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[840]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [6U]))) {
	++(vlSymsp->__Vcoverage[841]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[842]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[843]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[844]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [6U]))) {
	++(vlSymsp->__Vcoverage[845]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[846]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[847]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[848]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [6U]))) {
	++(vlSymsp->__Vcoverage[849]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[850]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[851]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[852]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [6U]))) {
	++(vlSymsp->__Vcoverage[853]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[854]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[855]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[856]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [6U]))) {
	++(vlSymsp->__Vcoverage[857]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[858]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[859]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[860]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [6U]))) {
	++(vlSymsp->__Vcoverage[861]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[862]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[863]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[864]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [6U]))) {
	++(vlSymsp->__Vcoverage[865]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[866]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[867]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[868]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[6U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[6U]))) {
	++(vlSymsp->__Vcoverage[869]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[6U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[6U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [6U]));
    }
    if ((1U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[870]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffeU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (1U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((2U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[871]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffdU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (2U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((4U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[872]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffffbU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (4U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((8U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
	       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
	       [7U]))) {
	++(vlSymsp->__Vcoverage[873]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffff7U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (8U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[874]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffefU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[875]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffdfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[876]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffffbfU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		  [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		  [7U]))) {
	++(vlSymsp->__Vcoverage[877]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffff7fU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x100U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[878]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffeffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x100U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x200U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[879]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffdffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x200U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x400U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[880]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffffbffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x400U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x800U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		   [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		   [7U]))) {
	++(vlSymsp->__Vcoverage[881]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffff7ffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x800U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x1000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[882]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffefffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x1000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x2000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[883]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffdfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x2000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x4000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[884]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffffbfffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x4000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x8000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		    [7U]))) {
	++(vlSymsp->__Vcoverage[885]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffff7fffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x8000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[886]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffeffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[887]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffdffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[888]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfffbffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		     [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		     [7U]))) {
	++(vlSymsp->__Vcoverage[889]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfff7ffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x100000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[890]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffefffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x100000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x200000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[891]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffdfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x200000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x400000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[892]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xffbfffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x400000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x800000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		      [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		      [7U]))) {
	++(vlSymsp->__Vcoverage[893]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xff7fffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x800000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[894]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfeffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x1000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[895]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfdffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x2000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[896]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xfbffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x4000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		       [7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		       [7U]))) {
	++(vlSymsp->__Vcoverage[897]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xf7ffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x8000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[898]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xefffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x10000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[899]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xdfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x20000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[900]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0xbfffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x40000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
    if ((0x80000000U & (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			[7U] ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
			[7U]))) {
	++(vlSymsp->__Vcoverage[901]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions[7U] 
	    = ((0x7fffffffU & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__instructions
		[7U]) | (0x80000000U & vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
			 [7U]));
    }
}

void Vriscv_top_instructionFetch::_initial__TOP__riscv_top__core_top_i__instructionFetch_i__2(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_initial__TOP__riscv_top__core_top_i__instructionFetch_i__2\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at core/pipelineStages/instructionFetch/instructionFetch.sv:22
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i = 0U;
}

VL_INLINE_OPT void Vriscv_top_instructionFetch::_sequent__TOP__riscv_top__core_top_i__instructionFetch_i__3(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_sequent__TOP__riscv_top__core_top_i__instructionFetch_i__3\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/pipelineStages/instructionFetch/instructionFetch.sv:37
    if ((1U & (~ (IData)(vlTOPp->resetn_i)))) {
	++(vlSymsp->__Vcoverage[902]);
    }
    // ALWAYS at core/pipelineStages/instructionFetch/instructionFetch.sv:37
    if (vlTOPp->resetn_i) {
	if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid) {
	    ++(vlSymsp->__Vcoverage[903]);
	}
    }
    // ALWAYS at core/pipelineStages/instructionFetch/instructionFetch.sv:37
    if (vlTOPp->resetn_i) {
	if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid)))) {
	    if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i) {
		++(vlSymsp->__Vcoverage[904]);
	    }
	}
    }
    // ALWAYS at core/pipelineStages/instructionFetch/instructionFetch.sv:37
    if (vlTOPp->resetn_i) {
	if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid) {
	    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid = 0U;
	} else {
	    if (vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i) {
		vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction 
		    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instructions
		    [vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i];
		vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid = 1U;
		vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i 
		    = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
	    }
	}
    } else {
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid = 0U;
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__instruction = 0U;
    }
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__valid)) {
	++(vlSymsp->__Vcoverage[642]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__valid 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid;
    }
    vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_valid_o 
	= vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__valid;
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[643]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((6U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[644]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((5U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[645]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((3U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
}

void Vriscv_top_instructionFetch::_settle__TOP__riscv_top__core_top_i__instructionFetch_i__4(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_settle__TOP__riscv_top__core_top_i__instructionFetch_i__4\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[643]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((6U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (1U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[644]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((5U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (2U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i) 
	       ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i))) {
	++(vlSymsp->__Vcoverage[645]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i 
	    = ((3U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__i)) 
	       | (4U & (IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__PVT__i)));
    }
}

VL_INLINE_OPT void Vriscv_top_instructionFetch::_combo__TOP__riscv_top__core_top_i__instructionFetch_i__5(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_combo__TOP__riscv_top__core_top_i__instructionFetch_i__5\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i) 
	 ^ vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__fetch_next_i)) {
	++(vlSymsp->__Vcoverage[641]);
	vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.__Vtogcov__fetch_next_i 
	    = vlSymsp->TOP__riscv_top__core_top_i__instructionFetch_i.fetch_next_i;
    }
}

void Vriscv_top_instructionFetch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__resetn_i = VL_RAND_RESET_I(1);
    fetch_next_i = VL_RAND_RESET_I(1);
    __PVT__ADDR_i = VL_RAND_RESET_I(32);
    __PVT__instruction_o = VL_RAND_RESET_I(32);
    fetch_valid_o = VL_RAND_RESET_I(1);
    __PVT__instruction = VL_RAND_RESET_I(32);
    __PVT__valid = VL_RAND_RESET_I(1);
    __PVT__i = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    __PVT__instructions[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtogcov__fetch_next_i = VL_RAND_RESET_I(1);
    __Vtogcov__valid = VL_RAND_RESET_I(1);
    __Vtogcov__i = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    __Vtogcov__instructions[__Vi0] = VL_RAND_RESET_I(32);
    }}
}

void Vriscv_top_instructionFetch::_configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_instructionFetch::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 13, 0, "", "v_toggle/instructionFetch", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 14, 0, "", "v_toggle/instructionFetch", "resetn_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 15, 0, "", "v_toggle/instructionFetch", "fetch_next_i");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 16, 0, "", "v_toggle/instructionFetch", "ADDR_i[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 17, 0, "", "v_toggle/instructionFetch", "instruction_o[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 18, 0, "", "v_toggle/instructionFetch", "fetch_valid_o");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 20, 0, "", "v_toggle/instructionFetch", "instruction[31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 21, 0, "", "v_toggle/instructionFetch", "valid");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 22, 0, "", "v_toggle/instructionFetch", "i[0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 22, 0, "", "v_toggle/instructionFetch", "i[1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 22, 0, "", "v_toggle/instructionFetch", "i[2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[0][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[1][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[2][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[3][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[4][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[5][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[6][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][0]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][1]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][2]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][3]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][4]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][5]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][6]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][7]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][8]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][9]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][10]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][11]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][12]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][13]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][14]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][15]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][16]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][17]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][18]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][19]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][20]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][21]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][22]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][23]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][24]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][25]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[896]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][26]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[897]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][27]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[898]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][28]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[899]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][29]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[900]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][30]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[901]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 23, 0, "", "v_toggle/instructionFetch", "instructions[7][31]");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[902]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 39, 0, "", "v_line/instructionFetch", "if");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[903]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 45, 0, "", "v_line/instructionFetch", "elsif");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "core/pipelineStages/instructionFetch/instructionFetch.sv", 48, 0, "", "v_line/instructionFetch", "elsif");
}
