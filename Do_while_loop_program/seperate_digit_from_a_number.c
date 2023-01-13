#include <stdio.h>
    int main(){
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n=n/10;
        printf("Digits of a number %d \n",r);
    } while (n>0);
    
return 0;
}