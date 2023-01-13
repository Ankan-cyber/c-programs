//Multiply two matrix
#include <stdio.h>
int main(){
int A[30][30],B[30][30],C[30][30];
int col_len,row_len,i,j,k,sum;
printf("Enter row and column length: ");
scanf("%d",&col_len);
scanf("%d",&row_len);
if(row_len==col_len){
    printf("Input elements of A:\n");
    for ( i = 0; i < col_len; i++)
    {
        for ( j = 0; j < row_len; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    printf("Input elements of B:\n");
    for ( i = 0; i < col_len; i++)
    {
        for ( j = 0; j < row_len; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }
     for ( i = 0; i < col_len; i++)
    {
        for ( j = 0; j < row_len; j++)
        {
            sum = 0;
           for ( k = 0; k < col_len; k++)
           {
              sum = sum + A[i][k]*B[k][j];
           }
           C[i][j] = sum;

        }
        
    }
    printf("Product of matrix A * B:\n");
    for ( i = 0; i < col_len; i++)
    {
         for ( j = 0; j < row_len; j++)
         {
            printf("%d",&C[i][j]);
         }
         printf("\n");
    }
    
}
else
printf("You have to enter same length matrix to multiply");
return 0;
}