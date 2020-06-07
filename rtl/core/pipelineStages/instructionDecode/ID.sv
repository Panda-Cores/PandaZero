// ---------------RISCV-Luca---------------
// 
// Module:          ID
// 
// Functionality:   Decodes the instruction
// 
// -------------(c) Luca Hanel-------------

`include "instructions.sv"

module ID
#(
    parameter BITSIZE
)(
    input                                       clk,
    input                                       resetn_i,
    output                                      inv_instr_o,
    //IF-ID
    input                                       IF_ID_give_i,
    output                                      ID_IF_get_o,
    input [31 : 0]                              IF_ID_instr_i,
    //ID-EX
    input                                       EX_ID_get_i,
    output                                      ID_EX_give_o,
    output [31 : 0]                             ID_EX_instruction_o,
    output [BITSIZE - 1 : 0]                    ID_EX_rs1_o,
    output [BITSIZE - 1 : 0]                    ID_EX_rs2_o,
    output [BITSIZE - 1 : 0]                    ID_EX_imm_o,
    //ID-REG
    output [4 : 0]                              ID_REG_rs1_o,
    output [4 : 0]                              ID_REG_rs2_o,
    input [BITSIZE - 1 : 0]                     REG_ID_rs1_d_i,
    input [BITSIZE - 1 : 0]                     REG_ID_rs2_d_i,
    input                                       ID_REG_access_i
);

enum {GET_INSTR, DECODE_INSTR} CS, NS;

logic [31 : 0]                                  ID_instruction;

logic [BITSIZE - 1 : 0]                         ID_EX_rs1_d;
logic [BITSIZE - 1 : 0]                         ID_EX_rs2_d;
logic [BITSIZE - 1 : 0]                         immediate;

logic [4 : 0]                                   rs1;
logic [4 : 0]                                   rs2;

logic                                           imm_extend;
logic                                           inv_instr;


always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
        CS <= GET_INSTR;
    end
    else
    begin
        CS <= NS;
    end
end

//Invalid instruction
assign inv_instr_o = inv_instr;

// Provide registers/immediate to EX
assign ID_EX_rs1_d = REG_ID_rs1_d_i;
assign ID_EX_rs2_d = REG_ID_rs2_d_i;
assign ID_EX_imm_o = immediate;

always_comb
begin
    if(imm_extend)
        immediate[31:12] = (ID_instruction[31]) ? 20'b1 : 20'b0;
end

always_comb
begin
    ID_IF_get_o     = 1'b0;
    ID_EX_give_o    = 1'b0;
    ID_REG_rs1_o    = 'b0;
    ID_REG_rs2_o    = 'b0;
    imm_extend      = 1'b0;
    if(resetn_i)
        inv_instr   = 1'b0;

    case(CS)
        GET_INSTR: begin
            ID_IF_get_o = 1'b1;
            if(IF_ID_give_i)
            begin
                ID_instruction = IF_ID_instr_i;
                NS = DECODE_INSTR;
            end
        end

        DECODE_INSTR: begin
            // Decode
            case(ID_instruction[6:0])
                `LUI: begin
                    immediate   = {ID_instruction[31:12], 12'b0};
                end
                
                `IMM_REG_ALU: begin
                    ID_REG_rs1_o    = ID_instruction[19:15];
                    immediate[11:0] = ID_instruction[31:20];
                    imm_extend      = 1'b1;
                end

                `REG_REG_ALU: begin
                    ID_REG_rs1_o= ID_instruction[19:15];
                    ID_REG_rs2_o= ID_instruction[24:20];                    
                end

                `LOAD: begin
                    ID_REG_rs1_o    = ID_instruction[19:15];
                    immediate[11:0] = ID_instruction[31:20];
                    imm_extend      = 1'b1;
                end

                `STORE: begin
                    ID_REG_rs1_o    = ID_instruction[19:15];
                    ID_REG_rs2_o    = ID_instruction[24:20];
                    immediate[11:0] = {ID_instruction[31:25], ID_instruction[11:7]};
                    imm_extend      = 1'b1;
                end

                default: begin
                    inv_instr = 1'b1;
                end
            endcase

            // Provide next stage with instructions
            if(EX_ID_get_i && ID_REG_access_i)
            begin
                // ID_rd_last          = ID_EX_rd;
                ID_EX_give_o        = 1'b1;
                ID_EX_instruction_o = ID_instruction;
                ID_EX_rs1_o         = ID_EX_rs1_d;
                ID_EX_rs2_o         = ID_EX_rs2_d;
                NS                  = GET_INSTR;
            end
        end
        default: begin
        end
    endcase
end
endmodule