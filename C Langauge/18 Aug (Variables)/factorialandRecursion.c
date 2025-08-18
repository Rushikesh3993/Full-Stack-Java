#include <stdio.h>

int factorial(int n)
{
    if(n == 0){
        return 1;
    }else if (n == 1)
    {
        return 1;
    }else{
        return n * factorial(n - 1);// recusrion here we call the recursion 
    }
}

void main()
{
    printf("%d",factorial(5)); //here we call the function
}

// void main(){
//     int num  = 5;
//     int i , result = 1;

//     for(i = 5; i >= 1; i--){
//         result = result * i;
//         // 5 = 1 * 5
//         // 20 = 5 * 4
//         // 60  = 20 * 3
//         // 120  =  60 * 2
//         // 120 = 120 * 1
//     }

//     printf("%d", result);
// }
