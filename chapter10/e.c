/*Write a recursive function to obtain the sum of first 25
  natural numbers.

Apporach
	 The sum of first 25 numbers is obtained by adding the number
         consquitively.
*/

#include<stdio.h>

int sumOfNaturalNumber(int);

void main()
{
	int number = 25, result;

	result = sumOfNaturalNumber(number);
	printf("The sum of first 25 natural numbers is %d\n",result);
}

int sumOfNaturalNumber(int number)
{
	if (number != 0)
		/*Add the number  with the consequitive number by calling the function.*/
		return number + sumOfNaturalNumber(number-1);
	else
		return 0;
}

	



	




