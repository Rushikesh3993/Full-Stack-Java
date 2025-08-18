#include <stdio.h>


void swap(int *a, int *b){
    printf("\nBefore swaping a is %d and b is %d ",*a,*b);
    int temp = (*a);
    (*a) = (*b);
    (*b) = temp;
    printf("\nAfter swaping a is %d and b is %d ",*a,*b);
}

void main(){

    int a = 10 , b = 20;
    swap(&a,&b);

}