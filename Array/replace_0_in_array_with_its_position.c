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
for ( i = 0; i < lim; i++)
{
    if(x[i]==0){
        x[i]=i+1;
        printf("found at %d\n",x[i]);
        flag =1;
    }
}
if (flag == 0)
{
   printf("0 is not found");
}

return 0;
}