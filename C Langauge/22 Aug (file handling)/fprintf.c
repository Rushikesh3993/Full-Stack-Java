#include <stdio.h>

void main(){
    FILE *p;

    // p = fopen("myfile.txt","w");
    p = fopen("myfile.txt","a"); // fopen to oopen the file

    fprintf(p, "have a nice day");// fprintf to write any data on that

    fclose(p);// fclose to close that file.


}