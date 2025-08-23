#include <stdio.h>

void main()
{

    FILE *p;

    char name[100];
    char city[50];

    fprintf("Enter your name: ");
    gets(name);

    fprintf("Enter Your city: ");
    gets(city);

    

    p = fopen("myfile.txt" ,"w");

    fprintf(p, "Your name is %s and your city is %s", name, city);

    fclose(p);
}