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
    input             clk,
    input             rstn_i,
    input [4:0]       rd,
    input [4:0]       rs1,
    input [4:0]       rs2,
    input [31:0]      data_rd_i,
    output [31:0]     data_rs1_o,
    output [31:0]     data_rs2_o
);

logic [31:0] registers_n [32];
logic [31:0] registers_q [32];

always_comb
begin
    registers_n = registers_q;

    // Write
    registers_n[rd] = data_rd_i;

    // Read
    data_rs1_o = registers_q[rs1];
    data_rs2_o = registers_q[rs2];
end

always_ff @(posedge clk)
    if(!rstn_i)
        registers_q <= 'b0;
    else
        registers_q <= registers_n;
endmodule