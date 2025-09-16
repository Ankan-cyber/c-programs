#include <stdio.h>

getSwap(int *a, int *b);

int main(){
int x,y;
printf("Enter x and y values to swap:");
scanf("%d %d",&x,&y);
printf("The value of x and y before swap is %d and %d\n",x,y);
getSwap(&x,&y);   // will work due to call by reference
printf("The value of x and y after swap is %d and %d\n",x,y);
return 0;
}

getSwap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}