//Write a program to enter some numbers and display the even numbers from the array
#include <stdio.h>
int main(){
int i,original[5];
printf("Enter 5 numbers\n");
for ( i = 0; i < 5; i++)
{
   scanf("%d",&original[i]);
}
printf("Even Numbers are\n");
for ( i = 0; i < 5; i++)
{
    if(original[i]%2 == 0){
        printf("%d\t",original[i]);
    }
}

return 0;
}