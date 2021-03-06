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
// Module name: EX_stage
// 
// Functionality: Instruction execute stage of pipelined
//                processor. ALU and branching functionality
//
// ------------------------------------------------------------

module EX_stage(
    input logic         clk,
    input logic         rstn_i,  
    input logic         flush_i,  
    input logic         halt_i,
    //ID-EX
    input logic         valid_i,
    output logic        ack_o,
    input logic [31:0]  instr_i,
    input logic [31:0]  pc_i,
    input logic [31:0]  rs1_i,
    input logic [31:0]  rs2_i,
    input logic [31:0]  imm_i,
    input logic         br_pred_i,
    //EX-MEM
    input logic         ack_i,
    output logic        valid_o,
    output logic [31:0] pc_o,
    output logic [31:0] instr_o,
    output logic [31:0] result_o,
    output logic [31:0] rs2_o,
    output logic        branch_o
);

// Data register, 4x32 bit + valid + branch: instr, pc, result, rs2
struct packed {
    logic           valid;
    logic           branch;
    logic [31:0]    instr;
    logic [31:0]    pc;
    logic [31:0]    result;
    logic [31:0]    rs2;
} data_n, data_q;

logic [31:0]        result;
logic               branch;


executer executer_i (
    .instr        ( instr_i ),
    .pc           ( pc_i    ),
    .rs1          ( rs1_i   ),
    .rs2          ( rs2_i   ),
    .imm          ( imm_i   ),
    .result       ( result  ),
    .branch_taken ( branch  )
);

assign valid_o  = data_q.valid;
assign instr_o  = data_q.instr;
assign pc_o     = data_q.pc;
assign result_o = data_q.result;
assign rs2_o    = data_q.rs2;
assign branch_o = data_q.branch;

always_comb
begin
    data_n = data_q;
    ack_o   = 1'b0;

    // Data is no longer valid if we recieved and ack
    if(ack_i)
        data_n.valid = 1'b0;

    // If data is not valid or ack received, we wait for the
    // previous stage to be valid. If this is the case, we set our
    // data and set valid=1
    if((!data_q.valid || ack_i) && valid_i && (!flush_i)) begin
        ack_o          = 1'b1;
        if(branch == br_pred_i)
            data_n         = {1'b1, 1'b0, instr_i, pc_i, result, rs2_i};
        else if(branch && !br_pred_i)
            data_n         = {1'b1, 1'b1, instr_i, pc_i, result, rs2_i};
        else if(!branch && br_pred_i)
            data_n         = {1'b1, 1'b1, instr_i, pc_i, pc_i+4, rs2_i};
    end

    // Invalidate if flush
    if(flush_i) begin
        data_n.valid = 1'b0;
        data_n.branch = 1'b0;
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q     <= 'b0;
    end else if(!halt_i) begin
        data_q     <= data_n;
    end
end

endmodule