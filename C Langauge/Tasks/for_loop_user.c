#include <stdio.h>
#include <conio.h>

void main(){
    int start, end;
    printf("Start: ");
    scanf("%d", &start);

    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("\t%d", i);
    }
    
}