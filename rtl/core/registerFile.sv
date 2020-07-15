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

logic [31:0] registers_n[31];
logic [31:0] registers_q[31];

always_comb
begin
    registers_n = registers_q;

    // Write
    if(rd != 'b0)
        registers_n[rd] = data_rd_i;

    // Read
    data_rs1_o = registers_q[rs1];
    data_rs2_o = registers_q[rs2];
end

always_ff @(posedge clk, negedge rstn_i)
    if(!rstn_i)
        for(int i = 0; i < 32; i = i + 1)
            registers_q[i] <= 'b0;
    else
        registers_q <= registers_n;
endmodule