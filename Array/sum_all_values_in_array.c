//Write a program to sum all the values in the array
#include <stdio.h>
int main(){
int original[5],i,s=0;
printf("Enter 5 numbers\n");
for (i = 0; i < 5; i++)
{
    scanf("%d",&original[i]);
}
printf("Sum of all numbers are:");
for ( i = 0; i < 5; i++)
{
    s=s+original[i];
}
printf(" %d\n",s);
return 0;
}