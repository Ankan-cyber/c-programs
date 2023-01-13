// Sum of diagonal elements in matrix
#include <stdio.h>
int main(){
int arr[30][30];
int sum=0,i,j,col_len,row_len;
printf("Enter Column and row length: ");
scanf("%d",&col_len);
scanf("%d",&row_len);
printf("Input array elements:\n");
for ( i = 0; i < col_len; i++)
{
    for (j = 0; j < row_len; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
for ( i = 0; i < col_len; i++)
{
    for ( j = 0; j < col_len; j++)
    {
        if(i==j){
            sum = sum + arr[i][j];
        }
    }
}   
printf("Sum = %d",sum);
return 0;
}