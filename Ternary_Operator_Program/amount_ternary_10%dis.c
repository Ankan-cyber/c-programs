#include <stdio.h>
    int main(){
    float original,d;
    printf("Enter a number\n");
    scanf("%f", &original);
    d=(original > 100) ? original*.10:0;
    printf("Discount=%f\n",d);
return 0;
}