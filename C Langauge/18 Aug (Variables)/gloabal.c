#include <stdio.h>

int n = 10; // global variable

void test(){
    int n = 50;
    printf("%d", n); // 50 we can redeclare that 10 to 50 he takes first that block then global
}

void demo(){
    printf("%d", n);
}

void main(){
    test();
    demo();
}


// for gloable variable example is msrtc bus i.e satara to pune
