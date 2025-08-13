#include <stdio.h>
#include <conio.h>

void main(){
    int start, end;
    int sum = 0;
    printf("Start: ");
    scanf("%d", &start);

    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        sum += i;
        // printf("\t%d", i);
    }
     printf("\t%d", sum);
}