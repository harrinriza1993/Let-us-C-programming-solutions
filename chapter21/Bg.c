/* (g) Write a program to receive a 8 bit number into a variable and then set its odd bits to 1. */

#include<stdio.h>

void main()
{
	int n, x;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	/*To set it's odd bits to 1 skip each bits at each step. */
	for(int i = 1; i <= 7; i = i + 2)
	{
		x = 1 << i;
		n = n | x;
	}
	
	printf("The number after setting it's odd bit to 1 is %d\n", n);
}
