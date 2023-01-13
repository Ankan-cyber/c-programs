//Wap to print fibonacci series using recursion function
#include <stdio.h>
int main(){
int n;
int getFibo(int n);
printf("Enter limit of fibonacci series: ");
scanf("%d",&n);

for (int i = 1; i <= n; i++)
{
    printf("%d\n",getFibo(i));
}

return 0;
}

int getFibo(int n)
{
    if(n == 1)
    return 1;
    else if(n == 2)
    return 1;
    else
    return getFibo(n-1)+getFibo(n-2);
}
