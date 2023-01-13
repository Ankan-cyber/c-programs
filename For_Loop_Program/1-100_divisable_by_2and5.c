#include <stdio.h>
    int main(){
    int i;
    printf("The Numbers which are divisable by 2 and 5\n");
    for(i=1;i<=100;i++)
    {
        if(i%2==0 && i%5==0)
        {
           printf("%d\n",i);
        }
    }
return 0;
}