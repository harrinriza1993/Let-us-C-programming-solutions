/* (l) Given a point (x,y), write a program to find out if it lies X-axis, Y-axis or on the origin. */

#include<stdio.h>

void main()
{
	int x, y;
	
	printf("Enter the points\n");
	scanf("%d%d", &x, &y);
	
	if(x == 0 && y != 0)
		printf("The point lies in Y axis\n");
	else if(x != 0 && y == 0)
		printf("The point lies in X axis\n");
	else if(x == 0 && y == 0)
		printf("The point lies in center\n");
	else
		printf("The point neither lies in X axis nor in Y axis\n");
}
