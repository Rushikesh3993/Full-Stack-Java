#include <stdio.h>

int n = 10; // global variable

void test(){
    int n = 50;
    printf("%d", n); // 50 we can redeclare that 10 to 50
}

void demo(){
    printf("%d", n);
}

void main(){
    test();
    demo();
}

