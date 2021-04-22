/* (b) If a five-digit number is input through the keyboard, write a program to reverse the number. */

#include<stdio.h>
#include<math.h>

void main()
{
	int number, sum = 0, n, i = 4;
	
	printf("Enter the five digit number\n");
	scanf("%d", &number);
	
	if(number < 10000)
	{
		printf("The number is not a 5 digit number\n");
	}
	else
	{
		
		while(number)
		{
			n = number % 10;
			sum = sum + n * pow(10, i);
			number = number / 10;
			i--;
		}
		
		printf("The reverse number of a 5 digit number is %d\n", sum);
	}
}

