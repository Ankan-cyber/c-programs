#include <stdio.h>
    int main(){
    int i, u, l, sum=0;
    printf("Enter the lower limit:");
    scanf("%d",&l);
    printf("Enter the upper limit:");
    scanf("%d",&u);
    if(l%2==0)
    {
        l++;
    }
    for(i=l;i<=u;i++){
        if(i%2!=0)
        {
            sum=sum+i;
        }    
    }
    printf("Sum of all odd numbers from %d to %d= %d\n",l,u,sum);
return 0;
}