#include <stdio.h>
#include <string.h>
// using switch case
int main()
{
	char al;
	printf("Input alphabet:");
	scanf("%c",&al);
	switch(toupper(al)){
	case 'A':
	case 'E':
	case 'I':
	case 'O':	
	case 'U':
	printf("%c is vowel",al);
	break;	
	default:
	printf("%c is consonant",al);
	}
	return 0;
}

