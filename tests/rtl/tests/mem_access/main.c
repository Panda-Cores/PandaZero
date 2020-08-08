#include "mem_access.h"

int main() {
    volatile unsigned int *magic_addr = (unsigned int*) 0x7ff0;
    
    int result = mem_access();

    *(magic_addr) = result + 1;

    while(1);
}