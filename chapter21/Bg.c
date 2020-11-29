/* (g) Write a program to receive a 8 bit number into a variable and then set its odd bits to 1. */

#include<stdio.h>
# define checkbits(number) (1 << number)

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 
  
 

void main()
{
	int n, x;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	 printf("Before set bit "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(n));	
	/*To set it's odd bits to 1 skip each bits at each step. */
	for(int i = 1; i <= 7; i = i + 2)
	{
		
		n = n | checkbits(i);
	}
	
	printf("\nAfter set bit  "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(n));	
}

 	
