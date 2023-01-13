#include <stdio.h>
int main()
{
    int i;
    printf("Odd Numbers\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    printf("Even Numbers\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}