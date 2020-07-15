// ------------------------ Disclaimer -----------------------
// No warranty of correctness, synthesizability or 
// functionality of this code is given.
// Use this code under your own risk.
// When using this code, copy this disclaimer at the top of 
// Your file
//
// (c) Luca Hanel 2020
//
// ------------------------------------------------------------
//
// Module name: WB_stage
// 
// Functionality: Writeback stage of pipelined processor. Writes
//                results back into the register file.
//                Destination register is used by ID stage to 
//                unlock registers (used for stalling)
//
// ------------------------------------------------------------


`include "instructions.sv"

module WB_stage
#(
    BITSIZE
)(
    input                       clk,
    input                       rstn_i,
    //MEM-WB
    output                      ack_o,
    input                       valid_i,
    input [31 : 0]              instr_i,
    input [BITSIZE - 1 : 0]     data_i,
    //WB-REG
    output [4:0]                rd_o,
    output [BITSIZE - 1 : 0]    data_o
);

assign data_o = data_i;

always_comb
begin
    ack_o = 1'b0;

    case(instr_i[6:0])
        `LUI, `IMM_REG_ALU, `REG_REG_ALU, `LOAD, `JAL, `JALR, `AUIPC: 
            rd_o = instr_i[11 : 7];

        default:
            rd_o = 'b0;
    endcase

    if(valid_i)
        ack_o   = 1'b1;
end
endmodule