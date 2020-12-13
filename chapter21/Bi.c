/* (i) Write a program to receive a 8-bit number into a variable and check if it's 3rd 
       bit and 5th bit are off. If these bits are found to be off then put them on.
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
  
unsigned char checkAndSetIfBitSet(unsigned char number, int bit_position)
{
	unsigned char set_bit;
	
	if(!IS_BIT_SET(number, bit_position))
	{
		printf("\nThe %drd bit is off\n", bit_position);
		
		// Set the bit
		set_bit = number | (1 << bit_position);
		return set_bit;
	}

	return number;
}

void main()
{
	unsigned char number;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	printf("\nBefore clear bit "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(number));
	
	number |= checkAndSetIfBitSet(number, 3);
	number |= checkAndSetIfBitSet(number, 5);
	
	printf("\nAfter set bit "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(number));
}
