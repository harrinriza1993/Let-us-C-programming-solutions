/* (c) Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function
       checkbits(x, p, n) which returns true if all "n" bits starting from position "p" are
       turned on. For example, checkbits(x, 4, 3) will return true if bits 4, 3 and 2 are 1
       in number x.
*/

/* 
	76543210
	11011011
	p = 4
	n = 3
        
 */

#include<stdio.h>
#include<stdbool.h>

bool checkbits(int x, int p,int n)
{
	int y, is_bit_set;
	
	/*Checking the bits from starting position to the number of bits specified. */
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
		printf("\nSince the bits are on, it is True\n");
	else
		printf("\nSince the bits are off, it is False\n");
}
