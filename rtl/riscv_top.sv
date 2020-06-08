`timescale 1ns / 100ps

module riscv_top(
    input                   clk,
    input                   resetn_i
);

localparam BITSIZE = 32;

logic [(2* BITSIZE) - 1 : 0]    C_M_data;
logic [(2* BITSIZE) - 1 : 0]    M_C_data;
logic [(2* BITSIZE) - 1 : 0]    C_M_addr;
logic [1 : 0]                   C_M_read;
logic [1 : 0]                   C_M_write;
logic [3 : 0]                   C_M_write_size;
/* verilator lint_off UNOPTFLAT */
logic [1 : 0]                   C_M_valid;
/* verilator lint_on UNOPTFLAT */

core_top #(
    .BITSIZE        (   BITSIZE     )
)core_top_i(
    .clk            (   clk         ),
    .resetn_i       (   resetn_i    ),
    .MEM_read_o     (   C_M_read    ),
    .MEM_write_o    (   C_M_write   ),
    .MEM_write_size_o(  C_M_write_size),
    .MEM_valid_i    (   C_M_valid   ),
    .MEM_data_i     (   M_C_data    ),
    .MEM_data_o     (   C_M_data    ),
    .MEM_addr_o     (   C_M_addr    )
);

mem_ctrl_top #(
    .BITSIZE            (   BITSIZE     ),
    .MEM_SIZE           (   32           ),
    .N_ACCESSORS        (   2           )
) mem_ctrl_top_i (
    .clk                (   clk             ),
    .resetn_i           (   resetn_i        ),
    .acc_address_i      (   C_M_addr        ),
    .acc_write_i        (   C_M_write       ),
    .acc_write_size_i   (   C_M_write_size  ),
    .acc_read_i         (   C_M_read        ),
    .acc_data_o         (   M_C_data        ),
    .acc_data_i         (   C_M_data        ),
    .acc_done_o         (   C_M_valid       )
);

endmodule
