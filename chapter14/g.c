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
			     {1,  2, 3, 4},
			     {5,  7, 6, 8},
			     {9, 10,11,12},
			     {13,14,16,17}
			  };

	int i, j, transpose_array[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			array[i][j] = array[j][i];

			if (transpose_array[i][j] == array[j][i])
				printf("The given matrix is symmetric\n");
			exit(0);
		}
	}
	
}
