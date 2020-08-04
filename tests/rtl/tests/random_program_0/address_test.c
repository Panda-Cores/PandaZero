int address_test(){
    unsigned int *addr = (int*) 0x200;

    for(int i = 0; i < 10; i++){
        *addr = i;
        addr++;
    }

    for(int i = 0; i < 10; i++){
        if(*addr != i)
            return i;
    }
    return 0;
}