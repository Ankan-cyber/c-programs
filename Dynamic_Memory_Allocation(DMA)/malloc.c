#include <stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
ptr = (int *)malloc(5 *sizeof(int));
for (int i = 0; i < 5; i++)
{
    scanf("%d\n",&ptr[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("%d\n",ptr[i]);
}
// printf("%d\n",sizeof(int));
// printf("%d\n",sizeof(float));
// printf("%d\n",sizeof(char));
return 0;
}