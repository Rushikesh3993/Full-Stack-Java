#include <stdio.h>

void main(){
    int num[2][2];

    printf("\nEnter your 2d array elements: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
              scanf("%d",&num[i][j]);
        }
    }

     for (int i = 0; i < 2; i++) //row
    {
        for (int j = 0; j < 2; j++) // col
        {
              printf("%d  ",num[i][j]); // add space "%d  " in this to add space
        }
        printf("\n"); // here goes new line
    }
    
}