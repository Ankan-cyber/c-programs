#include <stdio.h>
    int main(){
    int n,i=1;
    long int f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial:%ld\n",f);
return 0;
}