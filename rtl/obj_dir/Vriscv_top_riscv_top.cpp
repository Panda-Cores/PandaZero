// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top_riscv_top.h"
#include "Vriscv_top__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vriscv_top_riscv_top) {
    VL_CELL(core_top_i, Vriscv_top_core_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_top_riscv_top::__Vconfigure(Vriscv_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    this->_configure_coverage(vlSymsp, first);
}

Vriscv_top_riscv_top::~Vriscv_top_riscv_top() {
}

// Coverage
void Vriscv_top_riscv_top::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    static uint32_t fake_zero_count = 0;
    if (!enable) countp = &fake_zero_count;
    *countp = 0;
    VL_COVER_INSERT(countp,  "filename",filenamep,  "lineno",lineno,  "column",column,
	"hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vriscv_top_riscv_top::_settle__TOP__riscv_top__1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top::_settle__TOP__riscv_top__1\n"); );
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) ^ vlSymsp->TOP__riscv_top.__Vtogcov__clk)) {
	++(vlSymsp->__Vcoverage[0]);
	vlSymsp->TOP__riscv_top.__Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->resetn_i) ^ vlSymsp->TOP__riscv_top.__Vtogcov__resetn_i)) {
	++(vlSymsp->__Vcoverage[1]);
	vlSymsp->TOP__riscv_top.__Vtogcov__resetn_i 
	    = vlTOPp->resetn_i;
    }
}

void Vriscv_top_riscv_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn_i = VL_RAND_RESET_I(1);
    __Vtogcov__clk = VL_RAND_RESET_I(1);
    __Vtogcov__resetn_i = VL_RAND_RESET_I(1);
}

void Vriscv_top_riscv_top::_configure_coverage(Vriscv_top__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
    __vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "riscv_top.sv", 4, 0, "", "v_toggle/riscv_top", "clk");
    __vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "riscv_top.sv", 5, 0, "", "v_toggle/riscv_top", "resetn_i");
}
