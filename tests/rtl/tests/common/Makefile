
RISCV_GCC_OPTS ?= -DPREALLOCATE=1 -mcmodel=medany -march=rv32i -mabi=ilp32 -static -std=gnu99 -O0 -ffast-math -fno-common -fno-builtin-printf
RISCV_LINK_OPTS ?= -march=rv32i -mabi=ilp32 -static -nostdlib -nostartfiles -lm -lgcc
RISCV_OBJDUMP_OPTS ?= -d

CURRENT_TEST = $(addsuffix .c, $(notdir $(shell pwd)))

default: main

.PHONY: build
build:
	@if [ ! -d "./build" ]; then mkdir build; fi

%: %.c build
	riscv32-unknown-elf-gcc ../../common/crt.s $< $(CURRENT_TEST) $(RISCV_GCC_OPTS) -o build/$@ $(RISCV_LINK_OPTS)
	@riscv32-unknown-elf-objdump $(RISCV_OBJDUMP_OPTS) build/$@ > build/$@.dmp
	@riscv32-unknown-elf-objcopy -O binary build/$@ build/$@.bin
	@hexdump build/$@.bin > main.hex.dmp
	@python3 ../../common/hexlify.py
	rm -rf main.hex.dmp
	make -f ../../common/vrltr.mk
	

.PHONY: clean
clean:
	rm -rf build
	rm -rf main.hex
	rm -rf main.hex.dmp
	make -f ../../common/vrltr.mk clean