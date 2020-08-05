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
// Module name: ID_stage
// 
// Functionality: Instruction decode stage of pipelined
//                processor. Provides register and immediate
//                values to the execution stage.
//                Inserts pipeline stalls to mitigate hazards
//
// ------------------------------------------------------------

module ID_stage
(
    input logic         clk,
    input logic         rstn_i,
    input logic         flush_i,
    input logic         halt_i,
    // Register file
    output logic [4:0]  rs1a_o,         // rs1 address to register file
    output logic [4:0]  rs2a_o,         // rs2 address to register file
    input logic [31:0]  rs1d_i,         // rs1 from register file
    input logic [31:0]  rs2d_i,         // rs2 from register file
    // IF <-> ID
    input logic         valid_i,        // P. stage has data ready
    input logic [31:0]  instr_i,        // Instruction
    input logic [31:0]  pc_i,           // Program counter
    output logic        ack_o,          // Notify p. stage that data is read
    // ID <-> EX
    input logic         ack_i,          // Data has been read by n. stage
    output logic        valid_o,        // Data is ready
    output logic [31:0] instr_o,        // Instruction
    output logic [31:0] pc_o,           // Program counter
    output logic [31:0] rs1_o,          // Data rs1
    output logic [31:0] rs2_o,          // Data rs2
    output logic [31:0] imm_o,          // Immediate
    // WB <-> ID
    input logic [4:0]   rd_i            // Destination register of WB stage
);

// Register lock to mitigate pipeline hazards
logic [31:0]    reg_lock_n;
logic [31:0]    reg_lock_q;

logic [4:0]     rd;
logic [4:0]     rd_n, rd_q;
logic           invalid;

// immediate value
logic [31:0]    imm;

// Data register, 5x32 bit + valid: instr, pc, rs1, rs2, imm
struct packed {
    logic           valid;
    logic [31:0]    instr;
    logic [31:0]    pc;
    logic [31:0]    rs1;
    logic [31:0]    rs2;
    logic [31:0]    imm;
} data_n, data_q;

// Decodes instructions into pointers to registers
// and immediate values
decoder decoder_i(
    .instr  ( instr_i   ),
    .rd     ( rd        ),
    .rs1    ( rs1a_o    ),
    .rs2    ( rs2a_o    ),
    .imm    ( imm       ),
    .invalid( invalid   )
);

assign valid_o = data_q.valid;
assign instr_o = data_q.instr;
assign pc_o    = data_q.pc;
assign rs1_o   = data_q.rs1;
assign rs2_o   = data_q.rs2;
assign imm_o   = data_q.imm;

always_comb
begin
    data_n = data_q;
    ack_o   = 1'b0;
    rd_n    = rd_q;
    reg_lock_n = reg_lock_q;

    // Free the register that WB stage writes into
    reg_lock_n[rd_i] = 1'b0;

    // Data is no longer valid if we recieved and ack
    if(ack_i)
        data_n.valid = 1'b0;

    // If data is not valid or ack received, we wait for the
    // previous stage to be valid. If this is the case, we set our
    // data and set valid=1
    if((!data_q.valid || ack_i) && valid_i) begin
        // If the destination register is locked, stall
        // Else lock the register (bypass if rd=0)

        // TODO Temporary exception on invalid instruction:
        // Core just stops
        if(!reg_lock_q[rs1a_o] && !reg_lock_q[rs2a_o] && ! invalid) begin
            ack_o          = 1'b1;
            data_n         = {1'b1, instr_i, pc_i, rs1d_i, rs2d_i, imm};
            rd_n           = rd;
            reg_lock_n[rd] = 1'b1;
        end
    end

    // Invalidate if flush
    if(flush_i) begin
        data_n.valid = 1'b0;
        reg_lock_n[rd_q] = 1'b0;
        reg_lock_n[rd] = 1'b0;
    end
    
    // register 0 is never locked
    reg_lock_n[0] = 1'b0;
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
        data_q     <= 'b0;
        reg_lock_q <= 'b0;
    end else if(!halt_i) begin
        data_q     <= data_n;
        rd_q       <= rd_n;
        reg_lock_q <= reg_lock_n;
    end
end

endmodule