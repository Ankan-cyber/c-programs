#include <stdio.h>
#include <stdlib.h>
int main(){
int i,n,roll,age;
char name[50];
FILE *fp;
fp = fopen("files/students.txt","w");
printf("How many students?\n");
scanf("%d",&n);
if (fp==NULL)
{
    printf("File can't be opened\n\a");
    exit(1);
}

for ( i = 1; i <= n; i++)
{
    printf("Enter Roll, Name and Age\n");
    scanf("%d %s %d",&roll,&name,&age);
    if(i!=n)
    fprintf(fp,"%d %s %d\n",roll,name,age);
    else
    fprintf(fp,"%d %s %d",roll,name,age);
}
fclose(fp);
fp=fopen("files/students.txt","r");
printf("\nRoll Name Age\n");
printf("___________________\n");
while (!feof(fp))
{
    fscanf(fp,"%d %s %d",&roll,&name,&age);
    printf("%d %s %d\n",roll,name,age);
}
fclose(fp);

return 0;
}