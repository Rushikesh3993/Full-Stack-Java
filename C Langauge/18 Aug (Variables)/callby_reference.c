#include <stdio.h>

void show(int *num){ //pointer is use to get the address of that 
    printf("\nBefore adding=%d",*num); //10
    (*num)+=10;
    printf("\nAfter adding=%d",*num); // 20
}

int main(){
    int a = 10;
    printf("\nBefore Function call a=%d",a); //10 

    show(&a);  //call by reference

     printf("\nAfter Function call a=%d",a); // 20

     return 0;
}