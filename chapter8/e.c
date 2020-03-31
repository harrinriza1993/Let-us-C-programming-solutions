/*A positive integer is entered through the keyboard.Write a function to 
  obtain the prime factors of this number

Apporach:
	1)The prime factors of a number is obtained by dividing the number by 
          the primenumbers. 
	2)The primenumbers which are divisible to the number are called primefactors
	3) Example : primefactor of 24:2,2,2,3
                     primefactor of 35:5,7
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
	for (int i=2;i <= number;i++)
	{
		while(number>1)
		{
			/*The modulo operation should be performed to a number starting from 2.
                          If we get 0 as output it should proceed as follows else the condition
                          breaks.*/
			if (number%i==0)
			{
				printf("The prime factors of a number are %d\n",i);

				/*Each time the number is divided by i till we get 1*/
				number = number/i;
			}
			else
				break;
		}
	}
}

