/* (c) If three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid
       or not. The triangle is valid if the sum of two sides is greater than the largest of three sides.
*/

#include<stdio.h>

void main()
{
	int side1, side2, side3, max;
	
	printf("Enter the three sides of the triangle\n");
	scanf("%d%d%d", &side1, &side2, &side3);
	
	if((side1 > side2) && (side1 > side3))
		max = side1;
	else if((side2 > side1) && (side2 > side3))
		max = side2;
	else 
		max = side3;
	
	if(((max == side1) && (side1 < (side2 + side3))) || ((max == side2) && (side2 < (side1 + side3))) || ((max == side3) && (side3 < (side1 + side2))))
		printf("The Triangle is a valid triangle\n");
	else
		printf("The triangle is not a valid triangle\n");        
}

