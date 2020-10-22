/* (c) Consider an unsigned integer in which rightmost bit is numbered as 0. Write a function
       checkbits(x, p, n) which returns true if all "n" bits starting from position "p" are
       turned on. For example, checkbits(x, 4, 3) will return true if bits 4, 3 and 2 are 1
       in number x.
*/

#include<stdio.h>

int checkbits(int x, int p,int n)
{
	int y, count = 0, z, k = p;
	
	/*Checking the bits from starting position to the number of bits specified. */
	for(int i = p; p >= n; p--)
	{
		 y = 1 << p;
		 z = y & x;
		 
		 if(z != 0)
		 	count++;
		 else
		 	break;
	}
	
	if(count == (n + 1))
		return 1;
	else
		return 0;
	
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
	
	if(check == 1)
		printf("\nSince the bits are on, it is True\n");
	else
		printf("\nSince the bits are off, it is False\n");
}
