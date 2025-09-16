//convert temperature from fahrenheit to celsius and celsius to fahrenheit
#include <stdio.h>

int main()
{
	float fh,ce;
	char ch;
	printf("Press c to convert temperature from Fahrenheit to Celsius\n\n");
	printf("Press f to convert temperature from Celsius to Fahrenheit\n\n");
	scanf("%c",&ch);
	if((ch=='c') || (ch=='C')){
		printf("Enter the temperature in fahrenheit: ");
		scanf("%f",&fh);
		ce= (fh - 32) / 1.8;
		printf("Temperature is celsius %.2f",ce);
	}
	else if ((ch=='f') || (ch=='F')){
	printf("Enter the temperature in celsius: ");
		scanf("%f",&ce);
		fh=(ce*9/5)+32;
		printf("Temperature is celsius %.2f",fh);
	}
	else{
	printf("Invalid choice !!");
	}
	return 0;
}

