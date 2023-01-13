//clculate coffecient
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter the coefficients of a quadratic eqn\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0){
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("1st root=%f and 2nd root=%f",r1,r2);
	}
	else{
printf("root doesn't eoriginalist");		
 }
	return 0;
}

