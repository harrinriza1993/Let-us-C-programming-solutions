/*(c) Write a program to generate all combinations of 1,2,3 using for loop.

Apporach:
	Nested for loop should be used to generate all combinations
	123, 132, 213, 231, 312, 321
*/

#include<stdio.h>

void main()
{
	int number1,number2,number3;

	for ( number1 =1;number1<=3;number1++)
	{
		for( number2 =1;number2<=3;number2++)
		{
			for(number3=1;number3<=3;number3++)
			{
				printf("%d%d%d\n",number1,number2,number3);
			}
		}
	}
}
