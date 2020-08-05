int mem_access(){
    unsigned int *addr = (int*) 0x200;
    *addr = 0;
    for(int i = 0; i < 10; i++){
        (*addr) = i;
        addr++;
    }

    addr = (int*) 0x200;
    for(int i = 0; i < 10; i++){
        if((*addr) != i)
            return i+1;
        addr++;
    }
    return 0;
}