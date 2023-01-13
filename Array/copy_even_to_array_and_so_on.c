//write a program to input numbers and store them in a array and copy even numbers to even array and odd numbers to odd array
#include <stdio.h>
int main(){
int original[5],even[5],odd[5],i,j=0,k=0;
printf("Enter 5 numbers\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&original[i]);
}
printf("Original Array\n");
for ( i = 0; i < 5; i++)
{
    printf("%d\t",original[i]);
}
for ( i = 0; i < 5; i++)
{
    if(original[i]%2 == 0){
    even[j++]=original[i];
    }
    else{
    odd[k++]=original[i];
    }
}
printf("\nEven Array\n");
for ( i = 0; i < j; i++)
{
 printf("%d\t",original[i]);
}
printf("\nOdd Array\n");
for ( i = 0; i < k; i++)
{
  printf("%d\t",original[i]);
}
if(k>j){
    printf("\nOdd is greater\n");
}
else if(k<j){
    printf("\nEven is grater\n");
}
else{
    printf("\nboth array is equal\n");
}
return 0;
}