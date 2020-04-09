/*(e) Write macro definitions with arguments for calculation
   of simple interest and amount.Store these macro definitions
   in a file called "interest.h".Include this file in ur program
   and use the macro definitions for calculating simple interest
   and amount.

Apporach:
	1)The formula for simpleinterest is
		SI = pnr/100;
	2)The calculation for amount is
		A = P(1+r/n)^nt
	2) We have to define this in another file and it is 
	   included in the current file.
*/

#include<stdio.h>

#include "interest.h"

void main()
{
	int principle,year,rate,time,simpleinterest,amount;
	
	printf("Enter the principle amount\n");
	scanf("%d",&principle);
	printf("Enter the number of times interest is compounded per year\n");
	scanf("%d",&year);
	printf("Enter the rate\n");
	scanf("%d",&rate);
	printf("Enter the time\n");
	scanf("%d",&time);

	simpleinterest = SIMPLE_INTEREST(principle,year,rate);
	printf("The simple interest is %d\n",simpleinterest);

	amount = AMOUNT(principle,year,rate,time);
	printf("The amount is %d\n",amount);
}
	
