int main() {
    int *addr = (int*)100;
    for(int i = 0; i < 10; i++) {
        (*addr) = 12;
        addr+=1;
    }
    while(1);
}