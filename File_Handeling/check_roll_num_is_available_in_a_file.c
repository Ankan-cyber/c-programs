/*
Wap to check a given roll no. is available or not, if it is available the record will be diplayed and if not found give error message
*/
#include <stdio.h>
int main(){
FILE *fp;
int roll_given,roll,age,flag=0;
char name[50];
fp =fopen("files/students.txt","r");
printf("Enter Roll Noumber to find: ");
scanf("%d",&roll_given);
while (!feof(fp))
{
    fscanf(fp,"%d %s %d",&roll,&name,&age);
    if (roll_given==roll)
    {
        printf("Record found\n");
        printf("Roll Name Age\n");
        printf("%d %s %d\n",roll,name,age);
        flag=1;
    }
}
fclose(fp);
if (flag==0)
{
    printf("Record Not Found\n");
}    

return 0;
}