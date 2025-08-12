#include <stdio.h>


void main () {
    int num;

    printf("Enter  Your Number: ");
    scanf("%d",&num);//10

    // printf("\n%d",num); //10
    // printf("\n%d",&num);  //memory address we use & for that 

    if (num % 2 == 0)
    {
        printf("The Number is Even ") //true
    }else
    {
        printf("The Number is Odd "); //false
    }
    
    
    
}