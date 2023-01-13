#include <stdio.h>
int main(){
int getStrong(int m);
int faget(int r);
int num, result,m;
printf("Enter a number: ");
scanf("%d",&num);
m=num;
result = getStrong(num);
if(result == num){
printf("%d is a strong number\n",result);
}
else{
    printf("%d is not a strong number\n",result);
}
return 0;
}
int getStrong(int m){
    int i,s=0,r;
    while(m != 0)       
    {
        r = m%10;
        int f = faget(r);
        m = m/10;   
        s = s+f;
    }
    
   return s; 
}

int faget(int r){
    int facto=1;
    for ( int i = 1; i <= r; i++)
    {
        facto = facto *i;
    }
    return facto;
}