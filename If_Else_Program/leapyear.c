//Check whethera given year is leap year or not
#include <stdio.h>

int main()
{
	int y;
	printf("Enter the year:");
	scanf("%d",&y);
	if(y%100==0 && y%400==0){
		printf("%d is leap year",y);
	}
	else if(y%100==0 && y%400!=0){
	printf("%d is not leap year",y);	
	}
	else if(y%4==0){
		printf("%d is leap year",y);
		}
 else
 printf("%d is not leap year",y);	
	return 0;
}

