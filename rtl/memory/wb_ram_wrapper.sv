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
// Module name: wb_ram_wrapper.sv
// 
// Functionality: Simple wrapper for the ram and wishbone slave
//                interface
//
// ------------------------------------------------------------

/* verilator lint_off PINMISSING */
module wb_ram_wrapper #(
    parameter SIZE = 1024
)(
    input logic             clk,
    input logic             rstn_i,
    wb_bus_t.slave          wb_bus
);

logic [31:0]    ram_wb_d;
logic [31:0]    wb_ram_d;
logic [31:0]    addr;
logic           wb_we;
logic [3:0]     wb_sel;
logic [3:0]     ram_we;

assign ram_we = (wb_we) ? wb_sel : 4'b0;

wb_slave #(
    .TAGSIZE    ( 1         )
)wb_slave_i(
    .clk_i      ( clk       ),
    .rst_i      ( ~rstn_i   ),
    .data_i     ( ram_wb_d  ),
    .data_o     ( wb_ram_d  ),
    .addr_o     ( addr      ),
    .we_o       ( wb_we     ),
    .sel_o      ( wb_sel    ),
    .valid_i    ( 1'b1      ),
    .wb_bus     ( wb_bus    )
);

ram #(
    .SIZE (SIZE)
)ram_i(
    .clk    ( clk       ),
    .rstn_i ( rstn_i    ),
    .addr_i ( addr      ),
    .en_i   ( 1'b1      ),
    .we_i   ( ram_we    ),
    .din_i  ( wb_ram_d  ),
    .dout_o ( ram_wb_d  )
);

endmodule
/* verilator lint_on PINMISSING */