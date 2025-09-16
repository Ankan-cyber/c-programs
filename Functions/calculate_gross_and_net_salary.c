// Wap to calculate gross and net salary from a given basic salary using function

#include <stdio.h>
int main(){
float basic,hra,da,pf,gross,net;

float fda(float);
float fhra(float);
float fpf(float);
printf("Enter basic salary: ");
scanf("%f",&basic);
da = fda(basic);
hra = fhra(basic);
pf = fpf(basic);

gross = basic + da + hra;
printf("Gross salary = %.3f\n",gross);

net = gross - pf;
printf("Net salary = %.3f\n",net);
return 0;
}

float fda(float n){
    return n*0.5;
}
float fhra(float n){
    return n*0.15;
}
float fpf(float n){
    return n*0.06;
}