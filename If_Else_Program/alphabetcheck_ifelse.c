#include<stdio.h>

int main()
{
    char al;
    printf("Enter your character:");
    scanf("%c",&al);
    if((al>='a' && al<='z')||(al>='A' && al<='Z')) {
        printf("this is an alphabet");
    }
    else {

        printf("not an alphabet");
    }

    return 0;
}