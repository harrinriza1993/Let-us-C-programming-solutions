/*(g) A credit card number is usually a 16 digit number. A valid credit card
      number would satisfy a rule explained below with the help of a dummy 
      credit card number -- 4567 1234 5678 9129. Start with the rightmost-1
      digit and multiply every other digit by 2.

	4567 1 2 3 4 5 6 7 8 9 1 2 9
	8 12 2 6 10 14 18 4

	Then subtract 9 from any number larger than 10. Thus we get:

	8 3 2 6 1 5 9 4

	Add them all up to get 38.

	Add all other digits to get 42.

	Sum of 38 and 42 is 80. Since 80 is divisible by 10, the credit card number
        is valid.

	Write a program that receives a credit card number and checks the above rule
	whether the credit card number is valid.

Apporach:
	1) Seperate odd and even number

	2) Odd position
		1. odd number multiplied by 10.
		2. Then subtract 9 from any number larger than 10.
		3. add all the number.
	
	3) Even position
		1.just add all the even number.

	4) if ((odd + even % 10) == 0
		pf(valid)
	   else
		pf(not valid)
*/

#include<stdio.h>

void main()
{
	char credit_number[16];
	int i, sumOfOddnumber, sumOfEvennumber;

	printf("Enter the 16 digit of credit card number\n");

	for(i = 0; i < 16; i++)
	{
		printf("Enter the %d digit of the credit number: ", i);
		scanf(" %c", &credit_number[i]);
		
		/*Converting str in to int*/
		credit_number[i] = credit_number[i] - 48;
		
		/*Check the position is odd */	
		if (i % 2 == 0)
		{
			credit_number[i] = 2 * credit_number[i];
			if (credit_number[i] >= 10)
			{
				credit_number[i] = credit_number[i] -9;
			}
			sumOfOddnumber = sumOfOddnumber + credit_number[i];
		}
		else
		{
			sumOfEvennumber = sumOfEvennumber + credit_number[i];
		}
	}
	printf("The addition of all odd terms are %d\n",sumOfOddnumber);
	printf("The addition of all even terms are %d\n",sumOfEvennumber);

	/*Add odd position and even position number together. If they are divisible
	  by 10, then the credit card number is valid number. */
	if((sumOfOddnumber + sumOfEvennumber) % 10 == 0)
	{
		printf("The credit card number is valid\n");
	}
	else
	{
		printf("The credit card number is not valid\n");
	}
}

		

