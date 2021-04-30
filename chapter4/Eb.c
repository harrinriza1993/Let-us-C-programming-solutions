/* (b) Write a program using conditional operators to determine whether a year entered through the keyboard is 
       a leap year or not.
*/

#include<stdio.h>

void main()
{
	int year;
	
	printf("Enter the year\n");
	scanf("%d", &year);
	
	((year % 4 == 0) && (year % 100 != 0)) ? printf("The given year is a leap year\n") : printf("The given year is not a leap year\n");
}
