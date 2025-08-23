#include <stdio.h>

void main(){
    FILE *p;
    p = fopen("myfile.txt", "r");

    char arr[200];

    while(fscanf(p,"%s",arr) != EOF){
        printf("%s", arr);
    }

    rewind(p);
    
    while(fscanf(p,"%s",arr) != EOF){
        printf("%s", arr);
    }

    fclose(p);
}