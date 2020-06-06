	// verilator_coverage annotation
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
 000056	    input   [BITSIZE - 1 : 0]       A_i,
 000030	    input   [BITSIZE - 1 : 0]       B_i,
%000000	    input   [3 : 0]                 operation_i,
 000064	    output  [BITSIZE - 1 : 0]       R_o,
%000000	    output                          overflow_o
	);
	/* verilator lint_off UNOPTFLAT */
 000064	    logic [BITSIZE - 1 : 0]         result;
	/* verilator lint_on UNOPTFLAT */
%000000	    logic                           overflow;
	
	    assign R_o = result[BITSIZE - 1 : 0];
	    assign overflow_o = overflow;
	
	    always_comb
	    case(operation_i)
 000235	        `ADDITION :
	            {overflow, result} = A_i + B_i;
%000000	        `SUBTRACTION :
	            {overflow, result} = A_i - B_i;
%000000	        `SHIFT_LEFT :
	            result = A_i << 1;
%000000	        `SHIFT_RIGHT :
	            result = A_i >> 1;
	        // `ROTATE_LEFT:
	        //     result = {A_i[BITSIZE - 2: 0], A_i[BITSIZE - 1]};
	        // `ROTATE_RIGHT:
	        //     result = {A_i[0], A_i[BITSIZE - 1 : 1]};
%000000	        `AND :
	            result = A_i & B_i;
%000000	        `OR :
	            result = A_i | B_i;
%000000	        `XOR :
	            result = A_i ^ B_i;
%000000	        `LT :
	            result = (A_i < B_i)?'d1:'d0;
%000000	        default :
	            result = 'b0;
	    endcase;
	endmodule
