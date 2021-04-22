/* (h) Two numbers are input through the keyboard into two locations C and D. Write
       a program to interchange the contents.
*/

#include<stdio.h>

void main()
{
	int x, y, temp;
	
	printf("Enter the values of x and y\n");
	scanf("%d%d", &x, &y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("The values after interchanging are x = %d and y = %d\n", x , y);
}
