#include <stdio.h>

void main(){
    int num , choice;
    printf("Enter Your Number: \n");
    scanf("%d", &num);
    printf("1. Check Even Or odd \n 2. Check Positive or Negative");
    scanf("%d", &choice);

    switch (choice)
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