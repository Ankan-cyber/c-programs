#include <stdio.h>
    int main(){
    int s,i,j,n;
    //range of perfect numbers
    printf("Enter the limit:");

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        s=0;
        for(j=1;j<=i;j++){

            if(i%j==0){

                s=s+j;
            }
        }
        if(s==2*i && i!=0){
        printf("Perfect number in range of 1 to %d: %d\n",n,i);
    }
    }
    
return 0;
}