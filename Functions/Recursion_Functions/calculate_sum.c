// Wap to claculate sum of a series of numbers using recursion fuction
#include <stdio.h>
int main(){
int n, s;
int getSum(int n);
printf("Enter limit: ");
scanf("%d",&n);
s = getSum(n);
printf("Answer = %d\n",s);
return 0;
}

int getSum(int n){
    if (n == 1)
    return 1;
    else
    return n+getSum(n-1);
      
}