#include <stdio.h>
    int main(){
    int i, u, sum = 0, l;//intilization of variable
    printf("Enter the lower limit:");
    scanf("%d", &l);//enter the minimum limit
    printf("Enter the upper limit:");
    scanf("%d", &u);//enter the maoriginalimum limit
    for (i = l; i <= u; i++)//loop
    {
        sum=sum+i;
    }
     printf("Sum of natural numbers from %d to %d= %d\n", l, u, sum);//answer
return 0;
}