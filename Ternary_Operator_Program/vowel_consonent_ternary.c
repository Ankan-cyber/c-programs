#include <stdio.h>
#include <conio.h>
    int main(){
    char al;
    printf("Enter a character:");
    scanf("%c",&al);
    (al=='a' || al=='e' || al=='i' || al=='o' || al=='u')||(al=='A' || al=='E' || al=='I' || al=='O' || al=='U') 
    ? printf("%c is a vowel",al) : printf("%c is a consonant",al);
return 0;
getch();
}