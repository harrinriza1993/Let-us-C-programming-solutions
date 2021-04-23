/* (k) Given the coordinates(x, y) of a center of a circle and its radius, write a program that will determine whether
       a point lies inside the circle, on the circle or outside the circle. (Hint : Use sqrt() and pow() functions)
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int x, y, r;
	
	printf("Enter the coordinates of x and y\n");
	scanf("%d%d", &x, &y);
	
	printf("Enter the radius of the circle\n");
	scanf("%d", &r);
	
	if(r >= sqrt(pow(x,2) + pow(y, 2)))
		printf("The coordinates lies inside the circle\n");
	else
		printf("The coordinates lies outside the circle\n");		
}

