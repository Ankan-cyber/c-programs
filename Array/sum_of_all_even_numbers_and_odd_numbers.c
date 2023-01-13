//write a program to display the sum of all even numbers and odd numbers
#include <stdio.h>
int main(){
int original[5], i, even=0, odd=0;
printf("Enter 5 numbers\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&original[i]);
}
for ( i = 0; i < 5; i++)
{
    if(original[i]%2 == 0)
    {
        even=even+original[i];
    }
    else
    {
        odd=odd+original[i];
    }
}
printf("Sum of even numbers are: %d\n",even);
printf("Sum of odd numbers are: %d\n",odd);
return 0;
}