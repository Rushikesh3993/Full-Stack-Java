#include <stdio.h>

void main()
{
    char name[100], city[100];

    // printf("Enter  Your Name: ");
    // scanf("%s", &name); 
    // printf("Enter Your City: ")
    // scanf("%s" , &city);


    printf("Enter  Your Name and city: ");
    scanf("%s%s", &name, &city); 

   

    printf("My name is %s and i am form %s city", name ,city);
}