	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          writeBack
	// 
	// Functionality:   Pipeline Stage WriteBack
	// 
	// -------------(c) Luca Hanel-------------
	
	`include "instructions.sv"
	
	module WB
	#(
	    BITSIZE
	)(
 000202	    input                       clk,
%000002	    input                       resetn_i,
	    //EX-WB
 000062	    output                      WB_EX_get_o,
 000062	    input                       EX_WB_give_i,
 000517	    input [31 : 0]              EX_WB_instruction_i,
 000064	    input [BITSIZE - 1 : 0]     EX_WB_d_i,
	    //WB-REG
 000062	    output [4:0]                WB_REG_rd_o,
 000064	    output [BITSIZE - 1 : 0]    WB_REG_d_o,
%000000	    output                      WB_REG_access_o
	);
	
	enum {GET_INSTR, WB_INSTR} CS, NS;
	
 000517	logic [31 : 0]                                  WB_instruction;
	
 000064	logic [BITSIZE - 1 : 0]                         WB_d;
	
	assign WB_REG_access_o = 'b0;
	
	always_ff@(posedge clk)
	begin
%000006	    if(!resetn_i)
	    begin
	       CS <= GET_INSTR; 
	    end
	    begin
	        CS <= NS;
	    end
	end
	
	always_comb
	begin
	    WB_EX_get_o     = 1'b0;
	    WB_REG_access_o = 1'b1;
	    case(CS)
 000071	        GET_INSTR: begin
	            WB_EX_get_o = 1'b1;
 000031	            if(EX_WB_give_i)
	            begin
	                WB_instruction  = EX_WB_instruction_i;
	                WB_d            = EX_WB_d_i;
	                NS              = WB_INSTR;
	            end
	        end
	
 000031	        WB_INSTR: begin
	            case(WB_instruction[6:0])
 000062	                `LUI, `IMM_REG_ALU, `REG_REG_ALU:
	                    WB_REG_rd_o = WB_instruction[11 : 7];
%000000	                default:
	                    WB_REG_rd_o = 'b0;
	            endcase
	            WB_REG_d_o = WB_d;
	            NS = GET_INSTR;
	        end
	
%000000	        default: begin
	        end
	    endcase
	    
	end
	endmodule
