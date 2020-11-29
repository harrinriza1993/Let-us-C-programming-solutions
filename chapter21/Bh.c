/* (h) Write a program to receive a 8 bit number into a variable and check if it's 3rd and 5th
       bits are on. If these bits are found to be on then put them off.
*/

#include<stdio.h>
#define checkbit(x) (1 << x)

void main()
{
	int is_bit_set, left_shift, bit_set;
	int number;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	is_bit_set = number & checkbit(3);
	
	if(is_bit_set != 0)
	{
		printf("The 3rd bit is on\n");
		left_shift = ~(1 << 3);
		bit_set = number & left_shift;
		printf("The number reseting 3rd bit off is %d\n", bit_set); 
		
	}
	else
	{
		printf("The 3rd bit is off\n");
	}
	
	is_bit_set = number & checkbit(5);
	
	if(is_bit_set != 0)
	{
		printf("The 5th bit is on\n");
		left_shift = ~(1 << 5);
		bit_set = bit_set & left_shift;
		printf("The number after reseting 5th bit on is %d\n", bit_set);
	}
	else
	{
		printf("The 5th bit is off\n");
	}
}
