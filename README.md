# RVMicroController
My very own RISC-V computer, which will maybe someday run as a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Pipeline hazard detection & mitigation (via pipeline stall)
* Load/Store instructions
* Branching instructions
* Arithmetic integer instructions (add, sub, shift,...) both register-register and register-immediate
* Memory controller
* Theoretically, programs can now run!

Upcoming features (in order of priority):
* Actual memory (currently a rough temporary implementation (which is crap!))
* With new memory, most likely a IF & MEM stage rework
* Write and riscv programs to test current features extensively
* L1 Instruction and data cache

For now out of scope:
* floating point unit
* ???
