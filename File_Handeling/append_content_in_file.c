#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fp;
char ch;
fp= fopen("files/append.txt","a");
if (fp==NULL)
{
    printf("\nUnable to open append.txt file.\n");
    printf("Please check whether file exists and you have write privilege.\n");
    exit(EXIT_FAILURE);
}
else{
    printf("Enter data to append\n");
    printf("Press '^' and enter to exit\n\n");
    while ((ch=getchar())!='^')
    {
        putc(ch,fp);
    }
}
fclose(fp);
fp = fopen("files/append.txt","r");
printf("Info of the file\n");
while (!feof(fp))
{
    ch =getc(fp);
    printf("%c",ch);
}
fclose(fp);
return 0;
}