#include <stdio.h>
#include <string.h>
int main(){
    char x[20],y[20];
    printf("enter two strings\n");
    scanf("%[^\n] %[^\n]", x, y);
    if (strcmp(x,y) == 0)
    {
        printf("Two strings are equal");
    }
    else{
        printf("Two strings are not equal");
    }
return 0;
}