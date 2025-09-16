//Wap 1+2/2!+3/3!........n times using recursion function
#include <stdio.h>
int main(){
float n;
float rsl;
float sum(float);
float fuck(float);
printf("Enter limit: ");
scanf("%f",&n);
rsl = sum(n);
printf("Answer = %.3f",rsl);
return 0;
}
float fuck(float n){
    if(n ==1)
    return 1;
    else
    return n*fuck(n-1);
}

float sum(float n){
    if(n == 1)
    return 1;
    else 
    return n/fuck(n)+sum(n-1);
}
