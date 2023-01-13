#include <stdio.h>
int main()
{
    int i, u, sum = 0;//intilization of variable
    printf("Enter the upper limit:");
    scanf("%d", &u);//enter the maoriginal limit
    for (i = 1; i <= u; i++)//loop
    {
        sum = sum + i;//calculation
    }
    printf("Sum for first %d natural numbers=%d\n", u, sum);//answer
    return 0;
}