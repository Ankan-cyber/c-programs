#include <stdio.h>
int main(){
    int i,j,m;
    for(i=1;i<=10;i++){
        for(m=1;m<=10;m++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
return 0;
}