/* Program to print half pyramid using '*'.
Example:

		* 
		* * 
		* * * 
		* * * * 
		* * * * * 

Apporach:
	Consider rows and columns and print * according
	to the required structure.
*/
 
#include<stdio.h>

void main()
{
	for(int row = 1;row <= 5;row ++)
	{
		for (int col = 1;col <= row; col++)
		{
			printf("* ");
		}
		
		//This helps to print next line on each value of row.
		printf("\n");
	}
}
