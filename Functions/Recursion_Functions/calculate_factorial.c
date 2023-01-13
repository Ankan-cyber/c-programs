// Wap to calculate factorial of a given number using recursion function
#include <stdio.h>
int main(){
int n;
long int f;
long int getFacto(int n);

printf("Enter a number: ");
scanf("%d",&n);
f = getFacto(n);
printf("Factorial = %ld\n",f);
return 0;
}

long int getFacto(int n){
    if (n == 1)
    return 1;
    else
    return n*getFacto(n-1);
}