#include <stdio.h>

void main() {
    FILE *p;

    p = fopen("myfile.txt","w");

    fputs("Good morning",p);

    fseek(p, 7, SEEK_SET);

    fputs("welcome",p);

    fclose(p);
}