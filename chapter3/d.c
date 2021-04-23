/*(d) According to Gregorian calendar, it was Monday on the date 1/1/01. If any year is input through the keyboard
      write a program to find what is the day on 1st january of this year.
*/

#include<stdio.h>

void main()
{
	int year, day = 0;
	
	printf("Enter the year\n");
	scanf("%d", &year);
	
	for(int i = 0; i < year; i++)
	{
		if (i % 4 == 0)
			day = day + 366;
		else
			day = day + 365;
	}
	
	day = day % 7;
	
	if(day == 1)
		printf("It is Sunday\n");
	if(day == 2)
		printf("It is Monday\n");
	if(day == 3)
		printf("It is Tuesday\n");
	if(day == 4)
		printf("It is Wednesday\n");
	if(day == 5)
		printf("It is Thursday\n");
	if(day == 6)
		printf("It is Friday\n");
	if(day == 7)
		printf("It is Saturday\n");
}
