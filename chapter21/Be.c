/* (e) Write a program to receive an unsigned 16-bit integer and exchange the contents of its
       2 bytes using bitwise operators.*/
       
/*
2 bytes : 8 bits [15-8 7-0]
15 14 13 12 11 10  9 8 7 6 5 4 3 2 1 0  : Bit positions (16 bit)
1   0 1   1  0  1  1 0 1 0 0 1 0 1 1 0  : input
1   0 0   1  0  1  1 0 0 0 0 0 0 0 0 0  : input << 8 : left
0   0 0   0  0  0  0 0 1 0 1 1 0 1 1 0  : input >> 8 : right
1   0 0   1  0  1  1 0 1 0 1 1 0 1 1 0  : left  | right
*/
       
#include<stdio.h>

void main()
{
	unsigned short int number, left, right;
	
	printf("Enter the number of 2-bytes (Ex. oxabcd) in hexadecimal form\n");
	scanf("%x", &number);
	
	printf("The number before swapping is 0x%x\n", number);
	
	/* Left shift and right shift the number by 15 and do or operation. */
	left = (number << 8);
	right = (number >> 8);
	number = left | right;
	
	printf("The number after swapping is 0x%x\n", number);
}
