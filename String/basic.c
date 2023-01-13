#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /*Simple Notations
1st type char x[10] = "Computer";
2nd type char x[10] = {'C','O','M','P','U','T','E','R','\0'};
Input of a string
scanf("%s",x);  => this is a formated input
scanf("%[^\n]",x);  => this is a unformated input
gets(x);
*/
    char name[20];
    printf("Enter Your Name\n");
    gets(name);
    printf("Your name is %s\n", name);
    /*
To calulate length of a string
strlen(name);
*/
    printf("The length of the string is %d\n", strlen(name));

    /*
To see only a specific character
printf("2nd character is %c",x[1]);
*/
printf("4th character is %c",name[3]);
    return 0;
}