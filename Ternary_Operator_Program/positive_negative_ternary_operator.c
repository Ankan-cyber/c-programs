#include <stdio.h>
    int main(){
    int original;
    
    printf("Enter a number\n");
    scanf("%d",&original);
    
    (original>0)?printf("%d is positive\n",original):printf("%d is negative\n",original);

return 0;
}