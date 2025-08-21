#include <stdio.h>
#include <string.h>

struct student
{
    int  rollno;
    char name[20];
}s1;

void main() {
    printf("Enter Your Roll No:\n ");
    scanf("%d",&s1.rollno);

    printf("Enter Your name:\n ");
    scanf("%s", &s1.name);

    printf("\nRoll No: %d", s1.rollno);
    printf("\nName: %s" , s1.name);

}
