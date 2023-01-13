#include <stdio.h>
int main(){
int i = 34;
// float a = 24.7;
// float *b = &a; //b will now store the address of a
int *j = &i; //j will now store the address of i
// int **k = &j;
// printf("The value of a %f\n",a);
// printf("The value of a %f\n",*b);
// printf("The address of a %u\n",&a);
// printf("The address of a %u\n",&(*b));
printf("The value of i %d\n",i);
printf("The value of i %d\n",*j);
// printf("The value of i %d\n",**k);
printf("The address of i %u\n",j);
printf("The address of i %u\n",&i); 
printf("The address of j %u\n",&j);
// printf("The address of k %u\n",&k);

return 0;
}