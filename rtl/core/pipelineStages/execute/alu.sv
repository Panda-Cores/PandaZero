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
// Module name: alu
// 
// Functionality: ALU for integer operations
//
// ------------------------------------------------------------

`include "alu_operations.sv"

module alu
#(
    parameter BITSIZE
)(
    input logic  [31:0] A_i,
    input logic  [31:0] B_i,
    input logic  [3:0]  operation_i,
    output logic [31:0] R_o,
    output logic        overflow_o
);
/* verilator lint_off UNOPTFLAT */
    logic [31:0]         result;
/* verilator lint_on UNOPTFLAT */
    logic                           overflow;

    assign R_o = result[31:0];
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