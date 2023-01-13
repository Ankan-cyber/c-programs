#include <stdio.h>
/*1st Pratice
int main(){
int i =4;
int *j = &i;
printf("The address of i %u\n",&i);
printf("The value of i %d\n",*j);
return 0;
}*/


/*2nd Practice 
int main()
{
void ptrfun(int a);
int i = 6;
int *ptr = &i;
printf("The value of i %d\n",i);
printf("The address of i %u\n",ptr);
ptrfun(i);
return 0;
}
void ptrfun(int a)
{
    printf("The address of i %u\n",&a);
}*/


/*3rd practice
int main(){
void tentimes(int *a);
int i = 2;
printf("The value of i before passing the function %d\n",i);
tentimes(&i);
printf("The value of i after passing the function %d\n",i);
return 0;
}
void tentimes(int *a)
{
  int temp = *a;
  temp = temp *10;
  *a = temp;
}*/

/*4th Practice
int main(){
void sumAndAvg(int a, int b, int *sum, float *avg);
int a = 3;
int b = 4;
int sum;
float avg;
sumAndAvg(a,b,&sum,&avg);
printf("Sum %d\n",sum);
printf("Avarage %f\n",avg);
return 0;
}
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = (float)*sum/2;
} */

/*5th Practice
int main(){
int i =35;
int *ptr;
int **ptr_ptr;

ptr = &i;
ptr_ptr = &ptr;

printf("The value of i is %d\n", **ptr_ptr);
return 0;
}*/

/* 6th Practice 
int main(){
void sumAndAvg(int a, int b, int sum, float avg);
int a = 3;
int b = 4;
int sum;
float avg;
sumAndAvg(a,b,sum,avg);
printf("Sum %d\n",sum);
printf("Avarage %f\n",avg);
return 0;
}
void sumAndAvg(int a, int b, int sum, float avg)
{
    sum = a+b;
    avg = (float)sum/2;
}*/