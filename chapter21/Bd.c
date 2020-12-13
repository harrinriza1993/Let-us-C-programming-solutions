/*(d) Write a program to scan a 8 bit number into a variable and check whether its
      3rd, 6th and 7th bit is on.
*/

#include<stdio.h>

#define CHECK_BIT(number, is_bit_set) (1 << is_bit_set) & (number)

void main()
{
	int number;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	/* Check the number with 3rd bit, 5th bit, 7th bit. */
	if (CHECK_BIT(number, 3) && CHECK_BIT(number, 5) && CHECK_BIT(number, 7))
		printf("The required bits [3rd, 5th and 7th] are on\n");
	else
		printf("The required bits [3rd, 5th and 7th] are off\n"); 
}
