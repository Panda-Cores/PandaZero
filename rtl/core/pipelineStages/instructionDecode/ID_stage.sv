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
    input               clk,
    input               resetn_i,
    // Register file
    input [31:0][32]    registers_i,    // Registers from register file
    // IF <-> ID
    input               valid_i,        // P. stage has data ready
    input [31:0]        instr_i,        // Instruction
    input [31:0]        pc_i,           // Program counter
    output              notify_o,       // Notify p. stage that data is read
    // ID <-> EX
    input               notify_i,       // Data has been read by n. stage
    output              valid_o,        // Data is ready
    output              instr_o,        // Instruction
    output              pc_o,           // Program counter
    output [31:0]       rs1d_o,         // Data rs1
    output [31:0]       rs2d_o,         // Data rs2
    output [31:0]       imm_o,          // Immediate
    // WB <-> ID
    input               rd_i            // Destination register of WB stage
);

// Register lock to mitigate pipeline hazards
logic [31:0]    reg_lock_n;
logic [31:0]    reg_lock_q;

// Current instruction & program counter
logic [31:0]    instr_q;
logic [31:0]    pc_q;

// State signals
logic           empty;  // Stage is empty

initial begin
    empty      = 1'b1;
    reg_lock_n = 'b0;
end

// Decodes instructions into pointers to registers
// and immediate values
decoder decoder_i(
    .instr  ( instr_q   ),
    .rd     ( rd        ),
    .rs1    ( rs1       ),
    .rs2    ( rs2       ),
    .imm    ( imm_o     )
);

// Pass values to next stage
assign rs1d_o   = registers_i[rs1];
assign rs2d_o   = registers_i[rs2];
assign instr_o  = instr_q;
assign pc_o     = pc_q;

// Pipeline hazard mitigation by stalling
always_comb begin
    valid_o = 1'b0;
    // If the destination register is locked, stall
    // Else lock the register
    if(!reg_lock_q[rd] || rd == 'b0) begin
        valid_o        = 1'b1;
        reg_lock_n[rd] = 1'b1;
    end
    // Free the register that WB stage writes into
    reg_lock_n[rd_i] = 1'b0;
end

always_ff @(posedge clk, negedge resetn_i)
begin
    // State register for register locking
    reg_lock_q <= reg_lock_n;

    // If next stage is ready, or the current stage is empty
    // try to get next instruction from previous stage.
    // Remain empty until instruction is obtained
    if(notify_i || empty) begin
        if(valid_i) begin
            instr_q  <= instr_i;
            pc_q     <= pc_i;
            notify_o <= 1'b1;
            empty    <= 1'b0;
        end
        else begin
            notify_o <= 1'b0;
            empty    <= 1'b1;
        end
    else begin
        notify_o     <= 1'b0;
    end
end

endmodule