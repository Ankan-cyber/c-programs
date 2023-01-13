#include <stdio.h>
int main()
{
float num1, num2;
float *ptr1, *ptr2;
float sum, div, sub, multi;
ptr1 = &num1;
ptr2 = &num2;
printf("Enter two numbers: ");
scanf("%f %f",ptr1,ptr2);
sum = (*ptr1) + (*ptr2);
sub = (*ptr1) - (*ptr2);
multi = (*ptr1) * (*ptr2);
div = (*ptr1) / (*ptr2);
printf("Sum = %.2f\n", sum);
printf("Difference = %.2f\n",sub);
printf("Product = %.2f\n",multi);
printf("Quotient = %.2f\n", div);
return 0;
}