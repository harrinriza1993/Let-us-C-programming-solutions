/* (c) If length of three sides of a triangle are input through the keyboard, write a program to find 
       the area of the triangle. 
*/

#include<stdio.h>

void main()
{
	int length1, length2, length3, area;
	
	printf("Enter the three sides of the triangle\n");
	scanf("%d%d%d", &length1, &length2, &length3);
	
	area = (length1 + length2 + length3) / 2;
	
	printf("The area of the triangle is %d\n", area);
}
       
