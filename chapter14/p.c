/*(p) The X and Y coordinates of 10 different points are entered through
      the keyboard. Write a program to find the distance of last point
      from the first point(sum of distance between consecutive points).

Apporach:
	1) The distance between consecutive points is found using the formula
          	distance = sqrt(x1 - x)^2 + (y1 - y)^2
	2) Then the total distance is the distance of last point from first point

*/

#include<stdio.h>
#include<math.h>

void main()
{
	int a[10][2];
	int row = 10, col = 2, i, distance = 0, j;
	
	printf("Enter the (x,y) coordinates\n");

	for(i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0; i < row; i++)
	{
		distance  = distance + (sqrt(pow((a[i + 1][0] - a[i][0] ), 2)) + sqrt(pow((a[i + 1][1] - a[i][1]),2)));
	}
	printf("The distance of last point from the first is %d\n",distance);
}
		


	
	 
