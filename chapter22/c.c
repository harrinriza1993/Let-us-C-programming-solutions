/*(c) Write a program1,2 which stores information about a date in a structure containing three members -
      day, month and year. Using bit fields the day number should get stored in first 5 bits of day,
      the month number in 4 bits of month and year in 12 bits of year. Write a program to read date 
      of joining of 10 employees and display them in ascending order of year.
*/

#include<stdio.h>
#include<stdlib.h>

#define NUMBER_OF_EMPLOYEES 10

typedef struct date_of_joining
{
		int day : 5;
		int month : 4;
		int year : 12;
}date;

int compareyear(const void *pa, const void *pb)
{
	date *p1 =  (date*)pa;
	date *p2 =  (date*)pb;
	return p1->year - p2->year;
}

void main()
{
	date e[NUMBER_OF_EMPLOYEES] =
	{
		10, 1, 1994,
		8, 2, 1993,
		14, 3, 2000,
		5, 4, 1989,
		15, 5, 1978,
		6, 6, 78,
		7, 7, 89,
		8, 8, 2001,
		9, 9, 1992,
		10, 10, 1987
	};
	
	qsort(e, 10, sizeof(date), compareyear);
	
	printf("The sorted list of employees based on year is\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d %d %d\n", e[i].day, e[i].month, e[i].year);
	} 
}

