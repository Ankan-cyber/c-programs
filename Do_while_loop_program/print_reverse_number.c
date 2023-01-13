#include <stdio.h>
    int main(){
    int r,n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }while(n>0);
    printf("Reverse:%d\n",s);

return 0;
}