#include <stdio.h>
int main(){
FILE *fp;
char ch;
int count=0;
fp = fopen("abcd.txt","r");
if (fp==NULL)
{
    printf("file can't be opened");
}
else{
    while (!feof(fp))
{
    ch=getc(fp);
    if (ch==' ')
    count++;
    
}
printf("Total no. of words = %d\n",count);
}

fclose(fp);
return 0;
}