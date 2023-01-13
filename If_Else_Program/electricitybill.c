#include <stdio.h>

int main()
{
	float u,t;
	printf("Enter the consumed total electricity unit\n");
	scanf("%f",&u);
	if(u<=100){
  t=u*5;
 printf("Your elctricity bill is %.2f",t);		
}
else if(u>100 && u<=200){
 t=100*5+(u-100)*7;
 printf("Your elctricity bill is %.2f",t);
}
else{
	t=(100*5)+(100*7)+(u-200)*9;
 printf("Your electricity bill is %.2f",t);
}
	
	return 0;
}

