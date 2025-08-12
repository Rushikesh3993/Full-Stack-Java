#include <stdio.h>

void main(){
    int num;
    printf("Enter Your Number: ");
    printf("1. Check Even Or odd \n 2. Check Positive or Negative");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        (num % 2 == 0) ? printf("Even Number"): printf("Odd Number");
        break;

    case 2:
        (num >= 0) ? printf("Positive Number"): printf("Negative Number");
        break;
    
    default:
        printf("Your choice is Incorrect");
        break;
    }


}