/*(a) Write a program to print all prime numbers from  1 to 300.*/

/*Apporach:
	1) Check the given range of numbers divisiblity using
	modulo operator
	2)If the number divisible either by 1 or the same 
	number then it is a prime number
*/

																												}#include<stdio.h>

void main()
{
	int number,divisor;

	for ( number = 1; number <= 300;number ++)
	{
		for ( divisor = 2;divisor < number;divisor ++)
		{
			
			/*check a number's divisiblity,if a number is
			divided by any other number then the statement
			breaks and it moves to next line
			*/
			if (number % divisor == 0)
			{
				break;
			}

		}

		/*If a number does not divided by any other number except 1 
		or the same number then the number is a prime number
		*/
		if (number == divisor)
			printf("%d is a prime number\n",number);
	}
}
