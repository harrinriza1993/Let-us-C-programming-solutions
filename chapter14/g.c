/*(g) Write a program to find if a square matrix is symmetric.

Apporach:
	1) A square matrix is a matrix in which rows and columns are
           same (A == A').
	2) If the transpose of a matrix has same number of rows and column
     	   to the given square matrix,then it is symmetric.
*/

#include<stdio.h>
#include<stdlib.h>


void main()
{
	/* Since square matrix has to be used,a array with same number 
           of column and row should be used */
	int array[4][4] = {
			     {1, 2, 3, 4},
			     {2, 5, 8, 9},
			     {3, 8, 9, 0},
			     {4,9, 0, 1}
			  };
	int i, j, row = 4, col = 4, count = 0;
	
	printf("The given matrix is \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("The transpose matrix is \n");
	if (row == col)
	{
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%d ",array[j][i]);
			}
			printf("\n");
		}
		printf("\n\n");

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
			{
				if ((array[i][j]) == (array[j][i]))
					count++;
				else
				{
					printf("The given array is not symmetric\n");
					exit(0);
				}
			}
		}

		if (count == row * col)
			printf("The given array is symmetric\n");
	}
}
 
