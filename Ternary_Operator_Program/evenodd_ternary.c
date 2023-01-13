#include <stdio.h>
int main()
{
    int original;
    printf("Enter a number\n");
    scanf("%d", &original);
    (original == 0) ? printf("%d is neither even nor odd\n", original) : (original % 2 == 0) ? printf("%d is even\n", original)
                                                                      : printf("%d is odd\n", original);

    return 0;
}