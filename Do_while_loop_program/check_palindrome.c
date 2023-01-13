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
        s=s*10+r;
    }while(n>0);
    if(m==s)
    printf("Number is palindrome\n");
    else
    printf("Number is not palindrome\n");
return 0;
}