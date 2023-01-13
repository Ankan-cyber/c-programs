//write a program to display the content of the array in reverse order
#include <stdio.h>
int main(){
int original[5],i;
printf("Enter 5 numbers\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&original[i]);
}
printf("Numbers in reverse order:\n");
for ( i = 4; i >= 0; i--)
{
    printf("%d\n",original[i]);    
}

return 0;
}