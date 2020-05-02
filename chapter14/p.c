/*(p) The X and Y coordinates of 10 different points are entered through
      the keyboard. Write a program to find the distance of last point
      from the first point(sum of distance between consecutive points).

Apporach:
	1) The distance between consecutive points is found using the formula
          	distance = sqrt[(x1 - x)^2 + (y1 - y)^2]
	2) Then the total distance is the distance of last point from first point

*/

#include<stdio.h>
#include<math.h>

void main()
{
	int a[10][2], x2Minusx1Square, y2Minusy1Square;
	int row = 10, col = 2, i, distance = 0, j;
	
	printf("Enter the (x,y) coordinates\n");

	for(i = 0; i < row; i++)
	{
		printf("Enter the co ordinates of (x%d, y%d): ", i, i);
		scanf("%d %d", &a[i][0], &a[i][1]);
	}

	for(i = 0; i < row-1; i++)
	{
		x2Minusx1Square = pow((a[i+1][0] - a[i][0]), 2); // (x2 - x1)^2
		x2Minusx1Square = pow((a[i+1][1] - a[i][1]), 2); // (x2 - x1)^2

		distance  += sqrt(x2Minusx1Square + x2Minusx1Square);
	}

	printf("\nThe distance of last point(%d,%d) from the first(%d,%d) is %d\n\n", \
		a[row-1][0], a[row-1][1], a[0][0], a[0][1], distance);
}
		


	
	 
