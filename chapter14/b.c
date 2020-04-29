/*(b) Write a program to pickup the largest number from any 5 row by 5 column 
      matrix.

Apporach:
	1. A 5X5 matrix should be considered.
	2. From that the largest element is found 
	   by comparing each elements.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int temp, i, j;

	int array [5][5] = {
				{1, 2, 3, 4, 5},
				{6, 7, 8, 9, 10},
				{11, 12, 13, 14, 15},
				{16, 17, 18, 100, 20},
				{21, 22, 23, 24, 25}
			    };
	
	/*To find the largest number each element in the array is compared
          with the first element and the largest element is stored in
          first element in an array*/s
	for (i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if (array[0][0] > array[i][j])
			{
				array[0][0] = array[0][0];
			}
			else
			{
				temp = array[0][0];
				array[0][0] = array[i][i];
				array[i][i] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("The largest number in an array is %d\n",array[0][0]);
			exit(0);
		}
	}

}
				





