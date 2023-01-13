#include <stdio.h>
int main(){
int x[100],i,in,flag=0,lim;
printf("Enter the limit of array:\n");
scanf("%d",&lim);
printf("Enter %d Numbers\n",lim);
for ( i = 0; i < lim; i++)
{
    scanf("%d",&x[i]);
}
printf("Enter a value you want to search: ");
scanf("%d",&in);
for ( i = 0; i < lim; i++)
{
    if(x[i]==in){
        printf("Found at %d\n",i+1);
        flag =1;
    }
}
if (flag == 0)
{
   printf("%d is not found",in);
}

return 0;
}