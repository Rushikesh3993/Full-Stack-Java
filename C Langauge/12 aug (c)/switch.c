#include <stdio.h>

void main()
{
    int num = 10;

    switch (num) // fast processing in the switch as compare to if else
    {
    case 10:
        printf("Number is 10");
        break;

    case 20:
        printf("Number is 20");
        break;

    case 30:
        printf("Number is 30");
        break;

    default:
        printf("Number is Not Found");
    }
}