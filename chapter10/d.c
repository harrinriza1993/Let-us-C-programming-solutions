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

void nbinary(int);
int rbinary(int);

void main()
{
	int n,result;
	
	printf("Enter any positive integer\n");
	scanf("%d",&n);

	nbinary(n);

	result = rbinary(n);

	printf("The binary equivalent of a number using recursion is %d\n",result);
}
void nbinary(int n)
{
	int remainder,binary=0,temp=1;

	while(n > 0)
	{
		/*modulo the number by 2 till n becomes zero.*/
		remainder = n%2;
		
		/*The binary number is found by adding the binary number with 
                  the remainder in modulo operator multiplied by a temporary 
                  variable.*/
		binary = binary + (remainder*temp);

		/*The temporary variable should be multiplied by 10 at each step.*/
		temp = temp*10;
		n = n/2;
	}
	printf("The binary equivalent is without using recursion is %d\n",binary);
}

int rbinary(int n)
{
	int num;
	
	if (n!=0)
	{
		num = n%2;
		return num+10*rbinary(n/2);
	}
	else
		return 0;
}



