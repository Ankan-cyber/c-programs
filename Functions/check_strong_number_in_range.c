#include <stdio.h>
int main(){

int faget(int r);
int range1,range2,i,k,r,s=0,f=1;
printf("Enter upper limit: ");
scanf("%d",&range1);
printf("Enter lower limit: ");
scanf("%d",&range2);
for ( i = range1; i <= range2; i++)
{
k = i;
while (k != 0)
{
r = k%10;
f = faget(r);
k =k/10;
s= s+f;
}
if(s == i){
printf("%d, ",i);
}
s = 0;
}
return 0;
}

int faget(int r){
    int re =1;
    for (int i = 1; i <= r; i++)
    {
       re = re*i;
    }
 return re;   
}
