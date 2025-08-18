#include <stdio.h>

void test(){
    int n = 10; //local Variable its only have in that block only his scope between his function
    printf("%d", n);
}

void demo(){
    printf("%d", n);//error: 'n' undeclared
}

void main(){
    test();
    demo();
}

