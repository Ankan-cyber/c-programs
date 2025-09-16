#include <stdio.h>
int main(){
FILE *fp;
char ch;
int count=0;
fp = fopen("files/abcd.txt","r");
if (fp==NULL)
{
    printf("file can't be opened");
}
else{
    while (!feof(fp))
{
    ch=getc(fp);
    ch = toupper(ch);
    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c\t",ch);
        count++;
    }
}
printf("Total no. of vowels = %d\n",count);
}

fclose(fp);
return 0;
}
