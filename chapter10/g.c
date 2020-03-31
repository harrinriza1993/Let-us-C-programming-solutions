/*If a positive integer is entered through the keyboard,write a 
  recursive function to obtain the primefactors of the number.

Example:
	The prime factor of 24 is : 2 2 2 3
	The prime factor of 42 is : 2 3 7
*/


#include<stdio.h>
#include<stdlib.h>

void factor(int);

void main()
{
	int number;
	
	printf("Enter the number\n");
	scanf("%d",&number);

	factor(number);
}
void factor(int number)
{
	int i;

	for (i=2;i<=number;i++)
	{	
		/*The modulo operation to a number is performed starting from number 2*/
		if (number%i==0)
		{
			printf("The prime factor of a number is %d\n",i);
	
			/*Each time the number should be divided by i*/
			number = number/i;

			/*If number becomes 1 we have to exit the function.*/
			if (number ==1)
				exit(0);
			else

				/*Otherwise we have to call the function recursively at each time.*/
				factor(number);
		}
	}
	
}

			
	

