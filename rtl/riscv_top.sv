`timescale 1ns / 100ps

module riscv_top(
    input                   clk,
    input                   resetn_i
);

core_top #(
    .BITSIZE    (   32  )
)core_top_i(
    .clk            (   clk     ),
    .resetn_i       (   resetn_i)
);

endmodule
