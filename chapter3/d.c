/*(d) According to Gregorian calendar, it was Monday on the date 1/1/01. If any year is input through the keyboard
      write a program to find what is the day on 1st january of this year.
*/

#include<stdio.h>

void main()
{
	int year, day = 0, refYear = 1900, leap = 0, d;
	
	printf("Enter the year\n");
	scanf("%d", &year);

	d = year - refYear;

	for(int i = refYear; i < year; i++)
	{
		if(i % 100 == 0)
		{	
			if (i % 400 == 0)
				leap++;
		}
		else
		{
		    if(i % 4 == 0)  
		    {  
			leap++;  
		    }
		}
	}

	day = (d - leap) * 365 + leap * 366;
	day = day % 7;

	if(day == 0)
		printf("It is Monday\n");
	if(day == 1)
		printf("It is Tuesday\n");
	if(day == 2)
		printf("It is Wednesday\n");
	if(day == 3)
		printf("It is Thursday\n");
	if(day == 4)
		printf("It is Friday\n");
	if(day == 5)
		printf("It is Saturday\n");
	if(day == 6)
		printf("It is Sunday\n");
}

