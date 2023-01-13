#include <stdio.h>
int main(){
    int i=1,s=0,r,n;
    do{
        n=i;
        do{
            r=n%10;
            s=s+r*r*r;
            n=n/10;
        }while(n>0);
        if(s==i)
        printf("%d ",i);
        s=0;
        i++;
    }while(i<1000);
return 0;
}