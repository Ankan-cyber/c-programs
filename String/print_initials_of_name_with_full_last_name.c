#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int l, i, j, cnt = 0, spc_cnt = 0;
    printf("Enter a name\n");
    scanf("%[^\n]", name);
    l = strlen(name);
    for (i = 0; i < l; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            cnt++;
        }
    }
    // printf("%d\n",cnt);
    if (cnt == 0)
    {
        printf("%s", name);
    }
    else if (cnt == 1)
    {
        printf("Your name initial ");
        printf("%c.", toupper(name[0]));
        for (i = 0; i < l; i++)
        {
            if (name[i] == ' ' && name[i + 1] != ' ')
            {
                spc_cnt = i + 1;
                for (i = spc_cnt; i <= l; i++)
                {
                    printf("%c", name[i]);
                }
            }
        }
    }
    // else this is not done yet
    // {
    //     printf("%c", toupper(name[0]));
    //     for (j = 0; j <= (cnt - 1); j++)
    //     {
    //         for (i = 0; i < l; i++)
    //         {
    //             if (name[i] == ' ' && name[i + 1] != ' ')
    //             {
    //                 printf(".%c", toupper(name[i+1]));
    //             }
    //         }
    //     }
    // }
    return 0;
}