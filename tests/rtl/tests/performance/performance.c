#define N_CYC 1000

int performance(){
    volatile int *timer = (int *) 0x8000;
    volatile int *t_cfg = (int *) 0x8004;
    volatile int *cmp   = (int *) 0x8008;
    volatile int tmp;

    int t_old = 0;
    int t_new = 0;

    *timer = 0;
    
    // set compare to highest to disable resetting it early
    *cmp = 0xffffffff;
    *t_cfg = 1;
    t_new = *timer;
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
    
    for(int i = 0; i < N_CYC; i++){
        t_old++;
    }
    
    t_new = (*timer) - t_new;

    if(t_old == N_CYC)
        return t_new;
    
    return -10;
}