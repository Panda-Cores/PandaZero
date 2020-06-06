	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          ID
	// 
	// Functionality:   Decodes the instruction
	// 
	// -------------(c) Luca Hanel-------------
	
	`include "instructions.sv"
	`include "operations.sv"
	
	module ID
	#(
	    parameter BITSIZE
	)(
 000202	    input                                       clk,
%000002	    input                                       resetn_i,
	    //IF-ID
 000062	    input                                       IF_ID_give_i,
 000063	    output                                      ID_IF_get_o,
 000517	    input [31 : 0]                              IF_ID_instr_i,
	    //ID-EX
 000063	    input                                       EX_ID_get_i,
 000062	    output                                      ID_EX_give_o,
 000517	    output [31 : 0]                             ID_EX_instruction_o,
 000056	    output [BITSIZE - 1 : 0]                    ID_EX_rs1_o,
 000030	    output [BITSIZE - 1 : 0]                    ID_EX_rs2_o,
	    //ID-REG
 000060	    output [4 : 0]                              ID_REG_rs1_o,
%000000	    output [4 : 0]                              ID_REG_rs2_o,
 000056	    input [BITSIZE - 1 : 0]                     REG_ID_rs1_d_i,
%000000	    input [BITSIZE - 1 : 0]                     REG_ID_rs2_d_i,
%000001	    input                                       ID_REG_access_i
	);
	
	enum {GET_INSTR, DECODE_INSTR} CS, NS;
	
 000517	logic [31 : 0]                                  ID_instruction;
	
 000056	logic [BITSIZE - 1 : 0]                         ID_EX_rs1_d;
 000030	logic [BITSIZE - 1 : 0]                         ID_EX_rs2_d;
 000510	logic [BITSIZE - 1 : 0]                         immediate;
	
%000000	logic [4 : 0]                                   rs1;
%000000	logic [4 : 0]                                   rs2;
	
 000030	logic                                           rs2_mux;
	
	
	always_ff@(posedge clk)
	begin
%000006	    if(!resetn_i)
	    begin
	       CS <= GET_INSTR; 
	    end
	    else
 000095	    begin
	        CS <= NS;
	    end
	end
	
	// Provide registers/immediate to EX
	assign ID_EX_rs1_d = REG_ID_rs1_d_i;
	assign ID_EX_rs2_d = (rs2_mux) ? immediate : REG_ID_rs2_d_i;
	
	always_comb
	begin
	    ID_IF_get_o     = 1'b0;
	    ID_EX_give_o    = 1'b0;
	    rs2_mux         = 1'b0;
	    ID_REG_rs1_o    = 'b0;
	    ID_REG_rs2_o    = 'b0;
	
	    case(CS)
 000071	        GET_INSTR: begin
	            ID_IF_get_o = 1'b1;
 000031	            if(IF_ID_give_i)
	            begin
	                ID_instruction = IF_ID_instr_i;
	                NS = DECODE_INSTR;
	            end
	        end
	
 000031	        DECODE_INSTR: begin
	            // Decode
	            case(ID_instruction[6:0])
 000016	                `LUI: begin
	                    immediate   = {ID_instruction[31:12], 12'b0};
	                end
	                
 000015	                `IMM_REG_ALU: begin
	                    ID_REG_rs1_o= ID_instruction[19:15];
	                    immediate   = {20'b0, ID_instruction[31:20]};
	                    rs2_mux     = 1'b1;                    
	                end
	
%000000	                `REG_REG_ALU: begin
	                    ID_REG_rs1_o= ID_instruction[19:15];
	                    ID_REG_rs2_o= ID_instruction[24:20];                    
	                end
%000000	                default: begin
	                end
	            endcase
	
	            // Provide next stage with instructions
 000031	            if(EX_ID_get_i && ID_REG_access_i)
	            begin
	                // ID_rd_last          = ID_EX_rd;
	                ID_EX_give_o        = 1'b1;
	                ID_EX_instruction_o = ID_instruction;
	                ID_EX_rs1_o         = ID_EX_rs1_d;
	                ID_EX_rs2_o         = ID_EX_rs2_d;
	                NS                  = GET_INSTR;
	            end
	        end
%000000	        default: begin
	        end
	    endcase
	end
	endmodule
