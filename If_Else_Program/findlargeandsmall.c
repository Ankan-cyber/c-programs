//find large among three numbers
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("the largest number is %d\n", a);
		if(b>c)
		printf("smallest is %d\n", c);
		else
		printf("smallest is %d", b);
		}
	if(b>a && b>c){
		printf("the largest number is %d\n", b);
		if(a>c)
		printf("smallest is %d\n", c);
		else
		printf("smallest is %d",a);
		}
		
	if(c>a && c>b){
		printf("the largest number is %d\n", c);
		if(a>b)
		printf("smallest is %d\n", b);
		else
		printf("smallest is %d",a);
		}
	
	
	return 0;
	}
