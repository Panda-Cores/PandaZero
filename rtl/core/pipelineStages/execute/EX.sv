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
    //EX-WB
    input                                       WB_EX_get_i,
    output                                      EX_WB_give_o,
    output [31 : 0]                             EX_WB_instruction_o,
    output [BITSIZE - 1 : 0]                    EX_WB_d_o
);

enum {GET_INSTR, EXECUTE_INSTR} CS, NS;

logic [31 : 0]                                  EX_instruction;

logic [BITSIZE - 1 : 0]                         EX_d0;
logic [BITSIZE - 1 : 0]                         EX_d1;

logic [3 : 0]                                   alu_operation;
logic [BITSIZE - 1 : 0]                         alu_result;
logic                                           alu_overflow;

logic [BITSIZE - 1 : 0]                         EX_result;
logic [BITSIZE - 1 : 0]                         WB_d;

assign WB_d = EX_result;

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
    EX_WB_give_o    = 1'b0;

    case(CS)
        GET_INSTR: begin
            EX_ID_get_o = 1'b1;
            if(ID_EX_give_i)
            begin
                EX_instruction  = ID_EX_instruction_i;
                NS              = EXECUTE_INSTR;
                EX_d0           = ID_EX_rs1_i;
                EX_d1           = ID_EX_rs2_i;
            end
        end

        EXECUTE_INSTR: begin
            case(EX_instruction[6:0])
                `LUI: begin
                    alu_operation = `ADDITION;
                    EX_result = alu_result;
                end

                `IMM_REG_ALU: begin
                    if(EX_instruction[14:12] == 3'b101)
                        alu_operation = {EX_instruction[30], EX_instruction[14:12]};
                    else
                        alu_operation = {1'b0, EX_instruction[14:12]};
                    EX_result = alu_result;
                end

                `REG_REG_ALU: begin
                    alu_operation = {EX_instruction[30], EX_instruction[14:12]};
                end
                default: begin
                end
            endcase
            // Replace with MEM
            if(WB_EX_get_i)
            begin
                EX_WB_give_o        = 1'b1;
                EX_WB_instruction_o = EX_instruction;
                EX_WB_d_o           = WB_d;
                NS                  = GET_INSTR;
            end
        end

        default: begin
        end
    endcase
end


alu #(
    .BITSIZE    (   BITSIZE         )
) alu_i (
    .A_i        (   EX_d0           ),
    .B_i        (   EX_d1           ),
    .operation_i(   alu_operation   ),
    .R_o        (   alu_result      ),
    .overflow_o (   alu_overflow    )
);

endmodule