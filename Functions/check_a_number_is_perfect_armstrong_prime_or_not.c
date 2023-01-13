// Wap to check prime, armstrong, perfect number using functions
#include <stdio.h>
int main(){
int num, prime, arm, perfect;
int getPrime(int num);
int getPerfect(int num);
int getArm(int num);
printf("Enter a number\n");
scanf("%d",&num);
prime = getPrime(num);
arm = getArm(num);
perfect = getPerfect(num);

if(perfect == 0){
    printf("%d is a perfect number\n",num);
    }   
else
printf("%d is not a perfect number\n",num);

if (prime == 2)
{
    printf("%d is a prime number\n",num);
}
else{
    printf("%d is not prime number\n",num);
}

if (arm == num)     
{
    printf("%d is a armstong number\n",num);
}    else{
    printf("%d is not armstong number\n",num);
}

return 0;
}

int getPrime(int num){
int i, c=0;
for ( i = 1; i <= num; i++)
{
    if(num%i == 0){
        c++;
    }
}
return c;

}
int getArm(int num){
    int r, s=0;
    do
    {
        r=num%10;
        num=num/10;
        s=s+(r*r*r);
    }while(num>0);
return s;
}
int getPerfect(int num){
     int i,s=0,flag =0;
        for (i = 1; i < num; i++)
        {
            if(num%i == 0)
            {
                s = s+i;
            }
        }
    if(s == num)
    { 
        flag = 0;
    }
    else{
        flag =1;
    }
    return flag;
}
