/* (g) If value of an angle is input through the keyboard, write a program to print all its 
       Trignometric ratios.
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

void main()
{
	float angle, radian;
	
	printf("Enter the angle of the triangle\n");
	scanf("%f", &angle);
	
	radian = angle * (PI / 180);
	
	printf("The Trignometric ratios of a triangle are\n");
	printf("The sine of an angle is %f\n", sin(radian));
	printf("The cosine of an angle is %f\n", cos(radian));
	printf("The tan of an angle is %f\n", tan(radian));
	printf("The cosec of an angle is %f\n", 1 / sin(radian));
	printf("The sec of an angle is %f\n", 1 / cos(radian));
	printf("The cot of an angle is %f\n", 1/ tan(radian));
}
