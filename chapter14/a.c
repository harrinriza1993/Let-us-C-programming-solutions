/*How will you initialize a three-dimensional array thread[3][2][3].
  How will you refer the first and last element in this array.

Apporach:
	1. A 3-D array can be thought of as an array of arrays.
	2. The syntax is int arrayname[][][]; , Where [] states that it is
	   3 dimensional array.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, j, k;

	/*The outer array has 3 elements, each of which is a 2-D
          array of two 1-D arrays,each of which contain 3 integers*/ 
	int thread[3][2][3] = {
				{
					{1, 2, 3},
					{4, 5, 6}
				},

				{
					{7, 8, 9},
					{10, 11, 12}
				},

				{
					{13, 14, 15},
					{16, 17, 18}
				}

			      };

	printf("The first and last element in the array is \n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				/*In order to refer the 1st and last element their corresponding
				  positions are printed.*/
				printf("%d\n%d\n", thread[0][0][0], thread[2][1][2]);
				exit(0);
			}
		}	
	}
	
}
