/*(c)Write a program t add first seven terms of the following
     series 1/1! + 2/2! + 3/3!+.......7/7! using for loop.
*/

/*Apporach:
	1)Consider the numbers from 1 to 7.
	2)Find the factorial of a numbers from 1 to 7.
	3)Then add the terms 1/1! + 2/2!+... in each step.
*/
  
#include<stdio.h>

void main()
{
	int number,divisor,factorial = 1;
	float terms_of_the_series;

	for (number=1;number<=7;number++)
	{
		factorial = 1;

		/*The factorial of a divisor is found at each step
		by always initializing it to 
		1*/
		for (divisor=1;divisor<=number;divisor++)
		{
			factorial = factorial*divisor;
		}
		printf("%d Factorial of a number is %d\n",number,factorial);

		/*The sum of first seven terms of a number is found by adding 
		the terms_of_series with number/factorial at each step.It 
		should continue till the seventh term.
		*/
		terms_of_the_series = terms_of_the_series +(float) number/factorial;
		printf(" Term value of first %d seies is %f\n",number,term_of_the_series);
	}
}		







