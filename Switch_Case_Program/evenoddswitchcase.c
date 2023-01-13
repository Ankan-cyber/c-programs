//check a number is even or odd using switch case
#include <stdio.h>

int main()
{
    int num,r;
    printf("Enter an number: ");
    scanf("%d", &num);
  r=num%2;
    switch(r){
    case 0:
       printf("%d is even number.",num);
       break;
     case 1:
          printf("%d is odd number.",num);
  }  
  	return 0;
}

