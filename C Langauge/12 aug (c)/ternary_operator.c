#include <stdio.h>

void main(){  
    int num;

    printf("Enter Your Number: ")
    scanf("%d",&num);

    (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");
}