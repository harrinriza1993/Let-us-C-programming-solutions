/* (e) The length and breadth of a rectangle and radius of a circle are input through the
       Keyboard. Write a program to calculate the area and perimeter of the rectangle, and
       the area and circumference of the circle.
*/

#include<stdio.h>
#define PI  3.14

void main()
{
	int length, breadth, radius;
	
	printf("Enter the length and breadth of rectangle\n");
	scanf("%d%d", &length, &breadth);
	printf("Enter the radius of the circle\n");
	scanf("%d", &radius);
	
	printf("The area of the rectangle is %f\n", (float) (length * breadth));
	printf("The perimeter of the rectangle is %f\n", (float) 2 * (length + breadth));
	printf("The area of the circle is %f\n", (float)PI * radius * radius);
	printf("The circumference of the circle is %f\n", (float)2 * PI * radius); 
}
