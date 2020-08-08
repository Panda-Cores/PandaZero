#define N_CYC 100

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
    
    for(int i = 0; i < N_CYC; i++){
        t_old++;
    }
    
    t_new = (*timer) - t_new;

    if(t_old == N_CYC)
        return t_new;
    
    return -10;
}