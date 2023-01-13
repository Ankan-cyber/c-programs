//Wap to calulate power of a number
#include <stdio.h>
int main(){
int base, expo, rsl;
int getPower(int base, int expo);

printf("Enter a base number: ");
scanf("%d",&base);
printf("Enter an exponent: ");
scanf("%d",&expo);

rsl = getPower(base, expo);
printf("Answer = %d\n",rsl);
return 0;
}

int getPower(int base, int expo){
    int i, y=1;
    for ( i = 1; i <= expo; i++)
    {
        y = y*base;
    }
   return y;
}