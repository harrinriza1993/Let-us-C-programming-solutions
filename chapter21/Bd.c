/*(d) Write a program to scan a 8 bit number into a variable and check whether its
      3rd, 6th and 7th bit is on.
*/

#include<stdio.h>

void main()
{
	int number, x, n = 0;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	/*Left shift 1 by the respective bit and do and operation with the
	  number, if we get 0 then the bit is off or else the bit is on. */
	x = 1 << 3;
	n = number & x;
	
	if (n != 0)
		printf("The 3rd bit is on\n");
	else
		printf("The 3rd bit is off\n"); 
	
	x = 1 << 6;
	n = number & x;
	
	if(n != 0)
		printf("The 6th bit is on\n");
	else
		printf("The 6th bit is off\n");
	
	x = 1 << 7;
	n = number & x;
	
	if(n != 0)
		printf("The 7th bit is on\n");
	else
		printf("The 7th bit is off\n");
}
