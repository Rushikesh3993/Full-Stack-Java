#include <stdio.h>

void main() {
    int n1 = 13;

    // int *p1 = 1; qury ask to chatgpt okay

    int *p1 = &n1;

    if (*p1 % 2 == 0)
    {
        printf("this is even number. ");
    }
    else{
        printf("this is odd number. ");
    }
    
}