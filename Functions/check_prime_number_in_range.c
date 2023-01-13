#include <stdio.h>
int main(){
int checkPrime(int n);
int Printprime(int range1, int range2);
int range1, range2;
printf("Enter starting number: ");
scanf("%d",&range1);
printf("Enter ending number: ");
scanf("%d",&range2);
Printprime(range1, range2);
return 0;
}

int Printprime(int range1, int range2){
    printf("All prime numbers between %d to %d are: ",range1, range2);
    while (range1 <= range2)
    {
        if(checkPrime(range1)){
            printf("%d\n", range1);
        }
        range1++;
    }
   return 0;
}

int checkPrime(int n){
    int i;
    for ( i = 2; i < n/2; i++)
    {
      if(n%i == 0){
          return 0;
      }
    }
   return 1; 
}