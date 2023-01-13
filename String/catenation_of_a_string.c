#include <stdio.h>
#include <string.h>
int main()
{
    char x[20], y[20];
    printf("enter two strings\n");
    scanf("%[^\n] %[^\n]", x, y);
    strcat(x, y);
    printf("concatenated string=%s\n", x);
    return 0;
}