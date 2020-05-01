/*(h) Write a program to add two 6 X 6 matrices.

Apporach
	1. The first element of the first matrix and first element
  	   of the second matrix should be added.
	2. It happens with other elements also.
*/


/* 	Valid declaration
	int abc[2][2] = {1, 2, 3 ,4 }  
	int abc[][2] = {1, 2, 3 ,4 }  

	Invalid declaration – you must specify second dimension
	int abc[][] = {1, 2, 3 ,4 }   
	int abc[2][] = {1, 2, 3 ,4 }
*/

#include<stdio.h>


void printMatrix(int array[6][6], int row, int coloum)
{
	int i, j;

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < coloum; j++)
		{
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int matrix[6][6], i, j, row = 6, coloum = 6;

	int matrix1[6][6] = {
		   		{1, 2, 3, 4, 5, 6},
				{7, 8, 6, 5, 4, 3},
				{1, 5, 8, 7, 4, 1},
				{7, 90, 56, 88, 76},
				{3, 6, 8, 9, 0, 34},
				{4, 7, 8, 1, 2, 3}
		     	    };

	int matrix2[6][6] = {
				{5, 6, 7, 8, 9, 10},
				{67, 89, 90, 1, 2, 3},
				{5, 4, 33, 3, 4, 7},
				{5, 9, 3, 6, 8, 9},
				{11, 12, 13, 14, 15, 67},
				{0, 8, 6, 89, 90, 56},
		    	    };

	printf("\nThe matrices1\n");
	printMatrix(&matrix1[0], row, coloum);

	printf("\nThe matrices2\n");
	printMatrix(matrix2, row, coloum);
	
	printf("\nThe addition of two matrices\n");
	for(i = 0; i < row; i++)
		for(j = 0; j < coloum; j++)
			matrix[i][j] = matrix1[i][j] + matrix2[i][j];

	printMatrix(matrix, row, coloum);
}

	  
			

