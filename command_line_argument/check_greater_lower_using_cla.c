#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    if (a>b)
    {
        printf("%d is greater\n",a);
    }
    if(a>b){
        printf("%d is smaller\n",b);
    }
    
return 0;
}