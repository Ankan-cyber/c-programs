#include <stdio.h>
int main(){
int arr[100],max,min,size,i;
printf("Enter the size of array: ");
scanf("%d",&size);
printf("Enter array elements:\n"); 
for ( i = 0; i < size; i++)
{
    scanf("%d",&arr[i]); 
}
max = arr[0]; 
min = arr[0]; 
for ( i = 1; i < size; i++)
{
    if(arr[i] > max)
    {
        max = arr[i];
    }
    if(arr[i] < min)
    {
        min = arr[i];
    }
}
printf("Maximum element = %d\n",max);
printf("Minimum element = %d\n",min);

return 0;
}