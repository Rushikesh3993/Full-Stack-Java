#include <stdio.h>
#include <conio.h>

void main() {
    int n = 12345;
    int sum = 0;

    while (n > 0)
    {
       int dg = n % 10;
        sum += dg;
        n = n / 10;
    }
    printf("%d" ,sum);
    
}