#include <stdio.h>
int main(){
FILE *fp;
int i,n,t;
printf("Enter the number you need the table of: ");
scanf("%d",&n);
printf("how much number of table you want: ");
scanf("%d",&t);
fp=fopen("files/table.txt","w");
for ( i = 1; i <= t; i++)
{
   if (i!=t)
   fprintf(fp,"%dX%d=%d\n",n,i,n*i);
   else
   fprintf(fp,"%dX%d=%d",n,i,n*i);
}
fclose(fp);
printf("Successfully generated table of %d to table.txt\n",n);

return 0;
}