/*Program to print half pyramid using numbers

Example:

	1 
	1 2 
	1 2 3 
	1 2 3 4 
	1 2 3 4 5

Apporach:
	Considering rows and columns, and print
	according to that.
*/

#include<stdio.h>

void main()
{
	for(int row = 1; row <= 5; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			/*The column values is to be printed
			  in order to get the required output.*/
			printf("%d ",col);
		}
		printf("\n");
	}
} 
