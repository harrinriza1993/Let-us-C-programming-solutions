/*(d)Write down macro definitions for the following:

   1. To find arithmetic mean of two numbers.
  
   Apporach:
 	1)Add two numbers and divide the numbers by 2
          to get arithmetic mean of two numbers.
*/

#include<stdio.h>
#define AM(a,b) (a+b)/2

void main()
{
	int number1,number2,arithmeticmean;

	printf("Enter the two numbers\n");
	scanf("%d%d",&number1,&number2);
	
	arithmeticmean = AM(number1,number2);
	printf("The arithmetic mean of two numbers is %d\n",arithmeticmean);
}
