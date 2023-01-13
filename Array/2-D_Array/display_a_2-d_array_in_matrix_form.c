// Design a 2-D array enter value into it and display them in matrix form
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
int x[100][100],i,j,col_len,row_len;
printf("Enter column length:");
scanf("%d",&col_len);
printf("Enter row length:");
scanf("%d",&row_len);
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
    
}
printf("Result is printing....\n");
sleep(1);
for ( i = 0; i < col_len; i++)
{
    for ( j = 0; j < row_len; j++)
    {
        printf("%d ",x[i][j]);
    }
    printf("\n");
}

return 0;
}