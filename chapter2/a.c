/* (a) If a five digit number is input through the keyboard, write a program to calculate 
       the sum of its digits. (Hint : Use the modulus operator %')
*/

#include<stdio.h>

void main()
{
	int number, sum = 0, n;
	
	printf("Enter the five digit number\n");
	scanf("%d", &number);
	
	if(number < 10000)
	{
		printf("The given number is not a five digit number\n");
	}
	else
	{
		while(number)
		{
			n = number % 10;
			sum = sum + n;
			number = number / 10;
		}
		
		printf("The sum of a 5 digit number is %d\n", sum);
	}
}
