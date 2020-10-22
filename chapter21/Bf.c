/*(f) Write a program to receive a 8 bit number into a variable and exchange 
      it's higher 4 bits with lower 4 bits.
*/

#include<stdio.h>

void main()
{
	unsigned char n, y = 0, x;
	
	printf("Enter the number\n");
	scanf("%c", &n);
	
	for(int i = 0; i < 8; i++)
	{
		/*Find the last bit of the number and do or operation with y. */
		x = n & 0x01;
		y = y | x;
		
		/*Right shift the number at each step. */
		n = n >> 1;
		
		/*Left shift y at each step to exchange the higher bits and lower bits. */
		y = y << 1;
	}
	
	printf("The number after exchanging it's higher bits and lower bits is %d\n", y);
}
