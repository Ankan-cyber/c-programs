#include <stdio.h>
#include <string.h>
int main()
{
    char x[20], y[20];
    int l1, l2, flag = 0;
    printf("enter two strings\n");
    scanf("%[^\n] %[^\n]", x, y);
    l1 = strlen(x);
    l2 = strlen(y);
    if (l1 == l2)
    {
        for (int i = 0; i < l1; i++)
        {
            if (x[i] == y[i])
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("Two strings are equal");
        }
        else
        {
            printf("Two strings are not equal");
        }
    }
    else
    {
        printf("Two strings are not equal");
    }
    
    return 0;
}