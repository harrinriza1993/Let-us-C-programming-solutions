/*(d) Write a program to print all the ASCII values and their equivalent 
      characters using a while loop.The ASCII values vary from 0 to 255.*/


/*Apporach:
	1) The ascii values are printed using %c formatstring which is 
	usually prints the character constant*/

	#include<stdio.h>
	void main()
	{

	 
		char c = 0;
		while(c<=255)
		{

		/*The ascii values of all the characters are obtained by 
		  using this statement*/ 

			printf("%c The ascii value is ",c);
			c++;
		}
	}

		
