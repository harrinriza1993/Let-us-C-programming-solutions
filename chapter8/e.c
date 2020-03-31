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

void primeFactor(int);

void main()
{
	int number;

	printf("Enter a number\n");
	scanf("%d",&number);

	/* verify the entered number */	
	if (number < 0)
		printf("Invalid number, please enter positive number\n");
	else if (number == 1)
		printf("The prime factors of %d : %d\n", number, number);
	else
		primeFactor(number);
}

void primeFactor(int number)
{
	printf("The prime factors of %d : ", number);

	for (int divsor = 2; divsor <= number; divsor++)
	{
		while(number > 1)
		{
			/*The modulo operation should be performed to a number starting from 2.
                          If we get 0 as output it should proceed as follows else the condition
                          breaks.*/
			if (number%divsor == 0)
			{
				printf("%d ", divsor);

				/*Each time the number is divided by i till we get 1*/
				number = number/divsor;
			}
			else
				break;
		}
	}
	printf("\n");
}

