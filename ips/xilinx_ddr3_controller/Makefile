PROJECT:=xilinx_ddr3_controller

all:
	vivado -mode batch -source tcl/run_native.tcl
	mkdir -p ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}_stub.v ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.xci ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.veo ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.dcp ./ip

axi:
	vivado -mode batch -source tcl/run_axi.tcl
	mkdir -p ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}_stub.v ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.xci ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.veo ./ip
	# cp ${PROJECT}.srcs/source_1/ip/${PROJECT}/${PROJECT}.dcp ./ip

gui:
	vivado -mode gui -source tcl/run_native.tcl

clean:
	rm -rf ip/*
	mkdir -p ip
	rm -rf ${PROJECT}.xpr
	rm -rf ${PROJECT}.hw
	rm -rf ${PROJECT}.data
	rm -rf ${PROJECT}.runs
	rm -rf ${PROJECT}.srcs
	rm -rf ${PROJECT}.cache
	rm -rf ${PROJECT}.sim
	rm -rf ${PROJECT}.hbs
	rm -rf ${PROJECT}.ip_user_files
	rm -rf .Xil
	rm -rf component.xml
	rm -rf vivado*.jou
	rm -rf vivado*.log
	rm -rf vivado*.str
	rm -rf xgui