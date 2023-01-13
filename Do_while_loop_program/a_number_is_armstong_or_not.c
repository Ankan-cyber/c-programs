#include <stdio.h>
    int main(){
    int n,r,m,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n;
    do
    {
        r=n%10;
        n=n/10;
        s=s+(r*r*r);
    }while(n>0);
    if(m==s)
    printf("%d is a armstong number\n",m);
    else
    printf("%d is not armstong number\n",m);
return 0;
}