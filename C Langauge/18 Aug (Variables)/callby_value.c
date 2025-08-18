#include <stdio.h>

void show(int num){
    printf("\nBefore adding=%d",num); //10
    num=num+10;
    printf("\nAfter adding=%d",num); // 20
}

int main(){
    int a = 10;
    printf("\nBefore Function call a=%d",a); //10 

    show(a);

     printf("\nAfter Function call a=%d",a); // 10

     return 0;
}