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
// Module name: ram
// 
// Functionality: Single port ram
//
// ------------------------------------------------------------

module ram #(
    parameter SIZE = 1024
)(
    input logic           clk,
    input logic           rstn_i,
    input logic [31:0]    addr_i,
    input logic           en_i,
    input logic [3:0]     we_i,
    input logic [31:0]    din_i,
    output logic [31:0]   dout_o
);

logic [31:0]    addr;

(*ram_style = "block" *) reg [31:0] data[SIZE];

assign addr = $signed(addr_i >> 2);

always_comb
begin
    if(en_i) begin
        unique case(addr_i[1:0])
            2'b00 : dout_o = data[addr];
            2'b01 : dout_o = {data[addr][31:8] , data[addr+1][7:0] };
            2'b10 : dout_o = {data[addr][31:16], data[addr+1][15:0]};
            2'b11 : dout_o = {data[addr][31:24], data[addr+1][23:0]};
        endcase
    end
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
    end else begin
        if(en_i) begin
            case(we_i)
                4'b1111: begin
                    unique case(addr_i[1:0])
                        2'b00 : data[addr] <= din_i;
                        2'b01 : begin data[addr][31:8] <= din_i[23:0]; data[addr+1][7:0] <= din_i[31:24]; end
                        2'b10 : begin data[addr][31:16] <= din_i[15:0]; data[addr+1][15:0] <= din_i[31:16]; end
                        2'b11 : begin data[addr][31:24] <= din_i[7:0]; data[addr+1][23:0] <= din_i[31:8]; end
                    endcase
                end
                
                4'b0011: begin
                    unique case(addr_i[1:0])
                        2'b00 : data[addr][15:0] <= din_i[15:0];
                        2'b01 : begin data[addr][23:8] <= din_i[15:0]; end
                        2'b10 : begin data[addr][31:16] <= din_i[15:0]; end
                        2'b11 : begin data[addr][31:24] <= din_i[7:0]; data[addr+1][7:0] <= din_i[15:8]; end
                    endcase
                end
                
                4'b0001: begin
                    unique case(addr_i[1:0])
                        2'b00 : data[addr][7:0] <= din_i[7:0];
                        2'b01 : begin data[addr][15:8] <= din_i[7:0]; end
                        2'b10 : begin data[addr][23:16] <= din_i[7:0]; end
                        2'b11 : begin data[addr][31:24] <= din_i[7:0]; end
                    endcase
                end
                
                default: begin
                end
            endcase
        end
    end
end

endmodule