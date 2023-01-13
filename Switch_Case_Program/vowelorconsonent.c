#include <stdio.h>
#include <conio.h>
// using switch case
int main()
{
	char al;
	printf("Input alphabet:");
	scanf("%c",&al);
	switch(al){
	case 'a':
	printf("%c is vowel",al);
	break;	
	case 'e':
	printf("%c is vowel",al);
	break;	
	case 'i':
	printf("%c is vowel",al);
	break;	
	case 'o':
	printf("%c is vowel",al);
	break;	
	case 'u':
	printf("%c is vowel",al);
	break;	
	case 'A':
	printf("%c is vowel",al);
	break;	
	case 'E':
	printf("%c is vowel",al);
	break;	
	case 'I':
	printf("%c is vowel",al);
	break;	
	case 'O':
	printf("%c is vowel",al);
	break;	
	case 'U':
	printf("%c is vowel",al);
	break;	
	default:
	printf("%c is consonant",al);
	}
	getch();
	return 0;
}

