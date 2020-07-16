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

module WB_stage (
    input logic         clk,
    input logic         rstn_i,
    input logic         halt_i,
    //MEM-WB
    output logic        ack_o,
    input logic         valid_i,
    input logic [31:0]  instr_i,
    input logic [31:0]  data_i,
    //WB-REG
    output logic [4:0]  rd_o,
    output logic [31:0] data_o
);

struct packed {
    logic [4:0]     rd;
    logic [31:0]    data;
} data_n, data_q;


assign data_o = data_q.data;
assign rd_o   = data_q.rd;

always_comb
begin
    ack_o = 1'b0;
    data_n = data_q;

    if(valid_i) begin
        ack_o        = 1'b1;
        case(instr_i[6:0])
            `LUI, `IMM_REG_ALU, `REG_REG_ALU, `LOAD, `JAL, `JALR, `AUIPC: begin
                data_n.rd = instr_i[11 : 7];
                data_n.data = data_i;
            end
            default:
                data_n.rd = 'b0;
        endcase
    end else begin
        data_n.rd = 'b0;
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q <= 'b0;
    end else if(!halt_i) begin
        data_q <= data_n;
    end
end
endmodule