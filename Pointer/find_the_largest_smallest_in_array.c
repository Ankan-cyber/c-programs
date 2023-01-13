// Find the largest and smallest numbers from the array elements
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[20];
    int *ptr = arr;
    int arr_size, max, min;
    printf("Enter array size:\n");
    scanf("%d", &arr_size);
    printf("Enter %d array elements:\n", arr_size);
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    max = *ptr;
    min = *ptr;
    for (int i = 0; i < arr_size; i++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
        else
        {
            min = *ptr;
        }
        ptr++;
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}