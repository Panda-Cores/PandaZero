// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


//======================

void Vriscv_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vriscv_top* t=(Vriscv_top*)userthis;
    Vriscv_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vriscv_top::traceChgThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vriscv_top::traceChgThis__2(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_mux));
	vcdp->chgBus(c+2,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[0]),32);
	vcdp->chgBus(c+3,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[1]),32);
	vcdp->chgBus(c+4,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[2]),32);
	vcdp->chgBus(c+5,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[3]),32);
	vcdp->chgBus(c+6,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[4]),32);
	vcdp->chgBus(c+7,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[5]),32);
	vcdp->chgBus(c+8,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[6]),32);
	vcdp->chgBus(c+9,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[7]),32);
    }
}

void Vriscv_top::traceChgThis__3(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+10,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_rs1),32);
	vcdp->chgBus(c+11,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_rs2),32);
	vcdp->chgBus(c+12,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_rs1_d),32);
	vcdp->chgBus(c+13,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_rs2_d),32);
	vcdp->chgBus(c+14,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_instr),32);
	vcdp->chgBus(c+15,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_d),32);
	vcdp->chgBus(c+16,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_REG_rd),5);
	vcdp->chgBus(c+17,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_REG_d),32);
	vcdp->chgBus(c+18,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[0]),32);
	vcdp->chgBus(c+19,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[1]),32);
	vcdp->chgBus(c+20,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[2]),32);
	vcdp->chgBus(c+21,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[3]),32);
	vcdp->chgBus(c+22,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[4]),32);
	vcdp->chgBus(c+23,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[5]),32);
	vcdp->chgBus(c+24,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[6]),32);
	vcdp->chgBus(c+25,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[7]),32);
	vcdp->chgBus(c+26,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[8]),32);
	vcdp->chgBus(c+27,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[9]),32);
	vcdp->chgBus(c+28,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[10]),32);
	vcdp->chgBus(c+29,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[11]),32);
	vcdp->chgBus(c+30,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[12]),32);
	vcdp->chgBus(c+31,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[13]),32);
	vcdp->chgBus(c+32,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[14]),32);
	vcdp->chgBus(c+33,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[15]),32);
	vcdp->chgBus(c+34,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[16]),32);
	vcdp->chgBus(c+35,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[17]),32);
	vcdp->chgBus(c+36,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[18]),32);
	vcdp->chgBus(c+37,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[19]),32);
	vcdp->chgBus(c+38,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[20]),32);
	vcdp->chgBus(c+39,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[21]),32);
	vcdp->chgBus(c+40,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[22]),32);
	vcdp->chgBus(c+41,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[23]),32);
	vcdp->chgBus(c+42,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[24]),32);
	vcdp->chgBus(c+43,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[25]),32);
	vcdp->chgBus(c+44,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[26]),32);
	vcdp->chgBus(c+45,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[27]),32);
	vcdp->chgBus(c+46,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[28]),32);
	vcdp->chgBus(c+47,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[29]),32);
	vcdp->chgBus(c+48,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[30]),32);
	vcdp->chgBus(c+49,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[31]),32);
	vcdp->chgBus(c+50,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_EX_rs2_d),32);
	vcdp->chgBus(c+51,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_instruction),32);
	vcdp->chgBus(c+52,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d0),32);
	vcdp->chgBus(c+53,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d1),32);
	vcdp->chgBus(c+54,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_operation),4);
	vcdp->chgBus(c+55,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__result),32);
	vcdp->chgBit(c+56,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__overflow));
	vcdp->chgBus(c+57,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_result),32);
	vcdp->chgBus(c+58,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_instruction),32);
	vcdp->chgBus(c+59,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_d),32);
    }
}

void Vriscv_top::traceChgThis__4(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+60,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_IF_get));
	vcdp->chgBit(c+61,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_ID_give));
	vcdp->chgBus(c+62,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_ID_instr),32);
	vcdp->chgBit(c+63,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_ID_get));
	vcdp->chgBit(c+64,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_give));
	vcdp->chgBus(c+65,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_instr),32);
	vcdp->chgBus(c+66,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_REG_rs1),5);
	vcdp->chgBus(c+67,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_REG_rs2),5);
	vcdp->chgBit(c+68,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_give));
	vcdp->chgBit(c+69,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_EX_get));
	vcdp->chgBus(c+70,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__NS),32);
	vcdp->chgBus(c+71,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__IF_instruction),32);
	vcdp->chgBus(c+72,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__j),2);
	vcdp->chgBus(c+73,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__i),3);
	vcdp->chgBus(c+74,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__NS),32);
	vcdp->chgBus(c+75,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_instruction),32);
	vcdp->chgBus(c+76,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__immediate),32);
	vcdp->chgBit(c+77,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs2_mux));
	vcdp->chgBus(c+78,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__NS),32);
	vcdp->chgBus(c+79,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__NS),32);
    }
}

void Vriscv_top::traceChgThis__5(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+80,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__CS),32);
	vcdp->chgBus(c+81,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__CS),32);
	vcdp->chgBus(c+82,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__CS),32);
	vcdp->chgBus(c+83,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__CS),32);
    }
}

void Vriscv_top::traceChgThis__6(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+84,(vlTOPp->clk));
	vcdp->chgBit(c+85,(vlTOPp->resetn_i));
    }
}
