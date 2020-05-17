/*(j) Given an array p[5], write a function to shift it circularly left
      by two positions. Thus, if p[0] = 15, p[1] = 30, p[2] = 28, p[3] = 
      19 and p[4] = 61 then after the shift p[0] = 28, p[1] = 19, p[2] =
      61, p[3] = 15 and p[4] = 30. Call this function for a (4 X 5) matrix 
      and get it's rows left shifted.

Apporach:
	1) Since it is 4 x 5 matrix 20 elements is present.
	2) The elements should be shifted in rowwise. The first
           row should not interfere with the second row.
*/

#include<stdio.h>

void printArray(int a[4][5], int row, int col);
void circularlyLeftShiftByTwoPosition(int a[4][5], int, int);

void main()
{
	int a[4][5] = { {15, 30, 28, 19, 61},
			{15, 30, 28, 19, 61},
			{15, 30, 28, 19, 61},
			{15, 30, 28, 19, 61},
		      };

	int row = 4, col = 5;
	
	printf("orignal array\n");
	printArray(a, row, col); 

	circularlyLeftShiftByTwoPosition(a, row, col);

	printf("\nArray circularly left shifted by two positions\n");
	printArray(a, row, col); 
}

void circularlyLeftShiftByTwoPosition(int a[4][5], int row, int col)
{
	int i, j, temp1, temp2;

	for(i=0; i<row; i++)
	{
		temp1 = a[i][0];
		temp2 = a[i][1];

		for(j = 0; j < col-2; j++)
		{
			a[i][j] = a[i][j + 2];
		}

		a[i][col-1] = temp2;
		a[i][col-2] = temp1;
	}
}


void printArray(int a[4][5], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
			printf("%2d ", a[i][j]);

		printf("\n");
	}

}


