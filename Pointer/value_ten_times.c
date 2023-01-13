//Write a program to change the value of a variable to ten times of its current value.
// Write a function and pass the value by reference
#include <stdio.h>
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
}