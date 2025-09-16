#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

    if (argc==1)
    {
        printf("sorry!!\n");
        printf("enter two arguments to check\n");
    }
    else{

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
    }
    
return 0;
}