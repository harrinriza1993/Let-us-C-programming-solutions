/* (j) Rewrite the showbits() function used in this chapter using the _BV macro.*/

#include<stdio.h>

# define _BV(x) (1 << x)

void showbits(unsigned char n)
{
	unsigned char k, andmask;

	printf("\nThe binary value of a number is \n");
	for(int i = 7; i >= 0; i--)
	{
		/* _BV(i) is done using macro function. */
		andmask = _BV(i);
		k = n & andmask;
		k == 0 ? printf("0") : printf("1");
	}
	printf("\n");
}

void main()
{
	unsigned char n;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	showbits(n);
}
