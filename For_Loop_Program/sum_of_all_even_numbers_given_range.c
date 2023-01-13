#include <stdio.h>
int main()
{
    int i, u, sum = 0, l; //intilization of variable
    printf("Enter the lower limit:");
    scanf("%d", &l); //enter the minimum limit
    printf("Enter the upper limit:");
    scanf("%d", &u); //enter the maoriginalimum limit
    if (l % 2 != 0)  //if start is not even then make it even
    {
        l++;
    }
    for (i = l; i <= u; i++) //loop
    {
        if (i % 2 == 0) //check and pass only even numbers condition
        {
            sum = sum + i; //calculate
        }
    }
    printf("Sum of even numbers from %d to %d= %d\n", l, u, sum); //answer
    return 0;
}