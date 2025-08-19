#include <stdio.h>
#include <conio.h>


int sumofdigit(int n){
   if (n == 0)  // base case
        return 0;
    return (n % 10) + sumofdigit(n / 10);  // recursive step
    
}


int main(){
   printf("%d" , sumofdigit(1234));
   return 0;
}
