#include <stdio.h>
int main(){
int getprime(int n);
int Printprime(int range1, int range2);
int range1, range2;
printf("Enter upper limit: ");
scanf("%d",&range1);
printf("Enter lower limit: ");
scanf("%d",&range2);
Printprime(range1, range2);
return 0;
}

int Printprime(int range1, int range2){
    printf("All prime numbers between %d to %d are: ",range1, range2);
    while (range1 <= range2)
    {
        if(getprime(range1)){
            printf("%d,", range1);
        }
        range1++;
    }
   return 0;
}

int getprime(int n){
    int i;
    for ( i = 2; i < n/2; i++)
    {
      if(n%i == 0){
          return 0;
      }
    }
   return 1; 
}