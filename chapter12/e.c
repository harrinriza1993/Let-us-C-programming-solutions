/*(e) Write macro definitions with arguments for calculation
   of simple interest and amount. Store these macro definitions
   in a file called "interest.h". Include this file in your program
   and use the macro definitions for calculating simple interest
   and amount.

Apporach:
	1)The formula for simple interest is
		SI = pnr/100;
	2)The calculation for amount is
		A = p + SI
	2) We have to define this in another file and it is 
	   included in the current file.
*/

#include<stdio.h>

#include "interest.h"

void main()
{
	float principle, year, rate, simpleinterest, amount;
	
	printf("Enter the principle amount\n");
	scanf("%f", &principle);
	printf("Enter the number of times interest is compounded per year\n");
	scanf("%f", &year);
	printf("Enter the rate\n");
	scanf("%f", &rate);

	simpleinterest = SIMPLE_INTEREST(principle, year, rate);
	printf("\nThe simple interest amount is %f\n", simpleinterest);

	amount = AMOUNT(principle, simpleinterest);
	printf("The amount is %f\n\n", amount);
}

