#include <stdio.h>
int main(){
int arr[100];
int arr_size;
int * ptr = arr;
printf("Input array size: ");
scanf("%d",&arr_size);
printf("Enter elements in array:\n");
for (int i = 0; i < arr_size; i++)
{
    scanf("%d",ptr);
    ptr++;
}
ptr = arr;
printf("Array elements");
for (int i = 0; i < arr_size; i++)
{
    printf("%d\n",*ptr);
    ptr++;
}

return 0;
}