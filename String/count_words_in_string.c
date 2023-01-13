#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int l, i, cnt = 0;
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            cnt++;
        }
    }
    if ((cnt + 1) > 1)
    {
        printf("There are %d words\n", cnt + 1);
    }
    else
    {
        printf("There is %d word\n", cnt + 1);
    }

    return 0;
}