#include <stdio.h>
int main(){
char name[50],coffee[50],payment[100];
int quantity;
printf("Hello, welcome to ANKAN'S NETWORK Shop!!!!!!!!!\n");
printf("What is your name?\n");
gets(name);
printf("Hello %s, thank you so much for coming in today.\n\n",name);
printf("%s, what would you like from our menu today? Here is what we are serving.\n\nBlack Coffee, Espresso, Latte, Cappucino, Americano:\n",name);
gets(coffee);


printf("How many coffees would you like?\n");
scanf("%d",&quantity);
printf("Thank you. Your total is: $%d\n",quantity*10);
printf("How would you like to pay? Cash, Credit card, Debit card or Upi\n");
scanf("%s",&payment);
printf("Ok Thanks\n");
printf("Sounds good %s, we'll have your %d %s ready for you in a moment\a\n",name,quantity,coffee);
return 0;
}