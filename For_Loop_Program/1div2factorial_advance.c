#include <stdio.h>
//1/2factorial+2/3factoraial+3/4factorial+n
    int main(){
        float s=0;
        int i,n,j,f=1;
        printf("Enter the upper limit:");
        scanf("%d",&n);
        for (i = 1; i <= n; i++)
        {
            for (j=1;j<=n;j++){
                f=f*j;
                s=s+(float)i/f;
                f=1;
            }
        }
        printf("Answer=%.3f\n",s);
        return 0;
}