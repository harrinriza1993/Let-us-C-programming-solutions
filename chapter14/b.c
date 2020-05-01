/*(b) Write a program to pickup the largest number from any 5 row by 5 column 
      matrix.

Apporach:
	1. A 5X5 matrix should be considered.
	2. From that the largest element is found 
	   by comparing each elements.
*/

#include<stdio.h>

void main()
{
	int largeNumber, i, j;

	int array[5][5] = {
				{1, 2, 3, 4, 5},
				{6, 7, 8, 9, 10},
				{11, 12, 13, 14, 15},
				{16, 17, 1800, 100, 20},
				{21, 22, 23, 2488, 25}
			   };

	largeNumber = array[0][0];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (largeNumber < array[i][j])
				largeNumber = array[i][j];
		}
	}

	printf("The largest number in an array is %d\n", largeNumber);
}
				





