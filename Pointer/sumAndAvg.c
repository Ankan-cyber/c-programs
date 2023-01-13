// Write a program using a function which calculates the sum and average of two numbers.
// Use Pointers and print the values of sum and average in main function
#include <stdio.h>
int main(){
void sumAndAvg(int a, int b, int *sum, float *avg);
int a = 3;
int b = 4;
int sum;
float avg;
sumAndAvg(a,b,&sum,&avg);
printf("Sum %d\n",sum);
printf("Avarage %f\n",avg);
return 0;
}
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = (float)*sum/2;
}