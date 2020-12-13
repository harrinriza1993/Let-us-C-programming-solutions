/*(f) Write a program to receive a 8 bit number into a variable and exchange 
      it's higher 4 bits with lower 4 bits.
*/

/*
1 bytes : 4 bits [15-8 7-0]
 7 6 5 4 3 2 1 0  : Bit positions (8 bit)
 1 0 0 1 0 1 1 0  : input
 0 1 1 0 0 0 0 0 : input << 4 : left
 0 0 0 0 1 0 0 1  : input >> 4 : right
 0 1 1 0 1 0 0 1  : left  | right
*/
       
#include<stdio.h>

void main()
{
	unsigned char number, left, right;
	
	printf("Enter the number of 1 byte (Ex. 0xAB) in hexadecimal form\n");
	scanf("%x", &number);
	
	printf("The number before swapping is 0x%x\n", number);
	
	/*Left shift and right shift the number by 4 and do or operation. */
	left = (number << 4);
	right = (number >> 4);
	number = left | right;
	
	printf("The number after swapping is 0x%x\n", number);
}
