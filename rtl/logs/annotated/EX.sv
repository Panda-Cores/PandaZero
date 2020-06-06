	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          execute
	// 
	// Functionality:   Pipeline Stage execute
	// 
	// -------------(c) Luca Hanel-------------
	
	`include "instructions.sv"
	`include "alu_operations.sv"
	
	module EX
	#(
	    parameter BITSIZE
	)(
 000202	    input                                       clk,
%000002	    input                                       resetn_i,    
	    //ID-EX
 000062	    input                                       ID_EX_give_i,
 000063	    output                                      EX_ID_get_o,
 000517	    input [31 : 0]                              ID_EX_instruction_i,
 000056	    input [BITSIZE - 1 : 0]                     ID_EX_rs1_i,
 000030	    input [BITSIZE - 1 : 0]                     ID_EX_rs2_i,
	    //EX-WB
 000062	    input                                       WB_EX_get_i,
 000062	    output                                      EX_WB_give_o,
 000517	    output [31 : 0]                             EX_WB_instruction_o,
 000064	    output [BITSIZE - 1 : 0]                    EX_WB_d_o
	);
	
	enum {GET_INSTR, EXECUTE_INSTR} CS, NS;
	
 000517	logic [31 : 0]                                  EX_instruction;
	
 000056	logic [BITSIZE - 1 : 0]                         EX_d0;
 000030	logic [BITSIZE - 1 : 0]                         EX_d1;
	
%000000	logic [3 : 0]                                   alu_operation;
 000064	logic [BITSIZE - 1 : 0]                         alu_result;
%000000	logic                                           alu_overflow;
	
 000064	logic [BITSIZE - 1 : 0]                         EX_result;
 000064	logic [BITSIZE - 1 : 0]                         WB_d;
	
	assign WB_d = EX_result;
	
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
	
	always_comb
	begin
	    EX_ID_get_o     = 1'b0;
	    EX_WB_give_o    = 1'b0;
	
	    case(CS)
 000071	        GET_INSTR: begin
	            EX_ID_get_o = 1'b1;
 000031	            if(ID_EX_give_i)
	            begin
	                EX_instruction  = ID_EX_instruction_i;
	                NS              = EXECUTE_INSTR;
	                EX_d0           = ID_EX_rs1_i;
	                EX_d1           = ID_EX_rs2_i;
	            end
	        end
	
 000031	        EXECUTE_INSTR: begin
	            case(EX_instruction[6:0])
 000032	                `LUI: begin
	                    alu_operation = `ADDITION;
	                    EX_result = alu_result;
	                end
	
 000030	                `IMM_REG_ALU: begin
%000000	                    if(EX_instruction[14:12] == 3'b101)
	                        alu_operation = {EX_instruction[30], EX_instruction[14:12]};
	                    else
 000030	                        alu_operation = {1'b0, EX_instruction[14:12]};
	                    EX_result = alu_result;
	                end
	
%000000	                `REG_REG_ALU: begin
	                    alu_operation = {EX_instruction[30], EX_instruction[14:12]};
	                end
%000000	                default: begin
	                end
	            endcase
	            // Replace with MEM
 000031	            if(WB_EX_get_i)
	            begin
	                EX_WB_give_o        = 1'b1;
	                EX_WB_instruction_o = EX_instruction;
	                EX_WB_d_o           = WB_d;
	                NS                  = GET_INSTR;
	            end
	        end
	
%000000	        default: begin
	        end
	    endcase
	end
	
	
	alu #(
	    .BITSIZE    (   BITSIZE         )
	) alu_i (
	    .A_i        (   EX_d0           ),
	    .B_i        (   EX_d1           ),
	    .operation_i(   alu_operation   ),
	    .R_o        (   alu_result      ),
	    .overflow_o (   alu_overflow    )
	);
	
	endmodule
