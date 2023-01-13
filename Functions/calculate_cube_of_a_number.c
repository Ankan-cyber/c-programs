// Wap to find cube of a number
#include <stdio.h>
int main()
{
    int a, b;
    int cube(int);
    printf("Enter a number: ");
    scanf("%d", &a);
    b = cube(a);
    printf("Cube = %d\n", b);
    return 0;
}

int cube(int a)
{
    return a * a * a;
}