/* (h) Write a program to receive a 8 bit number into a variable and check if it's 3rd and 5th
       bit are on. If these bits are found to be on then put them off.
*/

#include<stdio.h>

void main()
{
	int x, y;
	unsigned char n;
	
	printf("Enter the number\n");
	scanf("%c", &n);
	
	x = 1 << 3;
	y = n & x;
	
	if(y != 0)
		printf("The 3rd bit is on\n");
	
	x = 1 << 5;
	y = n & x;
	
	if(y != 0)
		printf("The 5th bit is on\n");
	
	/*To put the shifts to off left shift 1 by respective number and do complement operation
	  and do and operation with the number. */
	x = ~(1 << 3);
	y = n & x;

	x = ~(1 << 5);
	y = y & x;
	
	printf("%d\n", y); 
}
