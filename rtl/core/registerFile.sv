// ------------------------ Disclaimer -----------------------
// No warranty of correctness, synthesizability or 
// functionality of this code is given.
// Use this code under your own risk.
// When using this code, copy this disclaimer at the top of 
// Your file
//
// (c) Luca Hanel 2020
//
// ------------------------------------------------------------
//
// Module name: register file
// 
// Functionality: Register file of the core
//
// ------------------------------------------------------------


module registerFile (
    input logic         clk,
    input logic         rstn_i,
    input logic [4:0]   rd,
    input logic [4:0]   rs1,
    input logic [4:0]   rs2,
    input logic [31:0]  data_rd_i,
    output logic [31:0] data_rs1_o,
    output logic [31:0] data_rs2_o
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