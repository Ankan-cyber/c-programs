#include <stdio.h>
int main(){
int arr[100],i,flag=0,len;
printf("Enter limit of array:");
scanf("%d",&len);
printf("Enter 5 numbers\n");
for ( i = 0; i < len; i++)
{
   scanf("%d",&arr[i]);
}
for ( i = 0; i < len/2; i++)
{
   if(arr[i]!= arr[len-1-i])
   flag =1;
}
if(flag==0)
printf("Number is palindrom\n");
else
printf("Number is not palindrom\n");
return 0;
}