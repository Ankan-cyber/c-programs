#include <stdio.h>
int main(){
FILE *fp;
char ch;
fp = fopen("abcd.txt","w");
if (fp==NULL)
{
    printf("file can't be opened");
}
else{
    printf("Enter some info\n");
    printf("Press '^' and enter to exit\n");
    while ((ch=getchar())!='^')
    {
        putc(ch,fp);
    }
    
}

fclose(fp);
return 0;
}