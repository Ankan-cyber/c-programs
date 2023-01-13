#include <stdio.h>
    int main(){
    int n,r,s1=0,s2=0;
     printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n=n/10;
        if(r%2==0)
        s1=s1+r;
        else
        s2=s2+r;
    }while(n>0);
    printf("Sum of even digits %d\n",s1);
    printf("Sum of odd digits %d\n",s2);
return 0;
}