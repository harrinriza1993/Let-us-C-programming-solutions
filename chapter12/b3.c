/*(b) 3.To test whether a character is an alphabet or not.
    Make use of the macros you defined in 1 and 2 above.
    
    Apporach:
	1) The ascii value of the uppercase and lowercase 
	   alphabet is given in a condition
	2)If these conditions are true then it is alphabet 
          otherwise it is not a alphabet.
*/

#include<stdio.h>
#define cha(x) 	if (x >= 65 && x <= 97)\
			printf("%c is a alphabet",x);\
		else if (x >= 97 && x <= 122)\
			printf("%c is a alphabet",x);\
		else\
			printf("%c is not a alphabet",x);
void main()
{
	char character;

	printf("Enter any character\n");
	scanf("%c",&character);
	
	cha(character);
}

