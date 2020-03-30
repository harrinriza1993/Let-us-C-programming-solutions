/*If a positive integer is entered through the keyboard,write a 
  recursive function to obtain the primefactors of the number.

Apporach:
 	1)The Factors of a number should be found.
  	2)From the factors,the prime numbers are considered as prime
          factors.
*/

#include<stdio.h>

void primefactor(int,int);

void main()
{
	int number,divisor=1;
	
	printf("Enter the number\n");
	scanf("%d",&number);

	primefactor(number,divisor);
}

void primefactor(int number,int divisor)
{
	int index;

	if (divisor<=number)
	{
		/*using modulo operator the divisor of number should
                  be found.*/
		if (number%divisor == 0)
		{
			/*In this the prime numbers in factor should be 
                          found and they are the primefactors of a number.*/
			for (index=2;index <= divisor;index++)
			{
				if (divisor%index ==0)
					break;
			}
			if (divisor==index)
			{
				printf("The prime factors of a number are %d\n",divisor);
			}
		}
		divisor=divisor+1;
		primefactor(number,divisor);
	}
}	

		 
