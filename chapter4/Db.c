/* (b) If a character is entered through the keyboard, write a program to determine whether the character is a capital letter,
       a small case letter, a digit or a special symbol.
       
       The following table shows the range of ASCII values for various characters :
       
       characters		AsCII Values
       A - Z			65 - 90
       a - z			97 - 122
       0 - 9			48 - 57
       special symbols		0 - 47, 58 - 64, 91 - 96, 123 - 127
*/

#include<stdio.h>

void main()
{
	char character;
	
	printf("Enter the character\n");
	scanf("%c", &character);
	
	if(character <= 90 && character >= 65)
		printf("The character is a capital case letter\n");
	else if(character <= 122 && character >= 97)
		printf("The character is a small case letter\n");
	else if(character <= 57 && character >= 48)
		printf("The character is a number\n");
	else if((character <= 47 && character >= 0) || (character <= 64 && character >= 58) || (character <= 96 && character >= 91) || (character <= 127 && character >= 123))
		printf("The character is a special symbol\n");
	else
		printf("Invalid charcter\n");
}
