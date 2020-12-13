/* (c) Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function
       checkbits(x, p, n) which returns true if all "n" bits starting from position "p" are
       turned on. For example, checkbits(x, 4, 3) will return true if bits 4, 3 and 2 are 1
       in number x.
*/

#include<stdio.h>
#include<stdbool.h>

/*
 * brief : Function to check bits
 *
 * @param x Number to check
 * @param p Sttarting position of the bit
 * @param x Number of bit
 *
 * return True if all bits starting from position are turned on otherwise false
 */
bool checkbits(int x, int p, int n)
{
	int is_bit_set;
	
	/* Checking the bits from starting position to the number of bits specified. */
	for(int i = 0; i < n; i++, p--)
	{
		 is_bit_set = (1 << p) & x;
		 
		 if(!is_bit_set)
		 	return false;
	}
	
	return true;
}

int main()
{
	int x, p, n, check;

	printf("Enter the number\n");
	scanf("%d", &x);
	printf("Enter the starting position of the number to the checked\n");
	scanf("%d", &p);
	printf("Enter the number of bits to be checked from the starting position \n");
	scanf("%d", &n);
	
	/*Function to check whether the bits are turned on. */
	check = checkbits(x, p, n);
	
	if(check)
		printf("\nAll of the bits are turned on\n");
	else
		printf("\nAll of the bits are NOT turned on\n");
}
