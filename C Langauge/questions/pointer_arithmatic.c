#include <stdio.h>

void main(){
    int num1 = 10;
    int num2 = 20;

    int *p1 = &num1;
    int *p2 = &num2;

    int result = *p1 + *p2;
    printf("result: %d", result);

    
}