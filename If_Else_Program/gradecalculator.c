#include <stdio.h>
//calculate grade using if else
int main()
{
	float ben,eng,math,total,avr; 
	printf("Enter your bengali number:");
	scanf("%f",&ben);
	printf("Enter your english number:");
	scanf("%f",&eng);
	printf("Enter your math number:");
	scanf("%f",&math);
	total=ben+eng+math;
	avr=total/3;
	if(avr>=60){
	printf("\nYou passed with 1st grade");
	}
	else if(avr>=45 && avr<60){
	printf("\nYou passed with 2nd grade");
	}
	else if(avr>=30 && avr<45){
	printf("\nYou passed with 3rd grade");	
	}
	else{
	printf("\nYou failed,better luck neoriginalt time");	
	}
	return 0;
}

