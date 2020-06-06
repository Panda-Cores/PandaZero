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

assign registers['b0] = 'b0;

always_comb
begin
    if(rd != 'h1f && rd != 'b0)
        registers[rd] = data_rd_i;

    if(rs1 != 'h1f)
        data_rs1_o = registers[rs1];
    else
        data_rs1_o = 'b0;
    
    if(rs2 != 'h1f)
        data_rs2_o = registers[rs2];
    else
        data_rs2_o = 'b0;
end

endmodule