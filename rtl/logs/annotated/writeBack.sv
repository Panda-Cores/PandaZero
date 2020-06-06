	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          writeBack
	// 
	// Functionality:   Pipeline Stage WriteBack
	// 
	// -------------(c) Luca Hanel-------------
	
	module writeBack
	#(
	    BITSIZE
	)(
 000202	    input                       clk,
%000000	    input [BITSIZE - 1 : 0]     data_i,
%000006	    input [4 : 0]               rd_i,
%000003	    input                       ex_valid_i,
%000006	    output [4 : 0]              rd_o,
%000000	    output [BITSIZE - 1 : 0]    rd_data_o,
 000100	    output                      register_access_o,
 000099	    output                      ex_next_o
	);
	    
 000100	    logic                       register_access;
 000099	    logic                       execute_next;
 000100	    logic                       written_back;
%000006	    logic [4 : 0]               rd;
%000000	    logic [BITSIZE - 1 : 0]     rd_data;
%000006	    logic [4 : 0]               rd_t;
%000000	    logic [BITSIZE - 1 : 0]     rd_data_t;
	
	    assign register_access_o = register_access;
	    assign rd_o = rd;
	    assign rd_data_o = rd_data;
	    assign ex_next_o = execute_next;
	
	    always_ff@(posedge clk)
	    begin
	        execute_next <= 1'b0;
	        
 000050	        if(written_back == 1'b0)
	            written_back <= 1'b1;
	
%000001	        if(!ex_valid_i)
	            execute_next <= 1'b1;
	
 000051	        if(written_back == 1'b1)
	        begin
 000050	            if(ex_valid_i == 1'b1)
	            begin
	                execute_next <= 1'b1;
	                rd_t <= rd_i;
	                rd_data_t <= data_i;
	                written_back <= 1'b0;
	            end
	        end
	        
	    end
	
	    always_comb
	    begin
	        register_access = 1'b1;
 000051	        if(written_back == 1'b0)
	        begin
	            register_access = 1'b0;
	            rd = rd_t;
	            rd_data = rd_data_t;
	        end
	    end
	
	endmodule
