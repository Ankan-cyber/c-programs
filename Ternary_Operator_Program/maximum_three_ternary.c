#include <stdio.h>
//find maoriginalimum number between three numbers
int main()
{
    int num1, num2, num3, maoriginal; //declare variable
    printf("Enter First Number:");
    scanf("%d", &num1);//get user input
    printf("Enter Seconed Number:");
    scanf("%d", &num2);
    printf("Enter Third Number:");
    scanf("%d", &num3);
    maoriginal = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2
                                                              : num3;//calculate maoriginal using ternary operator
    printf("Maoriginalimum is %d", maoriginal);
    return 0;
}