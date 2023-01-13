#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int l, i;
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}