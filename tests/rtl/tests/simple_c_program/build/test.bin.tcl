# Create new write transaction
reset_hw_axi [get_hw_axis hw_axi_1]
create_hw_axi_txn wr_txn [get_hw_axis hw_axi_1] -address 0x0 -data affeaffe -len 1 -type write

# Write instructions to BRAM
set_property CMD.ADDR 0x0 [get_hw_axi_txns wr_txn]
set_property DATA 0x00001137 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x4 [get_hw_axi_txns wr_txn]
set_property DATA 0x0040006f [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x8 [get_hw_axi_txns wr_txn]
set_property DATA 0xfe010113 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0xc [get_hw_axi_txns wr_txn]
set_property DATA 0x00812e23 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x10 [get_hw_axi_txns wr_txn]
set_property DATA 0x02010413 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x14 [get_hw_axi_txns wr_txn]
set_property DATA 0x06400793 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x18 [get_hw_axi_txns wr_txn]
set_property DATA 0xfef42623 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x1c [get_hw_axi_txns wr_txn]
set_property DATA 0xfe042423 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x20 [get_hw_axi_txns wr_txn]
set_property DATA 0x0280006f [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x24 [get_hw_axi_txns wr_txn]
set_property DATA 0xfec42783 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x28 [get_hw_axi_txns wr_txn]
set_property DATA 0xfe842703 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x2c [get_hw_axi_txns wr_txn]
set_property DATA 0x00e7a023 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x30 [get_hw_axi_txns wr_txn]
set_property DATA 0xfec42783 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x34 [get_hw_axi_txns wr_txn]
set_property DATA 0x01078793 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x38 [get_hw_axi_txns wr_txn]
set_property DATA 0xfef42623 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x3c [get_hw_axi_txns wr_txn]
set_property DATA 0xfe842783 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x40 [get_hw_axi_txns wr_txn]
set_property DATA 0x00178793 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x44 [get_hw_axi_txns wr_txn]
set_property DATA 0xfef42423 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x48 [get_hw_axi_txns wr_txn]
set_property DATA 0xfe842703 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x4c [get_hw_axi_txns wr_txn]
set_property DATA 0x00900793 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x50 [get_hw_axi_txns wr_txn]
set_property DATA 0xfce7dae3 [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

set_property CMD.ADDR 0x54 [get_hw_axi_txns wr_txn]
set_property DATA 0x0000006f [get_hw_axi_txns wr_txn]
run_hw_axi [get_hw_axi_txns wr_txn]

