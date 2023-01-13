//Write a program to input 10 integer values ina array and display them in order
#include <stdio.h>
int main()
{
    int original[10], i;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &original[i]);
    }
    printf("Your 10 numbers are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", original[i]);
    }
    printf("\n"); //optional
    return 0;
}