/*(c) Write a program to obtain transpose of a 4 X 4 matrix. The
      transpose of a matrix is obtained by exchanging the elements of 
      each row with the elements of the corresponding column.

Apporach
	  The row and column are interchanged and it is stored in 
	  another array, that is the transpose of a matrix. 
*/

#include<stdio.h>

void main()
{
	int temp,i,j,transpose_array[4][4];

	int array[4][4] = {
				{1, 2, 3, 7},
				{4, 5, 6, 9},
				{10,11,12,13},
				{14,15,16,17}
 		       };

	printf("\nThe original matrix is \n");
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
			printf("%d ",array[i][j]);

		printf("\n");
	}

	printf("\nThe transpose of a matrix is \n");
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			/*The row and column in array is interchanged
                          and it is stored in another array.*/
			transpose_array[i][j] = array[j][i];

			 printf("%d ",transpose_array[i][j]);
		}

		printf("\n");
	}
}


	 
