/* (i) Given the length and breadth of a rectangle, write a program to find whether the area of rectangle is greater than
       it's perimeter. For example, the area of rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/

#include<stdio.h>

void main()
{
	int l = 5, b = 4;
	int area = l * b;
	int perimeter = 2 * (l + b);
	
	if (area > perimeter)
		printf("The area of rectangle is greater than it's perimeter\n");
	else
		printf("The area of rectangle is not greater than it's perimeter\n");
}
