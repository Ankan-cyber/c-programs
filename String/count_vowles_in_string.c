#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], ch;
    int l, i, cnt = 0;
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        int ch = toupper(str[i]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cnt++;
            printf("%c\n", str[i]);
        }
    }
    if (cnt > 1)
    {
        printf("There are %d vowles\n", cnt);
    }
    else
    {
        printf("There is %d vowles\n", cnt);
    }
    return 0;
}