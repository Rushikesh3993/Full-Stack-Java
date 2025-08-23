#include <stdio.h>

void main(){

    int *ptr = NULL;

    // int num = 10;
    // ptr = &num;

    if (ptr == NULL) //if(ptr == '\0')
    {
        printf("Null Pointer");
    }else
    {
        printf("%d", *ptr);
    }
    
    
}