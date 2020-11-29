/* (i) Write a program to receive a 8-bit number into a variable and check if it's 3rd 
       bit and 5th bit are off. If these bits are found to be off then put them on.
*/

#include<stdio.h>
#define checkbit(x) (1 << x)

void main()
{
	int number, is_bit_set, bit_set;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	is_bit_set = number & checkbit(3);
	
	if(is_bit_set == 0)
	{
		printf("\nThe 3rd bit is off\n");
		bit_set = number | checkbit(3);
		printf("The number after reseting 3rd bit on is %d\n", bit_set);
	}
	else
	{
		printf("The 3rd bit is on\n");
	}
	
	is_bit_set = number & checkbit(5);
	
	if(is_bit_set == 0)
	{
		printf("\nThe 5th bit is off\n");
		bit_set = bit_set | checkbit(5);
		printf("The number after reseting 5th bit on is %d\n", bit_set);
	}
	else
	{
		printf("The 5th bit is on\n");
	}
}
