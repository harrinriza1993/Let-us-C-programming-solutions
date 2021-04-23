/* (h) Write a program to find the absolute value of a number entered through the keyboard. */

#include<stdio.h>

void main()
{
	int n, number;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	if(n > 0)
	{
		number = n;
		printf("The absolute value of %d is %d\n", n, number);
	}
	if(n < 0)
	{
		number = -1 * n;
		printf("The abosulute value of %d is %d\n", n, number);
	}
}
