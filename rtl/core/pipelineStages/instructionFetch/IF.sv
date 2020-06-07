// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module IF
#(
    parameter BITSIZE = 32
)(
    input                                       clk,
    input                                       resetn_i,
    //IF-ID
    input                                       ID_IF_get_i,
    output                                      IF_ID_give_o,
    output  [31 : 0]                            IF_ID_instr_o,
    //IF-MEM (TODO: cache)
    output  [BITSIZE - 1 : 0]                   MEM_addr_o,
    input [31 : 0]                              MEM_data_i,
    output                                      MEM_read_o,
    input                                       MEM_valid_i
    //TODO Branching address (+ flush of pipeline)
);

enum {FETCH_INSTR, PROVIDE_INSTR} CS, NS;

logic [31 : 0]                                  IF_instruction;
logic [BITSIZE - 1 : 0]                         address = '0;
logic                                           incr_addr;

always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
       CS <= FETCH_INSTR;
    end
    else
    begin
        CS <= NS;
        // TODO: branch
        if(incr_addr)
            address <= address + 1;
    end
end

always_comb
begin
    IF_ID_give_o = 1'b0;
    MEM_read_o = 1'b0;
    incr_addr = 1'b0;

    case(CS)
        FETCH_INSTR: begin
            MEM_addr_o = address;
            MEM_read_o = 1'b1;
            if(MEM_valid_i) begin
                IF_instruction = MEM_data_i;
                NS = PROVIDE_INSTR;
                incr_addr = 1'b1;
            end
            
        end

        PROVIDE_INSTR: begin
            if(ID_IF_get_i)
            begin
                IF_ID_give_o = 1'b1;
                IF_ID_instr_o = IF_instruction;
                NS = FETCH_INSTR;
            end
        end

        default: begin
        end
    endcase
end
endmodule