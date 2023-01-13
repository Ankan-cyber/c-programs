/*
2
5 10
17 26 37
print this pattern
*/
#include <stdio.h>
int main(){
    int i,j,k=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k*k+1);//logic
            k++;
        }
        printf("\n");
    }
return 0;
}