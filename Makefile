PRJNAME:=RVMicroController

.PHONY: ips

ips: xilinx_bram_controller # xilinx_ddr3_controller

xilinx_ddr3_controller: 
	make -B -C ips/xilinx_ddr3_controller clean all

xilinx_bram_controller: 
	make -B -C ips/xilinx_bram_controller clean all

.PHONY: impl
impl:
	make -B -C impl
	rm vivado.*

sim:
	make -C sim_verilator
	gtkwave -f sim_verilator/logs/vlt_dump.vcd -a sim_verilator/common/waves.gtkw

clean:
	make -C impl clean
	make -C sim_verilator clean
	make -C ips/xilinx_ddr3_controller clean