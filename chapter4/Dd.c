/* (d) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is
       isosceles, equilateral, scalene or right angled triangle.
*/

#include<stdio.h>

void main()
{
	int side1, side2, side3, max;
	printf("Enter the sides of the triangle\n");
	scanf("%d%d%d", &side1, &side2, &side3);
	
	/* All sides are equal in equilateral triangle. */
	if((side1 == side2) && (side1 == side3))
		printf("The triangle is equilateral\n");
	
	/*Any two sides of a traingle is equal means isosceles triangle. */
	if( ((side1 == side2) && (side1 != side3)) || ((side2 == side3)  && (side2 != side1)) || ((side1 == side3)  && (side1 != side2)))
		printf("The triangle is isosceles triangle\n");
	
	/*Sum of square of two sides of a traingle is equal to square of the largest side. If the sides satsisfy this
	  pythogoras therom, then it is a right angled triangle. */	
	if((side1 > side2) && (side1 > side3))
		max = side1;
	else if((side2 > side1) && (side2 > side3))
		max = side2;
	else 
		max = side3;
	
	if(((max == side1) && (side1 * side1 == (side2 * side2 + side3 * side3))) || ((max == side2) && (side2 * side2 == (side1 * side1 + side3 * side3))) || ((max == side3) && (side3 == (side1 *     	      side1 + side2 * side2))))
		printf("The Triangle is a right angled triangle\n");
}
