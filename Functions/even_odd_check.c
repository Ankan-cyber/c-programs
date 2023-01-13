// Wap to check whether a number is even or odd using functions

#include <stdio.h>
int main(){
int num, check;
int getEven(int num);
printf("Enter a number: ");
scanf("%d",&num);
check = getEven(num);
if (check == 0)
{
   printf("Number is even\n");
}else{
    printf("Number is odd\n");
}

return 0;
}

int getEven(int num){
    int flag =0;
    if(num%2 == 0){
        return flag =0;
    }else{
        return flag = 1;
    }
}