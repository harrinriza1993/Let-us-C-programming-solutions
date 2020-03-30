/*A positive integer is entered through the keyboard,write
  a function to find the binary equivalent of this number
  1) Without using recursion
  2) Using recursion

Apporach
	1)The binary equivalent can be obtained by using modulo
          and division operator.
    	2)The number should be modulo by 2 and divided by 2 contionously
          till we get 0 as quotient.
	3)Then all numbers are taken from down to up.
*/

#include<stdio.h>

void non_recursion_binary(int);
int recursion_binary(int);

void main()
{
	int number, result;
	
	printf("Enter any positive integer\n");
	scanf("%d",&number);

	/* Verify the number */
	if (number >= 0)
	{
		non_recursion_binary(number);

		result = recursion_binary(number);
		printf("The binary equivalent of a number using recursion is %d\n",result);
	}
	else
		printf("Invalid number, please enter the positive value\n");

}

/* without using recursion */
void non_recursion_binary(int number)
{
	int remainder, binary = 0, pos = 1;

	while(number > 0)
	{
		/*modulo the number by 2 till number becomes zero.*/
		remainder = number%2;
		
		/*The binary number is found by adding the binary number with 
                  the remainder in modulo operator multiplied by a temporary 
                  variable.*/
		binary = binary + (remainder * pos);

		/*The temporary variable should be multiplied by 10 at each step.*/
		pos = pos * 10;
		number = number/2;
	}

	printf("The binary equivalent is without using recursion is %d\n",binary);
}

/* with using recursion */
int recursion_binary(int number)
{
	int remainder;
	
	if (number != 0)
	{
		remainder = number%2;
		return remainder + (10 * recursion_binary(number/2));
	}
	else
		return 0;
}



