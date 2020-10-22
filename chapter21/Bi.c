/* (i) Write a program to receive a 8-bit number into a variable and check if it's 3rd 
       bit and 5th bit are off. If these bits are found to be off then put them on.
*/

#include<stdio.h>

void main()
{
	int n, x, y;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	x = 1 << 3;
	y = n & x;
	
	if(y == 0)
		printf("\nThe 3rd bit is off\n");
	else
		printf("\nthe 3rd bit is on\n");
		
	x = 1 << 5;
	y = n & x;
	
	if(y == 0)
		printf("The 5th bit is off\n");
	else
		printf("The 5th bit is on\n");
	
	/*To make respective bits on left shift 1 by 3 and do or operation
	  with the number. */
	x = 1 << 3;
	y = n | x;
	
	x = 1 << 5;
	y = y | x;
	
	printf("\nThe number after reseting 3rd bit and 5th bit on is\n");
	printf("%d\n", y); 
}
