#include "performance.h"

int main() {
    unsigned int *magic_addr = (unsigned int*) 0x7ff0;
    
    int result = performance();

    *(magic_addr) = result + 1;

    volatile int tmp;

    tmp = *((int*) 0x00);
    tmp = *((int*) 0xf0);
    tmp = *((int*) 0x1f0);
    tmp = *((int*) 0x2f0);
    tmp = *((int*) 0x3f0);
    tmp = *((int*) 0x4f0);
    tmp = *((int*) 0x5f0);
    tmp = *((int*) 0x6f0);
    tmp = *((int*) 0x7f0);
    tmp = *((int*) 0x8f0);
    tmp = *((int*) 0x9f0);
    tmp = *((int*) 0xaf0);
    tmp = *((int*) 0x15f0);
    tmp = *((int*) 0x25f0);
    tmp = *((int*) 0x35f0);
    tmp = *((int*) 0x45f0);
    tmp = *((int*) 0x55f0);
    tmp = *((int*) 0x65f0);
    tmp = *((int*) 0x75f0);

    while(1);
}