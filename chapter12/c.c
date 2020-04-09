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

void main()
{
	int base,height,side1,side2,side3,side,radius,area,perimeter;
	
	/*Area and perimeter of a triangle*/
	printf("Enter the base and height\n");
	scanf("%d%d",&base,&height);
	printf("Enter the sides of a triangle\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	area = AREA_OF_TRIANGLE(base,height);
	perimeter = PERIMETER_OF_TRIANGLE(side1,side2,side3);

	printf("The area of the triangle is %d\n",area);
	printf("The perimeter of the triangle is %d\n\n",perimeter);
	
	/*Area and perimeter of square*/
	printf("Enter the side of the square\n");
	scanf("%d",&side);

	area = AREA_OF_SQUARE(side);
	perimeter = PERIMETER_OF_SQUARE(side);

	printf("The area of a square is %d\n",area);
	printf("The perimeter of a  square is %d\n\n",perimeter);

 	/*Area and perimeter of circle*/
	printf("Enter the radius\n");
	scanf("%d",&radius);
	
	area = AREA_OF_CIRCLE(radius);
	perimeter = AREA_OF_CIRCLE(radius);

	printf("The area of a square is %d\n",area);
	printf("The perimeter of a square is %d\n",perimeter); 
}


	


