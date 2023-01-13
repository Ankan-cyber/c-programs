//write a program to input integer values and double their values and display them in correct order
#include <stdio.h>
int main(){
int original[7],i;
printf("Enter 7 integer values:\n");
for ( i = 0; i < 7; i++)
{
    scanf("%d",&original[i]);
}
printf("Double the value of the input numbers are:\n");
for ( i = 0; i < 7; i++)
{
    printf("%d\t",original[i]*2);
}

return 0;
}