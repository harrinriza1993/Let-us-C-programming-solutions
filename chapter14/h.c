/*(h) Write a program to add two 6 X 6 matrices.

Apporach
	1. The first element of the first matrix and first element
  	   of the second matrix should be added.
	2. It happens with other elements also.
*/

#include<stdio.h>

void main()
{
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
	int matrix[6][6], i, j, size = 6;
	
	printf("The addition of two matrices\n");
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			matrix[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d ", matrix[i][j]);
		}
	}
}

	  
			

