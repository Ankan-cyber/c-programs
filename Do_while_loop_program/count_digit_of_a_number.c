#include <stdio.h>
    int main(){
    int n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        n=n/10;
        c++;
    }while(n!=0);
    printf("Number of digits:%d",c);
    
return 0;
}