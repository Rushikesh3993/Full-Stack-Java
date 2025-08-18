#include <stdio.h>
#include <conio.h>

void main(){
    int choice;
    int balance = 100;
    int amount;
    printf("ATM Simulation \n");
    printf("1. Withdraw\n");
    // printf("2. Deposit\t");
    printf("2. Deposit\n");
    printf("3. Check Balance");

    printf("\nEnter Your Choice: ");
    scanf("%d" ,&choice);

    switch (choice)
    {
    case 1:
        printf("Enter Your Amout: ");
        scanf("%d", &amount);
        if(amount <= balance){
           balance - amount;
           printf("Your Withdrawal is completed. balance:  %d" , balance);
        }else
        {
            printf("You Dont Have Sufficent balance");
        }
        break;
    
    case 2:
        printf("Enter Your Amout To deposit: ");
        scanf("%d", &amount);
        balance += amount;
        printf("Money Deposited. balance : %d", balance);
        break;
    
    case 3:
        printf("Check Your Balance: %d" , balance);
        break;
    
    default:
    printf("Invalid Choice");
        break;
    }
}