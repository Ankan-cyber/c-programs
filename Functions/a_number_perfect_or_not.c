// Wap to calculate a given number is perfect or not
#include <stdio.h>
int main(){
    int a,b;
    int perfect(int);
        printf("Enter a number to check: ");
        scanf("%d",&a);
        b = perfect(a);
        if(b == 0){
            printf("%d is a perfect number\n",a);
        }
        else
        printf("%d is not a perfect number\n",a);
return 0;
}

int perfect(int a){
    int i,s=0,flag =0;
        for (i = 1; i < a; i++)
        {
            if(a%i == 0)
            {
                s = s+i;
            }
        }
    if(s == a)
    { 
        flag = 0;
    }
    else{
        flag =1;
    }
    return flag;
}
