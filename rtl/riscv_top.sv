`timescale 1ns / 100ps


module riscv_top(
    input                   clk,
    input                   resetn_i
);

logic unconnected_0;
logic unconnected_1;
assign unconnected_1 = 1'b0;

logic [32 - 1 : 0]          C_M_data;
logic [32 - 1 : 0]          C_M_addr;
logic                       C_M_read;
logic                       C_M_valid;

core_top #(
    .BITSIZE        (   32     )
)core_top_i(
    .clk            (   clk         ),
    .resetn_i       (   resetn_i    ),
    //TODO make mem bidirectional
    .MEM_read_o     (   C_M_read    ),
    .MEM_valid_i    (   C_M_valid   ),
    .MEM_data_i     (   C_M_data    ),
    .MEM_addr_o     (   C_M_addr    )
);

mem_ctrl_top #(
    .BITSIZE            (   32     ),
    .N_WORDS_PER_ADDR   (   1           ),
    .MEM_SIZE           (   4           ),
    .N_ACCESSORS        (   1           )
) mem_ctrl_top_i (
    .clk                (   clk             ),
    .resetn_i           (   resetn_i        ),
    .acc_address_i      (   C_M_addr        ),
    .acc_store_i        (   unconnected_1   ),
    .acc_load_i         (   C_M_read        ),
    .acc_data_io        (   C_M_data        ),
    .acc_ready_o        (   unconnected_0   ),
    .acc_done_o         (   C_M_valid       )
);

endmodule
