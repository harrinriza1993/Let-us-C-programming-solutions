/*(c) Write a program to add first seven terms of the following
      series 1/1! + 2/2! + 3/3!+.......7/7! using for loop.

Apporach:
	1)Consider the numbers from 1 to 7.
	2)Find the factorial of a numbers from 1 to 7.
	3)Then add the terms 1/1! + 2/2!+... in each step.
*/
  
#include<stdio.h>

void main()
{
	int number,fact,factorial = 1;
	float addition = 0;

	for (number=1;number <= 7;number++)
	{
		factorial = 1;

		for (fact=1;fact<=number;fact++)
		{
			factorial = factorial*fact;
		}
		printf("Factorial of %d is %d and %d/%d! is %f \n",
			number, factorial, number, factorial, (float) number/factorial);

		/*The addition of first seven terms of a number is found by adding 
		the addition with number/factorial at each step.It 
		should continue till the seventh term.*/		
		addition = addition +(float) number/factorial;
	}
	
	printf("\nThe addition of first seven terms : %f\n", addition);
}







