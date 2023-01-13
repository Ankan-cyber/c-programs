#include <stdio.h>
#include <string.h>
int main(){
char str[100];
int i,len,flag=0;
printf("Enter a string\n");
scanf("%s",&str);
len=strlen(str);
for ( i = 0; i < len/2; i++)
{
    if(str[i] != str[len-1-i])
    flag =1;
}
if(flag == 0 )
printf("String is palindrom\n");
else
printf("String is not palindrom\n");
return 0;
}

