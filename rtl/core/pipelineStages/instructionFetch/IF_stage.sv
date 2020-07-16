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
// Module name: IF_stage
// 
// Functionality: Instruction fetch stage of pipelined
//                processor.
//
// ------------------------------------------------------------

module IF_stage (
    input logic          clk,
    input logic          rstn_i,
    input logic          flush_i,
    input logic          halt_i,
    //IF-ID
    input logic          ack_i,
    output logic         valid_o,
    output logic  [31:0] instr_o,
    output logic  [31:0] pc_o,
    //IF-MEM (TODO: cache)
    output logic         MEM_en_o,
    output logic [31:0]  MEM_addr_o,
    input logic [31:0]   MEM_data_i,
    //Branching
    input logic [31:0]   pc_i,
    input logic          branch_i
);

logic incr_pc;
logic [31:0] pc_n;
logic [31:0] pc_q;

// Data register, 2x32 bit + valid: instr, pc
struct packed {
    logic           valid;
    logic [31:0]    instr;
    logic [31:0]    pc;
} data_n, data_q;

assign MEM_addr_o = pc_q;

assign valid_o = data_q.valid;
assign instr_o = data_q.instr;
assign pc_o = data_q.pc;

always_comb
begin
    MEM_en_o = 1'b1;
    data_n  = data_q;
    incr_pc = 1'b0;

    if((!data_q.valid || ack_i)) begin
        data_n         = {1'b1, MEM_data_i, pc_q};
        incr_pc        = 1'b1;
    end

    // Invalidate if flush and use the provided pc
    if(flush_i) begin
        data_n.valid     = 1'b0;
        incr_pc          = 1'b0;
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q <= 'b0;
    end else if(!halt_i) begin
        data_q <= data_n;

        if(branch_i || flush_i)
            pc_q <= pc_i;
        else if(incr_pc)
            pc_q <= pc_q + 4;
    end
end

endmodule