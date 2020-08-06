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
    output logic         br_pred_o,
    //Memory
    wb_bus_t.master      wb_bus,
    //Branching
    input logic [31:0]   pc_i,
    input logic          branch_i,
    //Debug
    output logic [31:0]  dbg_pc_o
);

logic incr_pc;
logic [31:0] pc_n;
// current pc
logic [31:0] pc_q;
logic [31:0] mem_data;
logic read;
logic read_valid;

// branch predictor
logic [31:0] pred_pc;
logic        pred_br;

// Data register, 2x32 bit + valid: instr, pc
struct packed {
    logic           valid;
    logic [31:0]    instr;
    logic [31:0]    pc;
    logic           branch_prediced;
} data_n, data_q;

assign br_pred_o = data_q.branch_prediced;
assign valid_o = data_q.valid;
assign instr_o = data_q.instr;
assign pc_o = data_q.pc;
assign dbg_pc_o = pc_q;

load_unit lu_i
(
    .clk                ( clk       ),
    .rstn_i             ( rstn_i    ),
    .read_i             ( read      ),
    .addr_i             ( pc_q      ),
    .valid_o            ( read_valid),
    .data_o             ( mem_data  ),
    .wb_bus             ( wb_bus    )
);

branch_predictor bp_i
(
    .instr_i ( mem_data ),
    .pc_i    ( pc_q     ),
    .pc_o    ( pred_pc  ),
    .branch  ( pred_br  )
);

always_comb
begin
    read    = 1'b0;
    data_n  = data_q;
    incr_pc = 1'b0;

    if(ack_i)
        data_n.valid = 1'b0;

    if((!data_q.valid || ack_i)) begin
        read = 1'b1;
        if(read_valid) begin
            data_n         = {1'b1, mem_data, pc_q, pred_br};
            incr_pc        = 1'b1;
        end
    end

    // Invalidate if flush and use the provided pc
    if(flush_i) begin
        data_n.valid     = 1'b0;
        incr_pc          = 1'b0;
        read             = 1'b0;
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q <= 'b0;
    end else begin
        data_q <= data_n;

        if(branch_i || flush_i)
            pc_q <= pc_i;
        else if(incr_pc && !halt_i)
            // If a branch was predicted, jump instead of increment the pc
            if(pred_br)
                pc_q <= pred_pc;
            else
                pc_q <= pc_q + 4;
    end
end

endmodule