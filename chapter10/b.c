/*A positive integer in entered through the keyboard, write a program
  to obtain the prime factors of the number. Modify the function
  suitably to obtain the prime factors recursively.

  Example:
	The prime factor of 24 is : 2 2 2 3
	The prime factor of 42 is : 2 3 7
*/

#include<stdio.h>

void factor(int);

void main()
{
	int number;
	
	printf("Enter the number to find the prime factor\n");
	scanf("%d", &number);

	printf("\nThe prime factor of %d is : ", number);
	factor(number);
	printf("\n\n");
}

void factor(int number)
{
	int divisor;

	for (divisor = 2; divisor <= number; divisor++)
	{	
		/*The modulo operation to a number is performed starting from number 2*/
		if (number%divisor == 0)
		{
			printf("%d ", divisor);

			factor(number/divisor);

			break;
		}
	}
	
}
