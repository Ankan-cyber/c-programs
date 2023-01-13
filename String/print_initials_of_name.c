#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int l, i;
    printf("Enter a name\n");
    scanf("%[^\n]", name);
    l = strlen(name);
    printf("%c", toupper(name[0]));
    for (i = 0; i < l; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf(".%c", toupper(name[i + 1]));
        }
    }

    return 0;
}
