
set migPath $::env(PWD)/mig_axi.prj

set partNumber xc7a100ti-csg324-1L

create_project xilinx_ddr3_controller . -part $partNumber
create_ip -name mig_7series -vendor xilinx.com -library ip -version 4.2 -module_name xilinx_ddr3_controller
set_property -dict [list CONFIG.XML_INPUT_FILE "$migPath" CONFIG.RESET_BOARD_INTERFACE {Custom} CONFIG.MIG_DONT_TOUCH_PARAM {Custom} CONFIG.BOARD_MIG_PARAM {Custom}] [get_ips xilinx_ddr3_controller]
generate_target {instantiation_template} [get_files ./xilinx_ddr3_controller.srcs/sources_1/ip/xilinx_ddr3_controller/xilinx_ddr3_controller.xci]
update_compile_order -fileset sources_1
generate_target all [get_files .xilinx_ddr3_controller.srcs/sources_1/ip/xilinx_ddr3_controller/xilinx_ddr3_controller.xci]
catch { config_ip_cache -export [get_ips -all xilinx_ddr3_controller] }
export_ip_user_files -of_objects [get_files ./xilinx_ddr3_controller.srcs/sources_1/ip/xilinx_ddr3_controller/xilinx_ddr3_controller] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] ./xilinx_ddr3_controller.srcs/sources_1/ip/xilinx_ddr3_controller/xilinx_ddr3_controller.xci]
launch_runs -jobs 8 xilinx_ddr3_controller_synth_1
wait_on_run xilinx_ddr3_controller_synth_1