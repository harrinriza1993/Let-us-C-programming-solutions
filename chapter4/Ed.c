/* (d) Write a program to receive value of an angle in degrees and chek whether sum of squares of sine and cosine of this angle is equal to 
       1.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int angle, sum;
	
	printf("Enter the angle in degrees\n");
	scanf("%d", &angle);
	
	sum = (cos(angle) * cos(angle)) + (sin(angle) * sin(angle));
	
	((sum == 1) ? printf("The sum of squares of sin and cosine value is 1\n") : printf("The sum of squares of sin and cosine value is not equal to 1\n"));
}
