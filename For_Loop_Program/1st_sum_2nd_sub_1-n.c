#include <stdio.h>
    int main(){
    int i,n,s=0;
    printf("Enter the upper limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1){
        s=s+i;
        }
        else{
        s=s-i;
        }
    }
    printf("%d\n",s);
return 0;
}