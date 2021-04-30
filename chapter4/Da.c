/* (a) A year is entered through the keyboard, write a program to determine whether the year is leap or not.
       Use the logical operators && and ||.
*/

#include<stdio.h>

void main()
{
	int year;
	
	printf("Enter the year\n");
	scanf("%d", &year);
	
	if((year % 4 == 0) && (year % 100 != 0))
		printf("The year is a leap year\n");
	else
		printf("The year is not a leap year\n");
}
