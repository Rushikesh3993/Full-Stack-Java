#include <stdio.h>


void even_odd(int *p1){

    //  int *p1 = &n;

    if (*p1 % 2 == 0)
    {
        printf("this is even number. ");
    }
    else{
        printf("this is odd number. ");
    }
    
}
void main() {
    int n1 = 13;
 
    even_odd(&n1);
    // int *p1 = 1; qury ask to chatgpt okay

   
}