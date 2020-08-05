#include "address_test.h"

int main() {
    unsigned int *magic_addr = (unsigned int*) 0x7ff0;
    
    int result = address_test();

    *(magic_addr) = result + 1;

    while(1);
}