#include <stdio.h>
    int main(){
    int i,n1=1,n2,n3,t;
    printf("Enter the number of elements:");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
    }
return 0;
}