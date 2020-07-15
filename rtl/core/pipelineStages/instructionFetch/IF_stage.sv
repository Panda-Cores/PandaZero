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

module IF_stage
#(
    parameter BITSIZE = 32
)(
    input               clk,
    input               rstn_i,
    input               flush_i,
    //IF-ID
    input               ack_i,
    output              valid_o,
    output  [31:0]      instr_o,
    output  [31:0]      pc_o,
    //IF-MEM (TODO: cache)
    output [31:0]       MEM_addr_o,
    input [31:0]        MEM_data_i,
    output              MEM_read_o,
    input               MEM_valid_i,
    //Branching
    input [31:0]        pc_i,
    input               branch_i
);

logic read_n;
logic read_q;
logic incr_pc;
logic [31:0] instr;
logic [31:0] pc;
logic [31:0] pc_q;

// Data register, 2x32 bit + valid + mem_valid: instr, pc
struct packed {
    logic           valid;
    logic           mem_valid;
    logic [31:0]    instr;
    logic [31:0]    pc;
} data_n, data_q;

assign MEM_read_o = read_q;
assign MEM_addr_o = pc_q;

assign valid_o = data_q.valid;
assign instr_o = data_q.instr;
assign pc_o = data_q.pc;

always_comb
begin
    data_n  = data_q;
    incr_pc = 1'b0;
    read_n  = read_q;

    // Latch the incoming data and directly read
    // the next address
    if(MEM_valid_i && !data_q.mem_valid) begin
        read_n           = 1'b0;
        instr            = MEM_data_i;
        pc               = pc_q;
        data_n.mem_valid = 1'b1;
    end else begin
        read_n           = 1'b1;
    end

    // Data is no longer valid if we recieved and ack
    if(ack_i)
        data_n.valid = 1'b0;

    // If data is not valid or ack received, we wait for the
    // memory to be valid which we invalidate when reading
    if((!data_q.valid || ack_i) && data_q.mem_valid) begin
        data_n         = {1'b1, 1'b0, instr, pc};
        read_n         = 1'b1;
    end

    // Invalidate if flush and use the provided pc
    if(flush_i) begin
        data_n.valid     = 1'b0;
        data_n.mem_valid = 1'b0;
        incr_pc          = 1'b0;
        read_n           = 1'b1;
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q <= 'b0;
        read_q <= 'b1;
    end else begin
        data_q <= data_n;
        read_q <= read_n;
        if(branch_i)
            pc_q <= pc_i;
        else if(incr_pc)
            pc_q <= pc_q + 4;
    end
end

endmodule