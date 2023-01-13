#include <stdio.h>
#include <string.h>
int main()
{
int a[5]={10,7,4,89,9};
void arr(int *p);
arr(a); // array itself is a pointer so we dont need to add *
return 0;
}
void arr(int *p)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*p); 
        p++; //here p++ means p goes to second room of array
    }
    
}
