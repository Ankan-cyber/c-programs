// Wap using function to calculate factorial of a given number and the value should be displayed in main function
#include <stdio.h>
int main(){
int a,b;
int factorial(int a);
printf("Enter a number: ");
scanf("%d",&a);
b = factorial(a);
printf("Factorial = %d\n",b);
return 0;
}

int factorial(int a){
    int i,f=1;
    for ( i = 1; i <= a; i++)
    {
        f = f*i;
    }
    return f;
}