#include <stdio.h>

int main()
{
    int choice, accountNumber;
    char holderName[50];
    float balance, amount, interest;
    
    // Initial account setup
    printf("--- Welcome to Simple Banking System ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", holderName);
    printf("Enter Initial Balance: ");
    scanf("%f", &balance);
    
    printf("------------------------------\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Calculate Interest\n");
    printf("4. Display Account Details\n");
    printf("5. Exit\n");
    
    while(1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully! New Balance = %.2f\n", balance);
                break;
                
            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(balance - amount >= 500) {
                    balance -= amount;
                    printf("Withdrawal successful! New Balance = %.2f\n", balance);
                }
                else {
                    printf("Error: Insufficient balance. Minimum balance of 500 must be maintained.\n");
                }
                break;
                
            case 3:
                if(balance >= 10000)
                    interest = (balance * 5) / 100;
                else 
                    interest = (balance * 2) / 100;
                printf("Interest applied! New Balance = %.2f\n", balance+interest);
                break;
                
            case 4:
                printf("----- Account Details -----\n");
                printf("Account Number : %d\n", accountNumber);
                printf("Holder Name    : %s\n", holderName);
                printf("Current Balance: %.2f\n", balance);
                printf("----------------------------\n");
                break;
                
            case 5:
                printf("Exiting... Thank you for banking with us!\n");
                return 0;
                
            default:
                printf("Invalid choice! Please select from 1-5.\n");
        }
    }
}