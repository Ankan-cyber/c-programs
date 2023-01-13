#include <stdio.h>
int main(){
void wrong_swap(int a, int b);
void swap(int *a, int *b);
    int a=3,b=4;
    printf("The value of a and b before swap is %d and %d\n",a,b);
    // wrong_swap(a,b); // will not work due to call by value
    swap(&a,&b);   // will work due to call by reference
    printf("The value of a and b after swap is %d and %d\n",a,b);
return 0;
}
void wrong_swap(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
}
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;

}