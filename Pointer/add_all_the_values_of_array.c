#include <stdio.h>
#include <string.h>
int main()
{
    int arr[20];
    int * ptr = arr;
    int arr_size,s=0;
    printf("Enter array size:\n");
    scanf("%d", &arr_size);
    printf("Enter %d array elements:\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr=arr;
    for (int i = 0; i < arr_size; i++)
    {
       s=s+*ptr;
       ptr++;
    }
    printf("The sum of array elements are: %d",s);
    return 0;
}