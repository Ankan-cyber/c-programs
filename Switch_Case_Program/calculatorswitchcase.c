#include <stdio.h>
// using switch case
int main()
{
	float a,b;
	int in;
	printf("1. Add two numbers\n");
	printf("2. Subtract two numbers\n");
	printf("3. Multiply two numbers\n");
	printf("4. Division two numbers\n");
	printf("Enter your choice(1-4):");
	scanf("%d",&in);
	switch(in){
	case 1:
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a+b);	
	break;	
	case 2:
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a-b);	
	break;
	case 3:
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a*b);
	break;
	case 4:
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a/b);
	break;
	default:
	printf("Wrong choice!!");
	}
	return 0;
}

