/* (b) Write a function that receives variable number of arguments, where the arguments are the 
       coordinates of a point. Based on the number of arguments received, the function should display
       type of shape like a point, line, triangle, etc., that can be drawn.
*/

#include<stdio.h>
#include<stdarg.h>

void arguments(int count, ...)
{
	va_list list;
	va_start(list, count);
	va_arg(list, int);
	
	if(count == 1)
		printf("The shape is a point\n");
	else if(count == 2)
		printf("The shape is a line\n");
	else if(count == 3)
		printf("The shape is a triangle\n");
	else if(count == 4)
		printf("The shape is a square\n");
}

void main()
{
	arguments(1, 1);
	arguments(3, 1, 2, 3);
	arguments(4, 1, 2, 3, 4);
	arguments(2, 1, 2);
}
