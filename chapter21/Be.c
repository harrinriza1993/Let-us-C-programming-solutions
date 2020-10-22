/* (e) Write a program to receive an unsigned 16-bit integer and exchange the contents of its
       2 bytes using bitwise operators.
*/
       
#include<stdio.h>

void main()
{
	int n, x , y, z;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	
	/*Left shift and right shift the number by 15 and do or operation. */
	x = n << 15;
	y = n >> 15;
	z = x | y;
	
	printf("The number after swapping is %d\n", z);
}
