
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

int mult(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a / b;
}

int mod(int a, int b){
    return a % b;
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

    test = mult(3, 4);
    if(test != 12) return 6;

    test = div(8, 2);
    if(test != 4) return 7;

    test = mod(8, 3);
    if(test != 2) return 8;

    return 0;
}