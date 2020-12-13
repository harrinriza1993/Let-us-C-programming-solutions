/* (h) Write a program to receive a 8 bit number into a variable and check if it's 3rd and 5th
       bits are on. If these bits are found to be on then put them off.
*/

#include<stdio.h>

#define IS_BIT_SET(number, pos) (number & (1 << pos))
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
  
unsigned char checkAndClearIfBitSet(unsigned char number, int bit_position)
{
	unsigned char clear_bit;
	
	if(IS_BIT_SET(number, bit_position))
	{
		printf("\nThe %drd bit is on\n", bit_position);
		
		// Clear the bit
		clear_bit = ~(1 << bit_position);
		clear_bit = number & clear_bit;
		return clear_bit;
	}

	return number;
}

void main()
{
	unsigned char number;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	printf("\nBefore clear bit "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(number));
	
	number &= checkAndClearIfBitSet(number, 3);
	number &= checkAndClearIfBitSet(number, 5);
	
	printf("\nAfter clear bit "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(number));
}
