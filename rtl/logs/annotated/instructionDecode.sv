	// verilator_coverage annotation
	// ---------------RISCV-Luca---------------
	// 
	// Module:          InstructionDecode
	// 
	// Functionality:   Decodes the instruction
	// 
	// -------------(c) Luca Hanel-------------
	
	`include "instructions.sv"
	`include "operations.sv"
	`include "alu_operations.sv"
	
	module instructionDecode
	#(
	    parameter BITSIZE
	)(
 000202	    input                                       clk,
%000002	    input                                       resetn_i,
%000022	    input [32 - 1 : 0]                          instruction_i,
%000000	    output [4  : 0]                             rs1_o,
%000000	    output [4  : 0]                             rs2_o,
%000000	    input [BITSIZE - 1 : 0]                     data_rs1_i,
%000000	    input [BITSIZE - 1 : 0]                     data_rs2_i,
%000000	    output [BITSIZE - 1 : 0]                    ex_data0_o,
 000750	    output [BITSIZE - 1 : 0]                    ex_data1_o,
%000000	    output [6 : 0]                              ex_operation_o,
 000051	    output                                      decode_valid_o,
 000051	    input                                       decode_next_i,
 000052	    output                                      fetch_next_o,
%000005	    input                                       instr_valid_i,
 000100	    output [4  : 0]                             ex_rd_o,
 000100	    input                                       register_access_i,
%000001	    output                                      ex_feedback_rs1_o,
%000001	    output                                      ex_feedback_rs2_o
	);
 000100	    logic [4  : 0]                      ex_rd;
%000000	    logic [4  : 0]                      rs1;
%000000	    logic [4  : 0]                      rs2;
 000098	    logic [4  : 0]                      last_rd;
 000051	    logic                               decode_valid;
%000000	    logic                               ex_data0_mux;
 000050	    logic                               ex_data1_mux;
 000052	    logic                               fetch_next;
%000000	    logic [BITSIZE - 1 : 0]             data_rs1;
%000000	    logic [BITSIZE - 1 : 0]             data_rs2;
%000000	    logic [6 : 0 ]                      ex_operation;
%000000	    logic [BITSIZE - 1 : 0 ]            ex_data0;
 000750	    logic [BITSIZE - 1 : 0 ]            ex_data1;
%000015	    logic [BITSIZE - 1 : 0 ]            immediate;
%000022	    logic [32 - 1 : 0 ]                 instruction;
 000051	    logic                               decoded = 1'b1;
	
	    assign fetch_next_o = fetch_next;
	    assign rs1_o = rs1;
	    assign rs2_o = rs2;
	    assign decode_valid_o = decode_valid;
	    assign data_rs1 = data_rs1_i;
	    assign data_rs2 = data_rs2_i;
	    assign ex_data0_o = ex_data0;
	    assign ex_data1_o = ex_data1;
	    assign ex_operation_o = ex_operation;
	    assign ex_rd_o = ex_rd;
	
	    // data0 to execution stage
	    always_comb
	    begin
%000000	        if(ex_data0_mux == 1'b1)
	            ex_data0 = immediate;
	        else
%000001	            ex_data0 = data_rs1;
	    end
	
	    // data1 to execution stage
	    always_comb
	    begin
 000025	        if(ex_data1_mux == 1'b1)
	            ex_data1 = immediate;
	        else
 000077	            ex_data1 = data_rs2;
	    end
	
	    // Controller
	    always_ff@(posedge clk)
	    begin
	        fetch_next <= 1'b0;
	        last_rd <= ex_rd;
 000025	        if(!decoded && decode_next_i && register_access_i)
	            decoded <= 1'b1;
	        
%000003	        if(!instr_valid_i)
	            fetch_next <= 1'b1;
	
 000025	        if(decoded == 1'b1 && instr_valid_i == 1'b1)
	            begin
	                fetch_next <= 1'b1;
	                instruction <= instruction_i;
	                decoded <= 1'b0;            
	            end
	    end
	
	    always_comb
	    begin
	        ex_feedback_rs1_o = 1'b1;
	        ex_feedback_rs2_o = 1'b1;
 000077	        if(last_rd == rs1)
	            ex_feedback_rs1_o = 1'b1;
 000077	        if(last_rd == rs2)
	            ex_feedback_rs2_o = 1'b1;
	    end
	
	    always_comb
	    begin
	        rs1 = 'b0;
	        rs2 = 'b0;
	        ex_rd = 'b0;
	        ex_data0_mux = 1'b0;
	        ex_data1_mux = 1'b0;
	        decode_valid = 'b0;
	        
 000028	        if(decoded)
	            decode_valid = 'b1;
	        
 000025	        if(decode_next_i == 1'b1 && decoded == 1'b0 && register_access_i == 1'b1)
	        begin
	            decode_valid = 'b1;
	            case(instruction[6:0]) // opcode
 000025	                `LUI: begin
	                    rs1 = 'b0;
	                    immediate = {instruction[31:12], 12'b0};
	                    ex_rd = instruction[11:7];
	                    ex_data1_mux = 1'b1;
	                    ex_operation = {`ALU, `ADDTITION};
	                end
%000000	                `IMM_REG_ALU: begin // Immediate, register
	                    rs1 = instruction[19:15];
	                    immediate = {20'b0, instruction[31:20]};
	                    ex_rd = instruction[11:7];
	                    ex_data1_mux = 1'b1;
	
	                    case(instruction[14:12]) // fun3
%000000	                        `F3_ADD: begin // ADDI
	                            ex_operation = {`ALU, `ADDTITION};
	                        end
%000000	                        `F3_XOR: begin // ADDI
	                            ex_operation = {`ALU, `XOR};
	                        end
%000000	                        `F3_OR: begin // ADDI
	                            ex_operation = {`ALU, `OR};
	                        end
%000000	                        `F3_AND: begin // ADDI
	                            ex_operation = {`ALU, `AND};
	                        end
%000000	                        `F3_SLLI: begin // ADDI
	                            ex_operation = {`ALU, `SHIFT_LEFT};
	                        end
%000000	                        `F3_SRLI: begin // ADDI
	                            ex_operation = {`ALU, `SHIFT_RIGHT};
	                        end
%000000	                        default: begin
	                        end
	                    endcase
	                end
%000000	                `REG_REG_ALU: begin // Register, Register
	                    case(instruction[14:12]) // fun3
%000000	                        `F3_ADD: begin // ADD
	                            
	                        end
%000000	                        default: begin
	                        end
	                    endcase
	                end
%000000	                default: begin
	                    
	                end
	            endcase
	        end
	    end
	endmodule
