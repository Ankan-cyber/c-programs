#include <stdio.h>
    int main(){
    int n, r, s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }while(n>0);
    printf("Sum of digits of a number %d\n",s);
return 0;
}