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
// Module name: executer
// 
// Functionality: Instruction executer. Provides ALU functionality
//                and gives out if branching.
//
// ------------------------------------------------------------

`include "instructions.sv"
`include "alu_operations.sv"

module executer
(
    input logic [31:0]    instr,
    input logic [31:0]    pc,
    input logic [31:0]    rs1,
    input logic [31:0]    rs2,
    input logic [31:0]    imm,
    output logic [31:0]   result,
    output logic          branch_taken
);

logic [3:0] operation;
logic [31:0] ALU_d0;
logic [31:0] ALU_d1;
logic       alu_d0_mux;
logic       alu_d1_mux;

// Data mux for ALU
assign ALU_d0 = (alu_d0_mux) ? pc : rs1;
assign ALU_d1 = (alu_d1_mux) ? imm : rs2;

// Choose appropriate data for ALU and compute whether
// branch is taken or not
always_comb
begin
    alu_d1_mux      = 1'b0;
    alu_d0_mux      = 1'b0;
    branch_taken    = 1'b0;

    case(instr[6:0])
        `LUI, `LOAD, `STORE: begin
            operation   = `ADDITION;
            alu_d1_mux      = 1'b1;
        end

        `IMM_REG_ALU: begin
            if(instr[14:12] == 3'b101)
                operation = {instr[30], instr[14:12]};
            else
                operation = {1'b0, instr[14:12]};
            alu_d1_mux      = 1'b1;
        end

        `REG_REG_ALU: begin
            operation = {instr[30], instr[14:12]};
        end

        `BRANCH: begin
            operation   = `ADDITION;
            alu_d1_mux      = 1'b1;
            alu_d0_mux      = 1'b1;
            case(instr[14:12])
                3'b000: // BEQ
                    branch_taken = (rs1 == rs2) ? 1'b1 : 1'b0;
                3'b001: // BNE
                    branch_taken = (rs1 != rs2) ? 1'b1 : 1'b0;
                3'b100: // BLT
                    branch_taken = (rs1 < rs2) ? 1'b1 : 1'b0;
                3'b101: // BGE
                    branch_taken = (rs1 >= rs2) ? 1'b1 : 1'b0;
                3'b110: // TODO: BLTU
                    branch_taken = (rs1 < rs2) ? 1'b1 : 1'b0;
                3'b111: // TODO: BGEU
                    branch_taken = (rs1 >= rs2) ? 1'b1 : 1'b0;
                default: begin
                end
            endcase
        end

        `JAL, `AUIPC: begin
            operation   = `ADDITION;
            branch_taken    = 1'b1;
            alu_d1_mux      = 1'b1;
            alu_d0_mux      = 1'b1;
        end

        `JALR: begin
            operation   = `ADDITION;
            branch_taken    = 1'b1;
            alu_d1_mux      = 1'b1;
        end

        /* verilator lint_off CASEOVERLAP */
        `FENCE, `ECALL, `EBREAK: begin
            // As of now, just NOPs
            operation = `ADDITION;
        end
        /* verilator lint_on CASEOVERLAP */
        

        default: begin
        end
    endcase
end

logic oflow;

alu #(
    .BITSIZE    ( 32        )
) alu_i (
    .A_i        ( ALU_d0    ),
    .B_i        ( ALU_d1    ),
    .operation_i( operation ),
    .R_o        ( result    ),
    .overflow_o ( oflow)
);

endmodule