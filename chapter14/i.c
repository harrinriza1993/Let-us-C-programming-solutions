/*(i) Write a program to multiply any 3 x 3 matrices.

Apporach:
	1. To multiply a matrix the common method used is,
      	   if we need to calculate c[0][0] the first element then  
           c[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0] 
                      + a[0][2] * b[2][0])
	2. This is the way to find the rest of the element in a 
           matrix. 
*/

#include<stdio.h>

#define ROW 3
#define COLUMN 3

void printMatrix(int (*array)[COLUMN])
{
	int i, j;

	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COLUMN; j++)
		{
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int matrix3[3][3], i, j, k, size = 3;

	int matrix1[3][3] = {
			{1, 2, 3},
			{4, 5, 6},
			{1, 3, 3}
		      };

	int matrix2[3][3] = {
			{4, 7, 8},
			{4, 9, 10}, 
			{3, 3, 4}
		      };

	printf("\nThe matrices1\n");
	printMatrix(matrix1);

	printf("\nThe matrices2\n");
	printMatrix(matrix2);	
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COLUMN; j++)
		{
			matrix3[i][j] = 0;
			for(k = 0; k < size; k++)
				matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
		}
	}

	printf("\nThe multiplication of two matrices is \n");
	printMatrix(matrix3);
}



