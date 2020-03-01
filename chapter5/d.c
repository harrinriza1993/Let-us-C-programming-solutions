/*(d) Write a program to print all the ASCII values and their equivalent 
      characters using a while loop.The ASCII values vary from 0 to 255.
*/

/*Apporach:
	The ascii values are printed using %c formatstring which is 
	usually prints the character constant.
*/

#include<stdio.h>

void main()
{
	int ascii_value = 0;

	while(ascii_value <= 255)
	{
		/*The ascii values of all the characters are obtained by 
		using this statement*/ 
		printf("The ascii value of %d is %c: %c\n",ascii_value, ascii_value);

		++ascii_value;
	}
}

