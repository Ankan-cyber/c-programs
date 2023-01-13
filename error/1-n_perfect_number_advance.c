#include <stdio.h>
    int main(){
    int s=0,i,j,n;
    //range of perfect numbers
    printf("Enter the limit:");

    scanf("%d",&n);

    for(i=0;i<=n;i++){

        for(j=1;j<=i;j++){

            if(i%j==0){

                s=s+j;
            }
        }
        if(s==i){
        printf("Perfect number in range of 1 to %d: %d\n",n,i);
    }
    }
    s=0;
return 0;
}