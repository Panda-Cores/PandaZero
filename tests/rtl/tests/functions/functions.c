
int int_fun(int input){
    return input;
}

void void_fun(int input){
    return;
}

int add(int test, int input){
    return test + input;
}

void pointer_fun(int *test, int input){
    *(test) = input;
}

int functions(){
    int test;
    test = int_fun(20);
    if(test != 20) return 1;

    void_fun(10);
    if(test != 20) return 2;

    test = add(test, 5);
    if(test != 25) return 3;

    test = add(test, -5);
    if(test != 20) return 4;

    pointer_fun(&test, -200);
    if(test != -200) return 5;

    return 0;
}