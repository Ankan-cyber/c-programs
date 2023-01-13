//// write a c program to input marks of five subjects.
// calculate percentage and grade them
#include <stdio.h>

int main()
{
	float phy,bio,chem,math,com,total,per;
	
	printf("Enter the number of your Physcics(out of 100)\n");
	scanf("%f", &phy);
	printf("Enter the number of your Biology(out of 100)\n");
	scanf("%f", &bio);
	printf("Enter the number of your Chemsitry(out of 100)\n");
	scanf("%f", &chem);
	printf("Enter the number of your Mathematics(out of 100)\n");
	scanf("%f", &math);
	printf("Enter the number of your Computer(out of 100)\n");
	scanf("%f", &com);
	total=phy+bio+chem+math+com;
	per=(total/500)*100;
	printf("Your total percantange is %.3f\n", per);
	
	if(per>=90){
		printf("Your grade is A");
		}
	else if(per>=80){
		printf("Your grade is B");
		}
	else if(per>=70){
		printf("Your grade is C");
		}
	else if(per>=60){
		printf("Your grade is D");
		}
	else if(per>=40){
		printf("Your grade is E");
		}
	else{
		printf("Your grade is F");
		}
	return 0;

}

