#include <stdio.h>
int main(){
int x[100][100],y[100][100],i,j,flag,col_len,row_len;
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
for(i=0; i<col_len; i++)
    {
        for(j=0; j<row_len; j++)
        {
            /* Store each row of matrix x to each column of matrix y */
            y[i][j] = x[j][i];
        }
    }
    flag =1;
    for(i=0; i<col_len && flag; i++)
    {
        for(j=0; j<row_len; j++)
        {
            /* If matrix A is not equal to its transpose */
            if(x[i][j] != y[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(i=0; i<col_len; i++)
        {
            for(j=0; j<row_len; j++)
            {
                printf("%d ", x[i][j]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

}
else{
    printf("Enter a square matrix value(column and row must be equal)\n");
}
return 0;
}