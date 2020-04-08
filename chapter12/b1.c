/*(b)Write down the macro definitions of the following:
  
   1. To test whether a character is a small case letter or not

Apporach:
	1) The ascii value of small letters are considered
	2) From the ascii value it is tested whether a character
	   is small or not.
*/

#include<stdio.h>
#define CHA(x) 	if (x >= 97 && x<= 122)\
		printf("%c is a small letter",x);\
		else\
		printf("%c is not a small letter",x);

int main()
{
	char character;
	
	printf("Enter any character\n");
	scanf("%c",&character);
	
	CHA(character);
	return 0;
	
}
