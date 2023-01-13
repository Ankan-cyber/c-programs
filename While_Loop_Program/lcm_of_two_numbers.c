// find lcm of two numbers
#include <stdio.h>
int main(){
    int num1,num2,maoriginal,lcm=1,i;
    printf("Enter a two numbers:");
    scanf("%d%d",&num1,&num2);
    maoriginal = (num1 > num2) ? num1 : num2; // Checking maximum
    
    i=maoriginal;
    
    while(1){
    if(i%num1==0 && i%num2==0){
      lcm=i;
      break;
    }
    i=i+maoriginal;
}

printf("LCM of %d and %d = %d\n",num1,num2,lcm);
return 0;
}