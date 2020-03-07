/*(a) Write a function to calculate the factorial of any integer entered
      through the keyboard.

Apporach:
         1)A variable fact is intialized to 1 in the factorial function.
	 2)A variable index is intialized to 1 to the number.
	 3)For each step in for the index is multiplied with fact and 
	   the value is stored in fact.
*/

#include<stdio.h>

int factorial(int);

void main()
{
	int number,fact;
	
	printf("Enter a number\n");
	scanf("%d",&number);
	
	/*fact is used to store the value in the function factorial*/
	fact = factorial(number);
	printf("The factorial of a number is %d\n",fact);
}

int factorial(int n)
{
	int fact = 1;

	for (int index = 1;index <= n;index ++)
	{
		fact = fact * index;
	}
	return (fact);
}
	
	
