/*Programs to print inverted half pyramid using '*' */

/*Apporach:
	1) To print inverted half pyramid the value in the 
	   column and row should be in decreasing order.
*/

#include<stdio.h>

void main()
{
	for (int row = 1;row <= 5; row ++)
	{
		/*In inverted triangle the value in column should 
		  be initialized to 5 and then the value should
		  decrease to each row value.*/
		for(int col = 5;col >= row;col --)
		{
			printf("*");
		}
		printf("\n");
	}
}


