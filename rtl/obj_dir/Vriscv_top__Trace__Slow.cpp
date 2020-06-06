// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


//======================

void Vriscv_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vriscv_top::traceInit, &Vriscv_top::traceFull, &Vriscv_top::traceChg, this);
}
void Vriscv_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vriscv_top* t=(Vriscv_top*)userthis;
    Vriscv_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vriscv_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vriscv_top* t=(Vriscv_top*)userthis;
    Vriscv_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vriscv_top::traceInitThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vriscv_top::traceFullThis(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vriscv_top::traceInitThis__1(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+84,"clk",-1);
	vcdp->declBit(c+85,"resetn_i",-1);
	vcdp->declBit(c+84,"riscv_top clk",-1);
	vcdp->declBit(c+85,"riscv_top resetn_i",-1);
	vcdp->declBus(c+86,"riscv_top core_top_i BITSIZE",-1,31,0);
	vcdp->declBit(c+84,"riscv_top core_top_i clk",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i resetn_i",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i resetn",-1);
	vcdp->declBit(c+60,"riscv_top core_top_i ID_IF_get",-1);
	vcdp->declBit(c+61,"riscv_top core_top_i IF_ID_give",-1);
	vcdp->declBus(c+62,"riscv_top core_top_i IF_ID_instr",-1,31,0);
	vcdp->declBit(c+63,"riscv_top core_top_i EX_ID_get",-1);
	vcdp->declBit(c+64,"riscv_top core_top_i ID_EX_give",-1);
	vcdp->declBus(c+65,"riscv_top core_top_i ID_EX_instr",-1,31,0);
	vcdp->declBus(c+10,"riscv_top core_top_i ID_EX_rs1",-1,31,0);
	vcdp->declBus(c+11,"riscv_top core_top_i ID_EX_rs2",-1,31,0);
	vcdp->declBus(c+66,"riscv_top core_top_i ID_REG_rs1",-1,4,0);
	vcdp->declBus(c+67,"riscv_top core_top_i ID_REG_rs2",-1,4,0);
	vcdp->declBus(c+12,"riscv_top core_top_i REG_ID_rs1_d",-1,31,0);
	vcdp->declBus(c+13,"riscv_top core_top_i REG_ID_rs2_d",-1,31,0);
	vcdp->declBit(c+68,"riscv_top core_top_i EX_WB_give",-1);
	vcdp->declBit(c+69,"riscv_top core_top_i WB_EX_get",-1);
	vcdp->declBus(c+14,"riscv_top core_top_i EX_WB_instr",-1,31,0);
	vcdp->declBus(c+15,"riscv_top core_top_i EX_WB_d",-1,31,0);
	vcdp->declBus(c+16,"riscv_top core_top_i WB_REG_rd",-1,4,0);
	vcdp->declBus(c+17,"riscv_top core_top_i WB_REG_d",-1,31,0);
	vcdp->declBit(c+1,"riscv_top core_top_i REG_mux",-1);
	vcdp->declBus(c+16,"riscv_top core_top_i REG_rd",-1,4,0);
	vcdp->declBus(c+66,"riscv_top core_top_i REG_rs1",-1,4,0);
	vcdp->declBus(c+67,"riscv_top core_top_i REG_rs2",-1,4,0);
	vcdp->declBus(c+12,"riscv_top core_top_i REG_rs1_d",-1,31,0);
	vcdp->declBus(c+13,"riscv_top core_top_i REG_rs2_d",-1,31,0);
	vcdp->declBus(c+17,"riscv_top core_top_i REG_rd_d",-1,31,0);
	vcdp->declBus(c+86,"riscv_top core_top_i registerFile_i BITSIZE",-1,31,0);
	vcdp->declBus(c+16,"riscv_top core_top_i registerFile_i rd",-1,4,0);
	vcdp->declBus(c+66,"riscv_top core_top_i registerFile_i rs1",-1,4,0);
	vcdp->declBus(c+67,"riscv_top core_top_i registerFile_i rs2",-1,4,0);
	vcdp->declBus(c+17,"riscv_top core_top_i registerFile_i data_rd_i",-1,31,0);
	vcdp->declBus(c+12,"riscv_top core_top_i registerFile_i data_rs1_o",-1,31,0);
	vcdp->declBus(c+13,"riscv_top core_top_i registerFile_i data_rs2_o",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus(c+18+i*1,"riscv_top core_top_i registerFile_i registers",(i+0),31,0);}}
	vcdp->declBus(c+86,"riscv_top core_top_i IF_i BITSIZE",-1,31,0);
	vcdp->declBit(c+84,"riscv_top core_top_i IF_i clk",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i IF_i resetn_i",-1);
	vcdp->declBit(c+60,"riscv_top core_top_i IF_i ID_IF_get_i",-1);
	vcdp->declBit(c+61,"riscv_top core_top_i IF_i IF_ID_give_o",-1);
	vcdp->declBus(c+62,"riscv_top core_top_i IF_i IF_ID_instr_o",-1,31,0);
	vcdp->declBus(c+80,"riscv_top core_top_i IF_i CS",-1,31,0);
	vcdp->declBus(c+70,"riscv_top core_top_i IF_i NS",-1,31,0);
	vcdp->declBus(c+71,"riscv_top core_top_i IF_i IF_instruction",-1,31,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus(c+2+i*1,"riscv_top core_top_i IF_i instructions",(i+0),31,0);}}
	vcdp->declBus(c+72,"riscv_top core_top_i IF_i j",-1,1,0);
	vcdp->declBus(c+73,"riscv_top core_top_i IF_i i",-1,2,0);
	vcdp->declBus(c+86,"riscv_top core_top_i ID_i BITSIZE",-1,31,0);
	vcdp->declBit(c+84,"riscv_top core_top_i ID_i clk",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i ID_i resetn_i",-1);
	vcdp->declBit(c+61,"riscv_top core_top_i ID_i IF_ID_give_i",-1);
	vcdp->declBit(c+60,"riscv_top core_top_i ID_i ID_IF_get_o",-1);
	vcdp->declBus(c+62,"riscv_top core_top_i ID_i IF_ID_instr_i",-1,31,0);
	vcdp->declBit(c+63,"riscv_top core_top_i ID_i EX_ID_get_i",-1);
	vcdp->declBit(c+64,"riscv_top core_top_i ID_i ID_EX_give_o",-1);
	vcdp->declBus(c+65,"riscv_top core_top_i ID_i ID_EX_instruction_o",-1,31,0);
	vcdp->declBus(c+10,"riscv_top core_top_i ID_i ID_EX_rs1_o",-1,31,0);
	vcdp->declBus(c+11,"riscv_top core_top_i ID_i ID_EX_rs2_o",-1,31,0);
	vcdp->declBus(c+66,"riscv_top core_top_i ID_i ID_REG_rs1_o",-1,4,0);
	vcdp->declBus(c+67,"riscv_top core_top_i ID_i ID_REG_rs2_o",-1,4,0);
	vcdp->declBus(c+12,"riscv_top core_top_i ID_i REG_ID_rs1_d_i",-1,31,0);
	vcdp->declBus(c+13,"riscv_top core_top_i ID_i REG_ID_rs2_d_i",-1,31,0);
	vcdp->declBit(c+1,"riscv_top core_top_i ID_i ID_REG_access_i",-1);
	vcdp->declBus(c+81,"riscv_top core_top_i ID_i CS",-1,31,0);
	vcdp->declBus(c+74,"riscv_top core_top_i ID_i NS",-1,31,0);
	vcdp->declBus(c+75,"riscv_top core_top_i ID_i ID_instruction",-1,31,0);
	vcdp->declBus(c+12,"riscv_top core_top_i ID_i ID_EX_rs1_d",-1,31,0);
	vcdp->declBus(c+50,"riscv_top core_top_i ID_i ID_EX_rs2_d",-1,31,0);
	vcdp->declBus(c+76,"riscv_top core_top_i ID_i immediate",-1,31,0);
	vcdp->declBus(c+87,"riscv_top core_top_i ID_i rs1",-1,4,0);
	vcdp->declBus(c+88,"riscv_top core_top_i ID_i rs2",-1,4,0);
	vcdp->declBit(c+77,"riscv_top core_top_i ID_i rs2_mux",-1);
	vcdp->declBus(c+86,"riscv_top core_top_i EX_i BITSIZE",-1,31,0);
	vcdp->declBit(c+84,"riscv_top core_top_i EX_i clk",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i EX_i resetn_i",-1);
	vcdp->declBit(c+64,"riscv_top core_top_i EX_i ID_EX_give_i",-1);
	vcdp->declBit(c+63,"riscv_top core_top_i EX_i EX_ID_get_o",-1);
	vcdp->declBus(c+65,"riscv_top core_top_i EX_i ID_EX_instruction_i",-1,31,0);
	vcdp->declBus(c+10,"riscv_top core_top_i EX_i ID_EX_rs1_i",-1,31,0);
	vcdp->declBus(c+11,"riscv_top core_top_i EX_i ID_EX_rs2_i",-1,31,0);
	vcdp->declBit(c+69,"riscv_top core_top_i EX_i WB_EX_get_i",-1);
	vcdp->declBit(c+68,"riscv_top core_top_i EX_i EX_WB_give_o",-1);
	vcdp->declBus(c+14,"riscv_top core_top_i EX_i EX_WB_instruction_o",-1,31,0);
	vcdp->declBus(c+15,"riscv_top core_top_i EX_i EX_WB_d_o",-1,31,0);
	vcdp->declBus(c+82,"riscv_top core_top_i EX_i CS",-1,31,0);
	vcdp->declBus(c+78,"riscv_top core_top_i EX_i NS",-1,31,0);
	vcdp->declBus(c+51,"riscv_top core_top_i EX_i EX_instruction",-1,31,0);
	vcdp->declBus(c+52,"riscv_top core_top_i EX_i EX_d0",-1,31,0);
	vcdp->declBus(c+53,"riscv_top core_top_i EX_i EX_d1",-1,31,0);
	vcdp->declBus(c+54,"riscv_top core_top_i EX_i alu_operation",-1,3,0);
	vcdp->declBus(c+55,"riscv_top core_top_i EX_i alu_result",-1,31,0);
	vcdp->declBit(c+56,"riscv_top core_top_i EX_i alu_overflow",-1);
	vcdp->declBus(c+57,"riscv_top core_top_i EX_i EX_result",-1,31,0);
	vcdp->declBus(c+57,"riscv_top core_top_i EX_i WB_d",-1,31,0);
	vcdp->declBus(c+86,"riscv_top core_top_i EX_i alu_i BITSIZE",-1,31,0);
	vcdp->declBus(c+52,"riscv_top core_top_i EX_i alu_i A_i",-1,31,0);
	vcdp->declBus(c+53,"riscv_top core_top_i EX_i alu_i B_i",-1,31,0);
	vcdp->declBus(c+54,"riscv_top core_top_i EX_i alu_i operation_i",-1,3,0);
	vcdp->declBus(c+55,"riscv_top core_top_i EX_i alu_i R_o",-1,31,0);
	vcdp->declBit(c+56,"riscv_top core_top_i EX_i alu_i overflow_o",-1);
	vcdp->declBus(c+55,"riscv_top core_top_i EX_i alu_i result",-1,31,0);
	vcdp->declBit(c+56,"riscv_top core_top_i EX_i alu_i overflow",-1);
	vcdp->declBus(c+86,"riscv_top core_top_i WB_i BITSIZE",-1,31,0);
	vcdp->declBit(c+84,"riscv_top core_top_i WB_i clk",-1);
	vcdp->declBit(c+85,"riscv_top core_top_i WB_i resetn_i",-1);
	vcdp->declBit(c+69,"riscv_top core_top_i WB_i WB_EX_get_o",-1);
	vcdp->declBit(c+68,"riscv_top core_top_i WB_i EX_WB_give_i",-1);
	vcdp->declBus(c+14,"riscv_top core_top_i WB_i EX_WB_instruction_i",-1,31,0);
	vcdp->declBus(c+15,"riscv_top core_top_i WB_i EX_WB_d_i",-1,31,0);
	vcdp->declBus(c+16,"riscv_top core_top_i WB_i WB_REG_rd_o",-1,4,0);
	vcdp->declBus(c+17,"riscv_top core_top_i WB_i WB_REG_d_o",-1,31,0);
	vcdp->declBit(c+1,"riscv_top core_top_i WB_i WB_REG_access_o",-1);
	vcdp->declBus(c+83,"riscv_top core_top_i WB_i CS",-1,31,0);
	vcdp->declBus(c+79,"riscv_top core_top_i WB_i NS",-1,31,0);
	vcdp->declBus(c+58,"riscv_top core_top_i WB_i WB_instruction",-1,31,0);
	vcdp->declBus(c+59,"riscv_top core_top_i WB_i WB_d",-1,31,0);
    }
}

void Vriscv_top::traceFullThis__1(Vriscv_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vriscv_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_mux));
	vcdp->fullBus(c+2,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[0]),32);
	vcdp->fullBus(c+3,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[1]),32);
	vcdp->fullBus(c+4,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[2]),32);
	vcdp->fullBus(c+5,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[3]),32);
	vcdp->fullBus(c+6,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[4]),32);
	vcdp->fullBus(c+7,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[5]),32);
	vcdp->fullBus(c+8,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[6]),32);
	vcdp->fullBus(c+9,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__instructions[7]),32);
	vcdp->fullBus(c+10,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_rs1),32);
	vcdp->fullBus(c+11,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_rs2),32);
	vcdp->fullBus(c+12,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_rs1_d),32);
	vcdp->fullBus(c+13,(vlTOPp->riscv_top__DOT__core_top_i__DOT__REG_rs2_d),32);
	vcdp->fullBus(c+14,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_instr),32);
	vcdp->fullBus(c+15,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_d),32);
	vcdp->fullBus(c+16,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_REG_rd),5);
	vcdp->fullBus(c+17,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_REG_d),32);
	vcdp->fullBus(c+18,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[0]),32);
	vcdp->fullBus(c+19,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[1]),32);
	vcdp->fullBus(c+20,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[2]),32);
	vcdp->fullBus(c+21,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[3]),32);
	vcdp->fullBus(c+22,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[4]),32);
	vcdp->fullBus(c+23,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[5]),32);
	vcdp->fullBus(c+24,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[6]),32);
	vcdp->fullBus(c+25,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[7]),32);
	vcdp->fullBus(c+26,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[8]),32);
	vcdp->fullBus(c+27,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[9]),32);
	vcdp->fullBus(c+28,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[10]),32);
	vcdp->fullBus(c+29,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[11]),32);
	vcdp->fullBus(c+30,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[12]),32);
	vcdp->fullBus(c+31,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[13]),32);
	vcdp->fullBus(c+32,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[14]),32);
	vcdp->fullBus(c+33,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[15]),32);
	vcdp->fullBus(c+34,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[16]),32);
	vcdp->fullBus(c+35,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[17]),32);
	vcdp->fullBus(c+36,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[18]),32);
	vcdp->fullBus(c+37,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[19]),32);
	vcdp->fullBus(c+38,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[20]),32);
	vcdp->fullBus(c+39,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[21]),32);
	vcdp->fullBus(c+40,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[22]),32);
	vcdp->fullBus(c+41,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[23]),32);
	vcdp->fullBus(c+42,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[24]),32);
	vcdp->fullBus(c+43,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[25]),32);
	vcdp->fullBus(c+44,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[26]),32);
	vcdp->fullBus(c+45,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[27]),32);
	vcdp->fullBus(c+46,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[28]),32);
	vcdp->fullBus(c+47,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[29]),32);
	vcdp->fullBus(c+48,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[30]),32);
	vcdp->fullBus(c+49,(vlTOPp->riscv_top__DOT__core_top_i__DOT__registerFile_i__DOT__registers[31]),32);
	vcdp->fullBus(c+50,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_EX_rs2_d),32);
	vcdp->fullBus(c+51,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_instruction),32);
	vcdp->fullBus(c+52,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d0),32);
	vcdp->fullBus(c+53,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_d1),32);
	vcdp->fullBus(c+54,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_operation),4);
	vcdp->fullBus(c+55,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__result),32);
	vcdp->fullBit(c+56,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__alu_i__DOT__overflow));
	vcdp->fullBus(c+57,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__EX_result),32);
	vcdp->fullBus(c+58,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_instruction),32);
	vcdp->fullBus(c+59,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__WB_d),32);
	vcdp->fullBit(c+60,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_IF_get));
	vcdp->fullBit(c+61,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_ID_give));
	vcdp->fullBus(c+62,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_ID_instr),32);
	vcdp->fullBit(c+63,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_ID_get));
	vcdp->fullBit(c+64,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_give));
	vcdp->fullBus(c+65,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_EX_instr),32);
	vcdp->fullBus(c+66,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_REG_rs1),5);
	vcdp->fullBus(c+67,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_REG_rs2),5);
	vcdp->fullBit(c+68,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_WB_give));
	vcdp->fullBit(c+69,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_EX_get));
	vcdp->fullBus(c+70,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__NS),32);
	vcdp->fullBus(c+71,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__IF_instruction),32);
	vcdp->fullBus(c+72,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__j),2);
	vcdp->fullBus(c+73,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__i),3);
	vcdp->fullBus(c+74,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__NS),32);
	vcdp->fullBus(c+75,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__ID_instruction),32);
	vcdp->fullBus(c+76,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__immediate),32);
	vcdp->fullBit(c+77,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs2_mux));
	vcdp->fullBus(c+78,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__NS),32);
	vcdp->fullBus(c+79,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__NS),32);
	vcdp->fullBus(c+80,(vlTOPp->riscv_top__DOT__core_top_i__DOT__IF_i__DOT__CS),32);
	vcdp->fullBus(c+81,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__CS),32);
	vcdp->fullBus(c+82,(vlTOPp->riscv_top__DOT__core_top_i__DOT__EX_i__DOT__CS),32);
	vcdp->fullBus(c+83,(vlTOPp->riscv_top__DOT__core_top_i__DOT__WB_i__DOT__CS),32);
	vcdp->fullBit(c+84,(vlTOPp->clk));
	vcdp->fullBit(c+85,(vlTOPp->resetn_i));
	vcdp->fullBus(c+86,(0x20U),32);
	vcdp->fullBus(c+87,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs1),5);
	vcdp->fullBus(c+88,(vlTOPp->riscv_top__DOT__core_top_i__DOT__ID_i__DOT__rs2),5);
    }
}
