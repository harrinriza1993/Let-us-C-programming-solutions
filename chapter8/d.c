/*Any year is entered through the keyboard.Write a function to determine
  whether the year is leap year or not.

Apporach:
	1)The given year should be checked whether it is divisible bt 4.
	2)If it is divisible then the given year is a leap year.
*/

#include<stdio.h>

void leap(int);

void main()
{
	int year;

	printf("Enter the year\n");
	scanf("%d",&year);
	leap(year);
}

void leap(int year)
{
	/*The divisiblity of the year should be checked by a modulo 
	  operator.If we get zero then the given year is a leapyear.*/
	if (year % 4 == 0)
		printf("%d is a leapyear\n",year);

	else
		printf("%d is not a leapyear\n",year);
	
}



	
