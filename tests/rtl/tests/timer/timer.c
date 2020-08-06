int timer(){
    volatile int *timer = (int *) 0x8000;
    volatile int *t_cfg = (int *) 0x8004;
    volatile int *cmp   = (int *) 0x8008;

    int t_old = 0;
    int t_new = 0;

    *timer = 0;
    *cmp = 0x300;
    *t_cfg = 1;
    t_new = *timer;
    while(t_new > t_old){
        t_old = t_new;
        t_new = *timer;
        // At the compare, the timer should be reset
        // so it should never pass that value
        if(t_new > 0x300)
            return 1;
    }

    return 0;
}