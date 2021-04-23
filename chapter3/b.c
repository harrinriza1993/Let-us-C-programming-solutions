/* (b) Any integer is input through the keyboard. Write a program to find out whether it is odd number or even number. */

#include<stdio.h>

void main()
{
	int number;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	if(number % 2 == 0)
		printf("The number is a even number\n");
	else
		printf("The number is odd number\n"); 
}
