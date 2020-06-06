	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          RegsiterFile
	// 
	// Functionality:   register file
	// 
	// -------------(c) Luca Hanel-------------
	
	module registerFile
	#(
	    parameter BITSIZE = 32
	)(
 000062	    input [4 : 0]     rd,
 000060	    input [4 : 0]     rs1,
%000000	    input [4 : 0]     rs2,
 000064	    input [BITSIZE - 1 : 0]                     data_rd_i,
 000056	    output [BITSIZE - 1 : 0]                    data_rs1_o,
%000000	    output [BITSIZE - 1 : 0]                    data_rs2_o
	);
	
	logic [BITSIZE - 1 : 0] registers [32];
	
	assign registers['b0] = 'b0;
	
	always_comb
	begin
 000212	    if(rd != 'h1f && rd != 'b0)
	        registers[rd] = data_rd_i;
	
 000102	    if(rs1 != 'h1f)
	        data_rs1_o = registers[rs1];
	    else
%000000	        data_rs1_o = 'b0;
	    
 000102	    if(rs2 != 'h1f)
	        data_rs2_o = registers[rs2];
	    else
%000000	        data_rs2_o = 'b0;
	end
	
	endmodule
