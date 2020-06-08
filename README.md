# RVMicroController
My very own RISC-V computer, which will maybe someday run as a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Load/Store instructions
* Branching instructions
* Arithmetic integer instructions (add, sub, shift,...) both register-register and register-immediate
* Memory controller
* Theoretically, programs can now run!

Upcoming features (in order of priority):
* Pipeline hazard detection (probably mitigation via pipeline stall)
* Actual Memory (currently a rough temporary implementation)
* Write and riscv programs to test current features extensively
* L1 Instruction and data cache

For now out of scope:
* floating point unit
* ???
