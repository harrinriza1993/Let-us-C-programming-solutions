/*Program to print half pyramid using alphabets*/

/*Apporach:
	1)A character variable is considered and each time it is
	  incremented according to the rows and column.
*/

#include<stdio.h>

void main()
{
	char alphabet = 'A';

	for(int row = 1;row <= 5;row ++)
	{
		for(int col = 1;col <= row;col ++)
		{
			printf("%c",alphabet);
		}
		
		/*Once the alphabet is printed it is incremented 
		  and it is printed in next line ,it continues till
		  the condition is satisfied.
		*/
		++alphabet;
		printf("\n");
	}
}
