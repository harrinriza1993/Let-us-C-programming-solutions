/*(b) 2.To test whether a case is an upper case letter or not.
  
  Apporach:
	1)From the ascii value of upper case letters, it is tested
          whether a character is uppercase or not.
*/

#include<stdio.h>
#define cha(x)  if (x >= 65 && x <= 97)\
	       		printf("%c is a uppercase alphabet",x);\
		else\
			printf("%c is not a uppercase alphaber",x);

void main()
{
	char character;
	
	printf("Enter any character\n");
	scanf("%c",&character);

	cha(character);
}

