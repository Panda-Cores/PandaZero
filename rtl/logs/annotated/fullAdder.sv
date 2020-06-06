	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          FullAdder
	// 
	// Functionality:   Basic FullAdder
	// 
	// -------------(c) Luca Hanel-------------
	
	module fullAdder(
 000199	    input           a,
%000000	    input           b,
%000000	    input           carry_i,
%000000	    output          carry_o,
 000199	    output          r
	);
	    assign r = a ^ b ^ carry_i;
	    assign carry_o = ((a ^ b) & carry_i) | (a & b);
	endmodule
	
	
