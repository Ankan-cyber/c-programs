#include <stdio.h>
    int main(){
    //1/2+1/3+1/4.....1/n+1 in for loop
    float n,i,s=0;
    printf("Enter the upper limit:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/i++;
    }
    printf("Answer:%f",s);
return 0;
}