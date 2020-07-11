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

module EX_stage
#(
    parameter BITSIZE
)(
    input                   clk,
    input                   resetn_i,    
    //ID-EX
    input                   valid_i,
    output                  notify_o,
    input [31 : 0]          instr_i,
    input [31:0]            pc_i,
    input [31:0]            rs1d_i,
    input [31:0]            rs2d_i,
    input [31:0]            imm_i,
    //EX-MEM
    input                   notify_i,
    output                  valid_o,
    output [31:0]           pc_o,
    output [31:0]           instr_o,
    output [31:0]           result_o,
    output [31:0]           rs2_o,
    output                  branch_taken_o
);

executer executer_i (
    .instr        ( instr_q         ),
    .pc           ( pc_q            ),
    .rs1          ( rs1_q           ),
    .rs2          ( rs2_q           ),
    .imm          ( imm_q           ),
    .result       ( result_o        ),
    .branch_taken ( branch_taken_o  )
);

assign valid_o  = ~empty;
assign pc_o     = pc_q;
assign rs2_o    = rs2_q;
assign instr_o  = instr_q;

always_ff @(posedge clk, negedge resetn_i)
begin
    if(!resetn_i) begin
        empty <= 1'b1;
        notify_o <= 1'b0;
    end
    else begin
        if(notify_i || empty) begin
            if(valid_i) begin
                instr_q  <= instr_i;
                pc_q     <= pc_i;
                rs1_q    <= rs1_i;
                rs2_q    <= rs2_i;
                imm_q    <= imm_i;
                notify_o <= 1'b1;
                empty    <= 1'b0;
            end
            else begin
                notify_o <= 1'b0;
                empty    <= 1'b1;
            end
        end else begin
            notify_o <= 1'b0;
        end
    end
end

endmodule