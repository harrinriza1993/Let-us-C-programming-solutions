/*If a positive integer is entered through the keyboard, write a 
  recursive function to obtain the primefactors of the number.

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

	//Verify that entered number is positive
	if(number >= 1)
	{
		printf("\nThe prime factor of %d is : ", number);

		if (number == 1)
			printf("%d ", number);
		else
			factor(number);

		printf("\n\n");			
	}
	else
	{
		printf("\nInvalid Number : %d\n", number);
		printf("Please enter a positive number\n\n");
	}
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

			
	

