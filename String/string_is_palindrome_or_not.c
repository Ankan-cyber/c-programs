#include <stdio.h>
#include <string.h>
int main() {
    char x[20],y[20];
    printf("Enter a string\n");
    scanf("%[^\n]",x);
    strcpy(y,x);
    strrev(y);
    if(strcmp(x,y)==0){
    printf("Your string is palindrome");
    }
    else{
    printf("Your string is not a palindrome");
    }
    return 0;
}