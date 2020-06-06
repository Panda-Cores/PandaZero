	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          execute
	// 
	// Functionality:   Pipeline Stage execute
	// 
	// -------------(c) Luca Hanel-------------
	
	module execute
	#(
	    parameter BITSIZE
	)(
 000202	    input                       clk,
%000000	    input [BITSIZE - 1 : 0]     data0_i,
 000750	    input [BITSIZE - 1 : 0]     data1_i,
 000100	    input [4 : 0]               rd_i,
%000000	    input [6 : 0]               operation_i,
%000000	    output [BITSIZE - 1 : 0]    data_o,
%000006	    output [4 : 0]              rd_o,
%000003	    output                      ex_valid_o,
%000000	    output [3 : 0]              flags_o,
 000099	    input                       ex_next_i,
 000051	    input                       valid_ID_i,
 000051	    output                      ID_next_o,
%000001	    input                       ex_feedback_rs1_i,
%000001	    input                       ex_feedback_rs2_i
	);
	
%000000	    logic [BITSIZE - 1 : 0]     data0;
%000000	    logic [BITSIZE - 1 : 0]     data1;
%000000	    logic [BITSIZE - 1 : 0]     result;
%000000	    logic [BITSIZE - 1 : 0]     alu_result;
%000000	    logic [BITSIZE - 1 : 0]     last_alu_result;
%000003	    logic                       ex_valid;
%000000	    logic [3 : 0]               flags;
%000006	    logic [4 : 0]               rd;
%000000	    logic                       alu_overflow;
 000051	    logic                       ID_next;
 000054	    logic                       executed = 1'b1;
%000000	    logic [6 : 0]               operation;
	
	    assign data_o = result;
	    assign flags_o = flags;
	    assign ex_valid_o = ex_valid;
	    assign rd_o = rd;
	    assign ID_next_o = ID_next;
	
	    // Controller
	    always_ff@(posedge clk)
	    begin
	        ID_next <= 1'b0;
	        last_alu_result <= alu_result;
	        
 000027	        if(executed == 1'b0)
	        begin
 000026	            if(ex_next_i)
	                executed <= 1'b1;
	        end
	        
 000049	        if(!valid_ID_i)
	            ID_next <= 1'b1;
	
 000074	        if (executed == 1'b1)
	        begin
 000027	            if(valid_ID_i == 1'b1)
	            begin
	                ID_next <= 1'b1;
	                operation <= operation_i;
	
	                data0 <= (ex_feedback_rs1_i)?last_alu_result:data0_i;
	                data1 <= (ex_feedback_rs2_i)?last_alu_result:data1_i;
	                rd <= rd_i;
	                executed <= 1'b0;
	            end
	        end
	    end
	
	    always_comb
	    begin
	        ex_valid = 1'b0;
	        flags = 'b0;
	
 000074	        if(executed)
	            ex_valid = 1'b1;
	
 000027	        if(ex_next_i && executed == 1'b0)
	        begin
	            case (operation[6:4])
 000027	                `ALU: begin
	                    result = alu_result;
	                    flags[0] = alu_overflow;
	                    ex_valid = 1'b1;
	                end
%000000	                default: begin
	                end
	            endcase
	        end
	    end
	
	    always_comb
	    begin
	        
	    end
	
	    alu #(
	        .BITSIZE    (   BITSIZE )
	    ) alu_i (
	        .A_i        (   data0           ),
	        .B_i        (   data1           ),
	        .operation_i(   operation[3:0]  ),
	        .R_o        (   alu_result      ),
	        .overflow_o (   alu_overflow    )
	    );
	
	endmodule
