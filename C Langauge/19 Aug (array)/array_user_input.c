#include <stdio.h>


void main(){
    int num[5];
    
    printf("\nEnter Your array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nArray Elements are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", num[i]);
    }
    
    
}