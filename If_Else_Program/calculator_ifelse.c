#include <stdio.h>
#include <conio.h>
// using if else
int main()
{ float a,b;
	int in;
	printf("1. Add two numbers\n");
	printf("2. Subtract two numbers\n");
	printf("3. Multiply two numbers\n");
	printf("4. Division two numbers\n");
	printf("Enter your choice(1-4):");
	scanf("%d",&in);
	if(in==1){
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a+b);	
	}
else if(in==2){
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a-b);	
	}
else if(in==3){
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a*b);	
	}
else if(in==4){
	printf("Enter two numbers:\n");
	scanf("%f%f",&a,&b);
	printf("Result:%.0f",a/b);	
	}
else{
printf("Wrong choice!!");	
}
	getch();
		return 0;
}

