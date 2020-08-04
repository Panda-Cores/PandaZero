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

INCLUDE := $(shell cat ../../common/sources.txt)

VERILATOR_FLAGS += --top-module core_wrapper

######################################################################
default: run

run:
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(INCLUDE) sim_main.cpp

	@echo
	@echo "-- COMPILE -----------------"
	# $(MAKE) -j 4 -C obj_dir -f top.mk 
	$(MAKE) -j 4 -C obj_dir -f Vcore_wrapper.mk 
	

	@echo
	@echo "-- RUN ---------------------"
	@mkdir -p logs
	# obj_dir/top --trace > result.txt
	obj_dir/Vcore_wrapper --trace > result.txt

	@echo
	@echo "-- COVERAGE ----------------"
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- TEST RESULT -------------"
	@echo "   `cat result.txt`"

clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat result.txt
