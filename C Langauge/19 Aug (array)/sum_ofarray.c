#include <stdio.h>

 void main(){

    int num[5];
    int sum = 0;

    printf("\nEnter Your array elements: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",num[i]);
        sum = sum + num[i];
    }

    printf("sum=%d\t", sum);
    
 }