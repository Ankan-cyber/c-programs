// Check whether a matrix is unit diagonal or not and other values must be zero
#include <stdio.h>
int main(){
int x[100][100],col_len,row_len,i,j,flag1=0,flag2=0;
printf("Enter column length:");
scanf("%d",&col_len);
printf("Enter the row length:");
scanf("%d",&row_len);
printf("Enter %d values\n",col_len*row_len);
if(col_len == row_len){
for(i=0; i<col_len; i++)
{
    for(j=0; j<row_len; j++)
    {
        scanf("%d",&x[i][j]);
    }
}

for(i=0; i<col_len; i++)
{
    for(j=0; j<row_len; j++)
    {
        if(i == j && x[i][j] != 1){
        flag1 = 1;
        }
        if(i != j && x[i][j] != 0){
        flag2 = 1;
        }
    }
}
if(flag1 == 0 && flag2 == 0)
printf("The matrix is unit diagonal and other values are zero\n");
else{
printf("The matrix is not unit diagonal and other values are not zero\n");
}
}
else{
    printf("Enter a square matrix value(column and row must be equal)\n");
}
return 0;
}