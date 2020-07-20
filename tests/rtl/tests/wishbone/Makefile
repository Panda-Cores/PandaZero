######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package inatall, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS =
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Optimize
VERILATOR_FLAGS += -O2 -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
VERILATOR_FLAGS += --trace-structs
# VERILATOR_FLAGS += --prefix top

VERILATOR_FLAGS += wishbone_tb.sv
VERILATOR_FLAGS += --top-module wishbone_tb

INCLUDE := $(shell cat ../../common/sources.txt)

######################################################################
default: run

run:
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE) sim_main.cpp

	@echo
	@echo "-- COMPILE -----------------"
	$(MAKE) -j 4 -C obj_dir -f Vwishbone_tb.mk 

	@echo
	@echo "-- RUN ---------------------"
	@mkdir -p logs
	obj_dir/Vwishbone_tb --trace

	@echo
	@echo "-- COVERAGE ----------------"
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- TEST RESULT -------------"
	@echo "   `cat result.txt`"

clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat result.txt
