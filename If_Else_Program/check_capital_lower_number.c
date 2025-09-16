// WAP to check if an input character is capital, smaller or a number and a special character using ascii

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // if (ch >= 'A' && ch <= 'Z') 
    //     printf("The character is capital.\n");
    //  else if (ch >= 'a' && ch <= 'z') 
    //     printf("The character is smaller.\n");
    //  else if (ch >= '0' && ch <= '9') 
    //     printf("The character is a number.\n");
    //  else 
    //     printf("The character is a special character.\n");
    

    if (ch >= 65 && ch <= 90)  // ASCII range for A-Z
        printf("%c is an uppercase letter.\n", ch);
    else if (ch >= 97 && ch <= 122)  // ASCII range for a-z
        printf("%c is a lowercase letter.\n", ch);
    else if (ch >= 48 && ch <= 57)   // ASCII range for 0-9
        printf("%c is a number.\n", ch);
    else                            // Anything else is considered a special character
        printf("%c is a special character.\n", ch);
    return 0;
}