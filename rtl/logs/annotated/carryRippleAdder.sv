	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          Adder
	// 
	// Functionality:   Basic CarryRippleAdder
	// 
	// -------------(c) Luca Hanel-------------
	
	module carryRippleAdder
	#(
	    parameter BITSIZE = 64
	)(
 000158	    input   [BITSIZE - 1 : 0]   A_i,
 003138	    input   [BITSIZE - 1 : 0]   B_i,
%000001	    input                       carry_i,
 009028	    output  [BITSIZE - 1: 0]    R_o,
 000085	    output                      overflow_o
	);
	/* verilator lint_off UNOPTFLAT */
 005819	    logic [BITSIZE : 0]         carry;
	/* verilator lint_on UNOPTFLAT */
 009028	    logic [BITSIZE - 1 : 0]     result;
	
	    assign carry[0] = carry_i;
	    assign R_o = result;
	    assign overflow_o = carry[BITSIZE];
	
	    genvar i;
	    generate
	        for(i = 0; i < BITSIZE; i = i + 1) begin
	            fullAdder fullAdder_i
	                (
	                    .a      (   A_i[i]          ),
	                    .b      (   B_i[i]          ),
	                    .r      (   result[i]       ),
	                    .carry_i(   carry[i]        ),
	                    .carry_o(   carry[i + 1]    )
	                );
	        end
	    endgenerate
	
	endmodule
