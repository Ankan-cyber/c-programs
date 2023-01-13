//write a c program to enter the price and amount of a product if the total price eoriginalceeds 200 then give 10% discount and display the net amount
#include <stdio.h>

int main()
{
	  float p,q,a,d,n;
    printf("What is the pricing of product in per kg\n");
    scanf("%f", &p);
    printf("Quantity of your product in per kg\n");
    scanf("%f", &q);
    a=p*q;
    if(a>200){
        d=a*10/100;
        n=a-d;
        printf("The net amount is %.2f\n", n);
        printf("You saved %.2f", d);
    }
    else{
        printf("Your total amount is %.2f",a);
    }
    
	
	return 0;
}
