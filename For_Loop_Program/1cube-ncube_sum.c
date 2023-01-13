#include <stdio.h>
    int main(){
    int n,i,s=0;
    printf("Enter the upper limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+(i*i*i);
    }
    printf("The Cube sum of 1 to %d is %d\n",n,s);
return 0;
}