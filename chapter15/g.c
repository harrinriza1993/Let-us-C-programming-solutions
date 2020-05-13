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
	1) As given in the question we have to find whether the credit card number 
   	   is valid or not using the following steps.
*/

#include<stdio.h>

void main()
{
	int credit_number[16] = {4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 9};
	int i, number1[16], c[16], odd_position = 0, number2[16], even_position;
	
	/*step1 : The odd position numbers are extracted and multiplied by 2*/
	printf("The odd number multiplies of 2 are\n");
	for (i = 0; i < 16; i = i + 2)
	{
		number1[i] = 2 * credit_number[i];
		printf("%d\n", number1[i]);
	}

	/*step2 : Each numbers in array should be checked do they are greater than 10
	   	  or not. If the numbers are greater than 10 it should by subtracted 
		  by 9. */
	for (i = 0; i < 16; i = i + 2)
	{
		if (number1[i] >= 10)
		{
			number1[i] = number1[i] - 9;
			printf("%d\n", number1[i]);
		}
		else
		{
			printf("%d\n", number1[i]);
		}
	}
	
	/*step3 : All odd position numbers are added together. */
	for (i = 0; i < 16; i = i + 2)
	{
		odd_position = odd_position + number1[i];
	}
	printf("The addition of all odd terms are %d\n", odd_position);
	
	/*step4 : The even position numbers are added together. */
	for(i = 1; i < 16; i = i + 2)
	{
		number2[i] = credit_number[i];
		even_position = even_position + number2[i];
	}
	printf("The sum of all even terms are %d\n",even_position);
	
	/*step4 : Add odd position and even position number together. If they are 
    		  divisible by 10. Then the credit card number is a valid number.*/
	if ((odd_position + even_position) % 10 == 0)
	{
		printf("The credit card number is valid\n");
	}
	else
	{
		printf("The credit card number is not valid\n");
	}
}
