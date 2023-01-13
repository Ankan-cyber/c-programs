#include <stdio.h>
#include <string.h>
int main()
{
    char x[20], y[20];
    printf("enter a string in x\n");
    scanf("%[^\n]", x);
    strcpy(y, x);
    printf("y=%s\n", y);
    return 0;
}