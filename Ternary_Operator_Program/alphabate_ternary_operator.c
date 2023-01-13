#include <stdio.h>
    int main(){
    char al;
    char vow(char al);
    printf("Enater a character:");
    scanf("%c",&al);
    vow(al);
    return 0;
}

char vow(char al){
    (al>='a' && al<='z')||(al>='A' && al<='Z')? printf("%c is alphabate",al) :printf("%c is not alphabate",al);
}