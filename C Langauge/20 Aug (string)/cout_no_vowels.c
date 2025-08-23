#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
char str[100];
int i = 0;
int count = 0;

// char str[10] = "hello";
// printf("%s",str);

//user input.

printf("Enter a String \n");
gets(str); //insted of scanf

while (str[i] != '\0'){
    if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    count++;
    i++;
}

printf("Number of vowels in the string: %d", count);
return 0;

}