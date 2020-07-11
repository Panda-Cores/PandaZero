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
// Module name: decoder
// 
// Functionality: Instruction decoder. Provides register pointers
//                and immediate values.
//
// ------------------------------------------------------------

`include "instructions.sv"

module decoder
(
    input [31:0]    instr,
    output [4:0]    rs1,
    output [4:0]    rs2,
    output [31:0]   imm
);

// Decode the register pointers and immediate values
always_comb
begin
    rs1 = 'b0;
    rs2 = 'b0;
    rd  = 'b0;
    imm = 'b0;
    case(instr[6:0])
        `LUI: begin
            imm = {instr[31:12], 12'b0};
            rd  = instr[11 : 7];
        end
        
        `IMM_REG_ALU: begin
            rs1 = instr[19:15];
            rd  = instr[11 : 7];
            imm = {20{instr[31]}, instr[31:20]};
        end

        `REG_REG_ALU: begin
            rs1    = instr[19:15];
            rs2    = instr[24:20];   
            rd  = instr[11 : 7];                 
        end

        `LOAD: begin
            rs1    = instr[19:15];
            rd  = instr[11 : 7];
            imm = {20{instr[31]}, instr[31:20]};
        end

        `STORE: begin
            rs1 = instr[19:15];
            rs2 = instr[24:20];
            imm = {20{instr[31]}, instr[31:25], instr[11:7]};
        end

        `BRANCH: begin
            rs1 = instr[19:15];
            rs2 = instr[24:20];
            imm = {19{instr[31]}, instr[31], instr[7], instr[30 : 25], instr[11:8], 1'b0};
        end

        `JALR: begin
            rs1 = instr[19:15];
            rd  = instr[11 : 7];
            imm = {20{instr[31]}, instr[31:21], 1'b0};
        end

        `JAL: begin
            rd  = instr[11 : 7];
            imm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
        end

        `AUIPC: begin
            imm = {instr[31:12], 12'b0};
        end

        default: begin
        end
    endcase
end
endmodule