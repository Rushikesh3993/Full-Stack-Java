#include <stdio.h>

void main()
{
    int n1 = 10;
    int n2 = 20;
    printf("Before swap : %d %d", n1, n2);

    int *p1 = &n1;
    int *p2 = &n2;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nSwaping completed: %d %d", *p1, *p2);
}