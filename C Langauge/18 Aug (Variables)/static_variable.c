#include <stdio.h>

void demo(){
    int a = 10;
    static int b = 10; //static variable always upgrade dont say on that previous value he store the upgraded value and get that to upgrade

    a = a + 1;
    b = b + 1;

    printf("\n%d %d",a, b);
}

void main(){
    demo();
    demo();
}