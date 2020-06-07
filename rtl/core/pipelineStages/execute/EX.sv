// ---------------RISCV-Luca---------------
// 
// Module:          execute
// 
// Functionality:   Pipeline Stage execute
// 
// -------------(c) Luca Hanel-------------

`include "instructions.sv"
`include "alu_operations.sv"

module EX
#(
    parameter BITSIZE
)(
    input                                       clk,
    input                                       resetn_i,    
    //ID-EX
    input                                       ID_EX_give_i,
    output                                      EX_ID_get_o,
    input [31 : 0]                              ID_EX_instruction_i,
    input [BITSIZE - 1 : 0]                     ID_EX_rs1_i,
    input [BITSIZE - 1 : 0]                     ID_EX_rs2_i,
    input [BITSIZE - 1 : 0]                     ID_EX_imm_i,
    //EX-MEM
    input                                       MEM_EX_get_i,
    output                                      EX_MEM_give_o,
    output [31 : 0]                             EX_MEM_instruction_o,
    output [BITSIZE - 1 : 0]                    EX_MEM_result_o,
    output [BITSIZE - 1 : 0]                    EX_MEM_rs2_o
);

enum {GET_INSTR, EXECUTE_INSTR} CS, NS;

logic [31 : 0]                                  EX_instruction;

logic [BITSIZE - 1 : 0]                         EX_d0;
logic [BITSIZE - 1 : 0]                         EX_d1;
logic [BITSIZE - 1 : 0]                         EX_imm;

logic [BITSIZE - 1 : 0]                         ALU_d0;
logic [BITSIZE - 1 : 0]                         ALU_d1;

logic [3 : 0]                                   alu_operation;
logic [BITSIZE - 1 : 0]                         alu_result;
logic                                           alu_overflow;
logic                                           alu_d1_mux;

logic [BITSIZE - 1 : 0]                         EX_result;

assign ALU_d0 = EX_d0;
assign ALU_d1 = (alu_d1_mux) ? EX_imm : EX_d1;

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

always_comb
begin
    EX_ID_get_o     = 1'b0;
    EX_MEM_give_o    = 1'b0;
    alu_d1_mux      = 1'b0;

    case(CS)
        GET_INSTR: begin
            EX_ID_get_o = 1'b1;
            if(ID_EX_give_i)
            begin
                EX_instruction  = ID_EX_instruction_i;
                NS              = EXECUTE_INSTR;
                EX_d0           = ID_EX_rs1_i;
                EX_d1           = ID_EX_rs2_i;
                EX_imm          = ID_EX_imm_i;
            end
        end

        EXECUTE_INSTR: begin
            case(EX_instruction[6:0])
                `LUI: begin
                    alu_operation   = `ADDITION;
                    EX_result       = alu_result;
                    alu_d1_mux      = 1'b1;
                end

                `IMM_REG_ALU: begin
                    if(EX_instruction[14:12] == 3'b101)
                        alu_operation = {EX_instruction[30], EX_instruction[14:12]};
                    else
                        alu_operation = {1'b0, EX_instruction[14:12]};
                    EX_result       = alu_result;
                    alu_d1_mux      = 1'b1;
                end

                `REG_REG_ALU: begin
                    alu_operation = {EX_instruction[30], EX_instruction[14:12]};
                    EX_result       = alu_result;
                end

                `LOAD: begin
                    alu_operation   = `ADDITION;
                    alu_d1_mux      = 1'b1;
                    EX_result       = alu_result;
                end

                `STORE: begin
                    alu_operation   = `ADDITION;
                    alu_d1_mux      = 1'b1;
                    EX_result       = alu_result;
                end
                default: begin
                end
            endcase
            // Replace with MEM
            if(MEM_EX_get_i)
            begin
                EX_MEM_give_o        = 1'b1;
                EX_MEM_instruction_o = EX_instruction;
                EX_MEM_result_o      = EX_result;
                EX_MEM_rs2_o         = EX_d1;
                NS                   = GET_INSTR;
            end
        end

        default: begin
        end
    endcase
end


alu #(
    .BITSIZE    (   BITSIZE         )
) alu_i (
    .A_i        (   ALU_d0          ),
    .B_i        (   ALU_d1          ),
    .operation_i(   alu_operation   ),
    .R_o        (   alu_result      ),
    .overflow_o (   alu_overflow    )
);

endmodule