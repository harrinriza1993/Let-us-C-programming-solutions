/*Write a recursive function to obtain the sum of first 25
  natural numbers.

Apporach
	1)The sum of first 25 numbers is obtained by adding the number
          consquitively.
*/

#include<stdio.h>

int sum(int);

void main()
{
	int number=25,result;

	result = sum(number);

	printf("The sum of first 25 natural numbers is %d\n",result);
}

int sum(int number)
{
	if (number!=0)
		
		/*Add the number  with the consequitive number
                  by calling the function.*/
		return number+sum(number-1);
	else
		return 0;
}

	



	




