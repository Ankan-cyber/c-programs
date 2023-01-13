//Check Whether a matrix is diagonal or not
#include <stdio.h>
int main(){
int x[100][100],i,j,flag=0,n,col_len,row_len;
printf("Enter column length:");
scanf("%d",&col_len);
printf("Enter row length:");
scanf("%d",&row_len);
if(col_len == row_len){
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
}
n = x[0][0];
for ( i = 0; i < col_len; i++)
{
    for ( j = 0; j < row_len; j++)
    {
        if(i == j && x[i][j] != n)
        flag = 1;
    }
    
}
if (flag == 0)
printf("It's a diagonal matrix\n");
else
printf("It's not a diagonal matrix\n");
}
else{
printf("Enter a square matrix value(column and row must be equal)\n");
}

return 0;
}
