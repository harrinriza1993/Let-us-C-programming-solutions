/*(c) Write a macro defintions with argument for calculation
      of area and perimeter of a triangle,a square and a circle
      Store these macro defintions in a file called "areaperi.h".
      Include this file in your program, and call the macro definitions
      for calculating area and perimeter for different squares,triangles
      and circles.

Apporach:
	1)Define the macrodefintions in areaperi.h file
        2)call the macrodefintions in this program.
*/

#include<stdio.h>

#include "areaperi.h"

void calculate_area_perimeter_triangle()
{
	float area, perimeter;
	int base, height, side1, side2, side3;

	printf("\nEnter the base and height for triangle\n");
	scanf("%d %d",&base, &height);
	printf("Enter the three sides of a triangle\n");
	scanf("%d %d %d",&side1, &side2, &side3);
	
	/* Area and perimeter of a triangle */
	area = AREA_OF_TRIANGLE(base, height);
	perimeter = PERIMETER_OF_TRIANGLE(side1, side2, side3);

	printf("The area of the triangle is %f\n", area);
	printf("The perimeter of the triangle is %f\n\n", perimeter);
}

void calculate_area_perimeter_square()
{
	float area, perimeter;
	int side;

	printf("\nEnter the side of the square\n");
	scanf("%d", &side);

	/*Area and perimeter of square*/
	area = AREA_OF_SQUARE(side);
	perimeter = PERIMETER_OF_SQUARE(side);

	printf("The area of a square is %f\n", area);
	printf("The perimeter of a  square is %f\n\n", perimeter);
}

void calculate_area_perimeter_circle()
{
 	float area, perimeter;
	int radius;

	printf("\nEnter the radius of a circle\n");
	scanf("%d", &radius);
	
	/*Area and perimeter of circle*/
	area = AREA_OF_CIRCLE(radius);
	perimeter = AREA_OF_CIRCLE(radius);

	printf("The area of a square is %f\n", area);
	printf("The perimeter of a square is %f\n", perimeter); 
}

void main()
{
	calculate_area_perimeter_triangle();

	calculate_area_perimeter_square();

	calculate_area_perimeter_circle();
}

