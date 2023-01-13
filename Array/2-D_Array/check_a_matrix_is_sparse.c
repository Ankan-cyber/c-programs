#include <stdio.h>
int main(){
int x[100][100],i,j,flag=0,col_len,row_len;
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

for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       if(x[i][j] == 0)
            {
                flag++;
            }
   }
}
if(flag >= (i * j)/2)
    {
        printf("\nThe given matrix is a Sparse matrix.");
    }
    else
    {
        printf("\nThe given matrix is not Sparse matrix.");
    }

}
else
{
    printf("Enter a square matrix value(column and row must be equal)\n");
}
return 0;
}