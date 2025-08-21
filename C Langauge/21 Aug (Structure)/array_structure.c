#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
} s[5];

void main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Your Roll No:\n ");
        scanf("%d", &s[i].rollno);

        printf("Enter Your name:\n ");
        scanf("%s", &s[i].name);
    }


    printf("Enter Student details: ");
    for (int i = 0; i < 5; i++)
    {
         printf("\n%d %s", s[i].rollno,s[i].name);
    }
    
}