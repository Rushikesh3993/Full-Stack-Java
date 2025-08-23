#include <stdio.h>


void main(){
    int num = 10;
   // int *p = &num; //pointer

    // another syntax
    int *p;
    p = &num;

    printf("\n%d",num); //10
    printf("\n%d", *p);  //10 pointer can get the get value of that object
    printf("\n%d", p);   // memory address
}