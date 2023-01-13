#include <stdio.h>
    int main(){
    int n,i,j,s=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                s++;
            }
        }
        if(s==2){
            printf("%d\n",i);
        }
    }
    s=0;
return 0;
}