#include <stdio.h>
#include <conio.h>

void main(){
    char ch;

    printf("Enter The character  or Number: ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("The Charcter is in lowercase");
    }else if (ch >= 'A' && ch <= 'Z')       
    {
        printf("The Charcter is in Uppercase");
    }else if (ch >= 0 && ch <= 9)
    {
        printf("This are the numbers");
    }else
    {
        printf("This is the special symbol");
    }
    
    
    
}