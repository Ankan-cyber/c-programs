// Wap to calculate square of a number using function
#include <stdio.h>
int main(){
int a,b;

int square(int); //function declaration
printf("Enter a number: ");
scanf("%d",&a);

b = square(a); //calling function
printf("Square = %d\n",b);

return 0;
}

int square(int n){
    return n*n;
}