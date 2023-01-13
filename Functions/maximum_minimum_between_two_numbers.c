// Wap to find maximum and minimum using functions
#include <stdio.h>
int main(){
float num1, num2, maxi,mini;
float max(float num1, float num2);
float min(float num1, float num2);
printf("Enter two numbers\n");
scanf("%f%f",&num1,&num2);
maxi = max(num1, num2);
mini = min(num1, num2);
printf("Maximum is %.2f\n",maxi);
printf("Minimum is %.2f\n",mini);
return 0;
}

float max(float num1, float num2){
    return (num1>num2) ? num1 : num2;
}

float min(float num1, float num2){
    return (num1>num2) ? num2 :num1;
}