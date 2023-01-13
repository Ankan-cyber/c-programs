#include <stdio.h>
    int main(){
    int n,i,s=0;
    printf("Enter the upper limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of the 1 to %d: %d\n",n,s);
return 0;
}