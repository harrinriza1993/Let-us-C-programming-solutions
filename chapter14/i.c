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

void main()
{
	int a[3][3] = {
			{1, 2, 3},
			{4, 5, 6},
			{1, 3, 3}
		      };

	int b[3][3] = {
			{4, 7, 8},
			{4, 9, 10}, 
			{3, 3, 4}
		      };

	int c[3][3], i, j, k, l, size = 3;

	printf("The multiplication of two matrices is \n");
	
	for(i = 0; i < size; i++)
	{
		
		for(j = 0; j < size; j++)
		{
			c[i][j] = 0;
			for(k = 0; k < size; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				
			}
		printf("%d ", c[i][j]);
		
		}
	}
}

