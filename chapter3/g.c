/* (g) Write a program to check whether a triangle is valid or not, when three angles are entered through
       the keyboard. A triangle is valid if the sum of all three angles is equal to 180 degrees.
*/

#include<stdio.h>

void main()
{
	int angle1, angle2, angle3;
	
	printf("Enter the three angles of a triangle\n");
	scanf("%d%d%d", &angle1, &angle2, &angle3);
	
	if(angle1 + angle2 + angle3 == 180)
		printf("The triangle is a valid triangle\n");
	else
		printf("The triangle is not a valid triangle\n");
}
