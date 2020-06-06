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
    //TODO Memory interface

    input                                       ID_IF_get_i,
    output                                      IF_ID_give_o,
    output  [31 : 0]                            IF_ID_instr_o
);

enum {FETCH_INSTR, PROVIDE_INSTR} CS, NS;

logic [31 : 0]                                  IF_instruction;

//TODO Temporary MEM IFACE
logic [31:0]                instructions [8];
logic [1 : 0]               j = 'b0;
logic [2 : 0]               i = 'b0;
assign instructions[0] = 32'b01111100011111111110001010110111; //LUI 
assign instructions[1] = 32'b00000000000100011000000110010011; //ADDI
assign instructions[2] = 32'b11111100011111111110001010110111; //LUI 
assign instructions[3] = 32'b00000000000100011000000110010011; //ADDI
assign instructions[4] = 32'b01111100011111111110001010110111; //LUI
assign instructions[5] = 32'b00000000000100011000000110010011; //ADDI
assign instructions[6] = 32'b11111100011111111110001010110111; //LUI
assign instructions[7] = 32'b00000000000100011000000110010011; //ADDI

always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
       CS <= FETCH_INSTR;
       i <= 'b0;
       j <= 'b0; 
    end
    else
    begin
        CS <= NS;
        j <= j + 1'b1;
        if(j == 2'b10)
        begin
            i <= i + 1'b1;
            j <= 2'b00;
        end
    end
end

always_comb
begin
    IF_ID_give_o = 1'b0;

    case(CS)
        FETCH_INSTR: begin
            //Memory interface
            if(j == 2'b10)
            begin
                IF_instruction = instructions[i];
                NS = PROVIDE_INSTR;
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