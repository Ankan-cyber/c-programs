//Wap 1+2/2!+3/3!........n times using recursion function
#include <stdio.h>
int main(){
float n;
float rsl;
float sum(float);
float facto(float);
printf("Enter limit: ");
scanf("%f",&n);
rsl = sum(n);
printf("Answer = %.3f\n",rsl);
return 0;
}
float facto(float n){
    if(n ==1)
    return 1;
    else
    return n*facto(n-1);
}

float sum(float n){
    if(n == 1)
    return 1;
    else 
    return n/facto(n)+sum(n-1);
}
