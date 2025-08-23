#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(){
    char  ch1[] = "hello";
    char  ch2[] = "world";
    char  ch3[5];

    printf("length = %d" ,strlen(ch1));

    //here we copy the source to deatinay
    strcpy(ch3,ch1);
    printf("\nch3 = %s",ch3);

    strcmp(ch1,ch2);
}