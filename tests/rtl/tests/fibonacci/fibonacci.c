#define FIB_N 12

int fibonacci(){

    unsigned int fib_i = 1;
    unsigned int fib_ii = 1;
    unsigned int fib = 0;

    int i;
    for(i = 3; i <= FIB_N; i++) {
        fib = fib_i + fib_ii;
        fib_i = fib_ii;
        fib_ii = fib;
    }
    if(fib != 144)
        return fib;

    return 0;
}