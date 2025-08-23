#include <stdio.h>

void main(){
    FILE *p;
    p = fopen("myfile.txt", "r");

    char arr[200];

   fgets(arr,200,p);
   printf("%s",arr);
   

    fclose(p);
}