#include <stdio.h>
int main(){
FILE *fp, *fp1;
int roll_given,roll,age,flag=0;
char name[50];
fp =fopen("files/xyz.txt","r");
fp1 =fopen("files/pqr.txt","w");
printf("Enter Roll Noumber to delete: ");
scanf("%d",&roll_given);
while (!feof(fp))
{
   fscanf(fp,"%d %s %d",&roll,&name,&age);
   if (roll_given!=roll)
   {
    fprintf(fp1,"%d %s %d\n",roll,name,age);
   }
   else{
    flag=1;
   }   
}
if (flag==1)
{
    remove("files/xyz.txt");
    rename("files/pqr.txt","files/xyz.txt");    
}
else{
    printf("Record Not Found\n");
    remove("files/pqr.txt");
}
fclose(fp);
fclose(fp1);
return 0;
}