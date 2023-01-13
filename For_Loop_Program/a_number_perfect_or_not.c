#include <stdio.h>
    int main(){
    //here perfect means a if factor of a given number is sum and back to the orginal number
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if(n%i==0){
        s=s+i;
        }
    }
    if(s==n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
    }    
return 0;
}