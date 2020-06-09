// ---------------RISCV-Luca---------------
// 
// Module:          RegsiterFile
// 
// Functionality:   register file
// 
// -------------(c) Luca Hanel-------------

module registerFile
#(
    parameter BITSIZE = 32
)(
    input [4 : 0]     rd,
    input [4 : 0]     rs1,
    input [4 : 0]     rs2,
    input [BITSIZE - 1 : 0]                     data_rd_i,
    output [BITSIZE - 1 : 0]                    data_rs1_o,
    output [BITSIZE - 1 : 0]                    data_rs2_o
);

logic [BITSIZE - 1 : 0] registers [32];
logic [BITSIZE - 1 : 0] data_rs1;
logic [BITSIZE - 1 : 0] data_rs2;

assign data_rs1_o = data_rs1;
assign data_rs2_o = data_rs2;
initial begin
    for(int i = 0; i < 32; i = i + 1) begin
        registers[i] = 'b0;
    end
end

always_comb
begin
    if(rd != 'h1f && rd != 'b0)
        registers[rd] = data_rd_i;

    if(rs1 != 'h1f)
        data_rs1 = registers[rs1];
    else
        data_rs1 = 'b0;
    
    if(rs2 != 'h1f)
        data_rs2 = registers[rs2];
    else
        data_rs2 = 'b0;
end

endmodule