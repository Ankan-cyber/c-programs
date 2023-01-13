#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if (argc==1)
    {
        printf("sorry!!\n");
        printf("enter two or more arguments to sum\n");
    }
    else{
    int s=0,i;
    for ( i = 1; i < argc; i++)
    {
        s=s+atoi(argv[i]);
    }
    printf("Sum is %d\n",s);
    }
return 0;
}