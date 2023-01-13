#include <stdio.h>
//check a number is positive or negative or zero
    int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    switch(num>0){
        case 1:
        printf("%d is positive.\n",num);
        break;
        case 0:
        switch(num<0){
            case 1:
           printf("%d is negative.\n", num);
            break;
            case 0:
            printf("%d is zero.\n", num);
            break;
        }
        break;
  }
return 0;
}