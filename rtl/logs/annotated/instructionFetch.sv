	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          ALU
	// 
	// Functionality:   ALU
	// 
	// -------------(c) Luca Hanel-------------
	
	module instructionFetch
	#(
	    parameter BITSIZE = 32
	)(
 000202	    input                       clk,
%000002	    input                       resetn_i,
 000052	    input                       fetch_next_i,
%000000	    input [BITSIZE - 1 : 0]     ADDR_i,
%000022	    output [32 - 1 : 0]         instruction_o,
%000005	    output                      fetch_valid_o
	);
%000022	    logic [32 - 1 : 0]          instruction;
%000005	    logic                       valid;
%000001	    logic                       fetched;
%000001	    logic [2:0]                 i = 3'b0;
%000006	    logic [1:0]                 j = 2'b0;
%000122	    logic [31:0]                instructions [8];
	
	    assign instructions[0] = 32'b01111100011111111110001010110111; //LUI 
	    assign instructions[1] = 32'b00000000000100011000000110010011; //ADDI
	    assign instructions[2] = 32'b11111100011111111110001010110111; //LUI 
	    assign instructions[3] = 32'b00000000000100011000000110010011; //ADDI
	    assign instructions[4] = 32'b01111100011111111110001010110111; //LUI
	    assign instructions[5] = 32'b00000000000100011000000110010011; //ADDI
	    assign instructions[6] = 32'b11111100011111111110001010110111; //LUI
	    assign instructions[7] = 32'b00000000000100011000000110010011; //ADDI
	
	    assign instruction_o = instruction;
	    assign fetch_valid_o = valid;
	
	    always_ff@(posedge clk)
	    begin
%000004	        if(!fetched && fetch_next_i)
	        begin
	            // Fetch next
%000003	            if(j < 3)
	                j <= j + 1'b1;
	            else
%000001	            begin
	                fetched <= 1'b1;
	                i <= i + 1'b1;
	                j <= 2'b0;
	            end
	        end        
	    end
	
	    always_comb
	    begin
	        valid = 1'b0;
%000004	        if(!fetched && fetch_next_i)
	        begin
	            instruction = instructions[i];
	            valid = 1'b1;
	        end
	
 000095	        if(fetched)
	            valid = 1'b1;
	    end
	
	endmodule
