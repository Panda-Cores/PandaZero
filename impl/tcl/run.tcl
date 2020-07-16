set NAME "RVMicroController"

create_project RVMicroController . -force -part xc7a100ti-csg324-1L

set RTL ../rtl
set IPS ../ips

source tcl/inc_dirs.tcl
source tcl/src_list.tcl
source tcl/src_add.tcl

# add_files -norecurse $IPS/xilinx_ddr3_controller/ip/xilinx_ddr3_controller.xci

update_compile_order -fileset sources_1

set_property top core_wrapper [current_fileset]

reset_run synth_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1