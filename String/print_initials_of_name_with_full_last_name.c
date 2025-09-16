#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int l, i, j, word_count = 0, spc_cnt = 0;
    printf("Enter a name\n");
    scanf("%[^\n]", name);
    l = strlen(name);
    for (i = 0; i < l; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            word_count++;
        }
    }
    // printf("%d\n",word_count);
    if (word_count == 0)
    {
        printf("%s", name);
    }
    else if (word_count == 1)
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
    else // Print initials of all but last word, then full last word
    {
        // Print initials
        printf("%c.", toupper(name[0]));
        int last_space = -1;
        for (i = 0; i < l; i++)
        {
            if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            {
                last_space = i;
                // Check if this is not the last word
                int temp = i + 1;
                int space_found = 0;
                while (temp < l)
                {
                    if (name[temp] == ' ')
                    {
                        space_found = 1;
                        break;
                    }
                    temp++;
                }
                if (space_found)
                    printf("%c.", toupper(name[i + 1]));
            }
        }
        // Print last word in full
        if (last_space != -1)
        {
            printf("%s", &name[last_space + 1]);
        }
    }
    return 0;
}