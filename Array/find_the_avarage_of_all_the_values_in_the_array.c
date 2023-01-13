#include <stdio.h>
int main(){
int i,s=0,x[100],lim;
float avg;
printf("Enter the limit of array:\n");
scanf("%d",&lim);
printf("Enter %d Numbers\n",lim);
for ( i = 0; i < lim; i++)
{
    scanf("%d",&x[i]);
}

for ( i = 0; i < lim; i++)
{
    s=s+x[i];
}
avg = (float)s/lim;
printf("Avarage is : %.3f",avg);
return 0;
}