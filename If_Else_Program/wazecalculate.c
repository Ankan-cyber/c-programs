/* calculate the waze of a worker if hour eoriginalceeds 8 then double the fees*/
#include <stdio.h>
int main()
{
	float w,t,h;
	printf("Enter the waze per hour\n");
	scanf("%f",&w);
	printf("Enter the working hour\n");
	scanf("%f",&h);
	if(h>8){
 t=w*8+(h-8)*2*w;
	printf("your waze is %.2f",t);
}
else{
	t=w*h;
	printf("Your waze is %.2f",t);
	}
	return 0;
}

