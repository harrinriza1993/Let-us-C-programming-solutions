/*A positive integer is entered through the keyboard.Write a function to 
  obtain the prime factors of this number

Apporach:
	1)To get the factors of a given number,the number should be divided 
	  by 2 to less than the given number.
	2)This can be done by a modulo operator.
	3)In the factors the prime numbers are considered as prime factors.
*/

#include<stdio.h>

void factor(int);

void main()
{
	int number;

	printf("Enter a number\n");
	scanf("%d",&number);

	factor(number);
}
void factor(int number)
{
	int i,j;

	for ( i = 2;i <= number; i++)
	{
		if (number%i == 0)
		{
			for (j=2;j <= i;j++)
			{
				if (i%j == 0)
					break;
			}
			if (i == j)
			{
				printf("The prime factors of a number are %d\n",i);	
			}
		}
	}
}

	


