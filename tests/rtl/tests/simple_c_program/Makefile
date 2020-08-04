
RISCV_GCC_OPTS ?= -DPREALLOCATE=1 -mcmodel=medany -march=rv32i -mabi=ilp32 -static -std=gnu99 -O0 -ffast-math -fno-common -fno-builtin-printf
RISCV_LINK_OPTS ?= -march=rv32i -mabi=ilp32 -static -nostdlib -nostartfiles -lm -lgcc
RISCV_OBJDUMP_OPTS ?= -d

all: build

.PHONY: build
build:
	@if [ ! -d "./build" ]; then mkdir build; fi

%: %.c build
	riscv64-unknown-linux-gnu-gcc crt.s $< $(RISCV_GCC_OPTS) -o build/$@ $(RISCV_LINK_OPTS)
	@riscv64-unknown-linux-gnu-objdump $(RISCV_OBJDUMP_OPTS) build/$@ > build/$@.dmp
	@riscv64-unknown-linux-gnu-objcopy -O binary build/$@ build/$@.bin
	@hexdump build/$@.bin > main.hex.dmp
	@python3 hexlify.py
	make -f vrltr.mk

.PHONY: clean
clean:
	rm -rf build