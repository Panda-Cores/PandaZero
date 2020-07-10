// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module IF_stage
#(
    parameter BITSIZE = 32
)(
    input                                       clk,
    input                                       resetn_i,
    //IF-ID
    input                                       ID_IF_get_i,
    output                                      IF_ID_give_o,
    output  [31 : 0]                            IF_ID_instr_o,
    output  [BITSIZE - 1 : 0]                   IF_ID_pc_o,
    //IF-MEM (TODO: cache)
    output  [BITSIZE - 1 : 0]                   MEM_addr_o,
    input [31 : 0]                              MEM_data_i,
    output                                      MEM_read_o,
    input                                       MEM_valid_i,
    //Branching
    input [BITSIZE - 1 : 0]                     pc_i,
    input                                       branch_taken_i
);

enum {FETCH_INSTR, PROVIDE_INSTR} CS, NS;

logic [31 : 0]                                  IF_instruction;
logic [BITSIZE - 1 : 0]                         IF_pc;
logic [BITSIZE - 1 : 0]                         IF_pc_t;
logic                                           incr_addr;
logic                                           IF_ID_give, MEM_read;

assign MEM_read_o           = MEM_read;
assign IF_ID_give_o         = IF_ID_give;
assign MEM_addr_o           = IF_pc;
assign IF_ID_instr_o        = IF_instruction;
assign IF_ID_pc_o           = IF_pc;

always_ff@(posedge clk)
begin
    if(!resetn_i || branch_taken_i)
    begin
        CS <= FETCH_INSTR;
        IF_pc_t <= 'b0;
    end
    else
    begin
        CS <= NS;
        if(incr_addr)
            IF_pc_t <= IF_pc + 4;
    end
end

assign IF_pc = (branch_taken_i) ? pc_i : IF_pc_t;

always_comb
begin
    IF_ID_give = 1'b0;
    MEM_read = 1'b0;
    incr_addr = 1'b0;

    if(!resetn_i || branch_taken_i)
    begin
        NS = FETCH_INSTR;
        IF_instruction = 'b0;
    end
    else
    case(CS)
        FETCH_INSTR: begin
            MEM_read = 1'b1;
            if(MEM_valid_i) begin
                IF_instruction = MEM_data_i;
                NS = PROVIDE_INSTR;
            end
                        
        end

        PROVIDE_INSTR: begin
            if(ID_IF_get_i)
            begin
                IF_ID_give = 1'b1;
                NS = FETCH_INSTR;
                incr_addr = 1'b1;
            end
        end

        default: begin
        end
    endcase
end
endmodule