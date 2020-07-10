// ---------------RISCV-Luca---------------
// 
// Module:          ALU
// 
// Functionality:   ALU
// 
// -------------(c) Luca Hanel-------------

`include "alu_operations.sv"

module alu
#(
    parameter BITSIZE
)(
    input   [BITSIZE - 1 : 0]       A_i,
    input   [BITSIZE - 1 : 0]       B_i,
    input   [3 : 0]                 operation_i,
    output  [BITSIZE - 1 : 0]       R_o,
    output                          overflow_o
);
/* verilator lint_off UNOPTFLAT */
    logic [BITSIZE - 1 : 0]         result;
/* verilator lint_on UNOPTFLAT */
    logic                           overflow;

    assign R_o = result[BITSIZE - 1 : 0];
    assign overflow_o = overflow;

    

    always_comb
    case(operation_i)
        `ADDITION :
            {overflow, result} = $signed(A_i) + $signed(B_i);
        `SUBTRACTION :
            {overflow, result} = A_i - B_i;
        `SHIFT_LEFT :
            result = A_i << B_i;
        `LSHIFT_RIGHT :
            result = A_i >> B_i;
        `ASHIFT_RIGHT :
            result = $signed(A_i) >>> B_i;
        `AND :
            result = A_i & B_i;
        `OR :
            result = A_i | B_i;
        `XOR :
            result = A_i ^ B_i;
        `SLT, `SLTU :
            result = (A_i < B_i) ? 'b1 : 'b0;
        default :
            result = 'b0;
    endcase;
endmodule