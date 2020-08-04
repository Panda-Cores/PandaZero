int main() {
    int *addr = (int*)100;
    for(int i = 0; i < 10; i++) {
        (*addr) = i;
        addr+=4;
    }
    while(1);
}