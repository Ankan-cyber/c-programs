#include <stdio.h>
int main(){
int n,l,f;
printf("Enter a number:");
scanf("%d",&n);
l=n%10;
f=n;
while(f>=10){
    f=f/10;
}
printf("First Digit= %d\n",f);
printf("Last Digit= %d",l);
return 0;
}
