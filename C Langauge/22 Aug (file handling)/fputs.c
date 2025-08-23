#include <stdio.h>

void main(){
    FILE *p;
    p = fopen("myfile.txt", "r");

    char arr[200];

    fputs("Welcome to file handling",p);

    fclose(p);
}