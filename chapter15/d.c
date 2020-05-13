/*(d) Write a program that converts a string like "124" to an
      integer 124.

Apporach:
	1) To convert a string in to a integer subtract the number from 
           the 0 ascii value, which is 48.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char string_number[] = "124";
	int size = 3, i;
	int integer_number;
	
	/*Since the ascii value of 0 is 48, it is subtracted each time 
	  from the string of numbers. */
	printf("The integer number is \n");
	for(i = 0; i < size; i++)
	{
		integer_number = string_number[i];
		integer_number = integer_number - 48;
		printf ("%d", integer_number);
	}
}
