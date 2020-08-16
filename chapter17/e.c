/* (e) There is a structure called employee that holds the employee code, name and the
       date of joining. Write a program to create an array of structure and write a 
       data into it. Then ask the user to enter current date, Display the names of those
       employee whose tenure is greater than or equal to 3 years.
*/
 
#include<stdio.h>
 
// Private variables
#define NUM_OF_EMPLOYEE 7

struct dateofjoining
{
	int day;
	int month;
	int year;
};

struct employee
{
	int code;
	char name[30];
	struct dateofjoining date;		
}Intel[NUM_OF_EMPLOYEE] = {
	001, "Will Smith",  17, 6, 2016,
	002, "Rock",        12, 8, 2017,
	003, "Jennifer",    17, 9, 2017,
	004, "Akon",        14, 8, 2017,
	005, "Nicky Minaj", 15, 8, 2020,
	006, "Timber",      21, 8, 2020,
	007, "Jason",       16, 8, 2018,
};

void printEmployeeInfo(int index)
{
	printf("Name: %s\n", Intel[index].name);
}

void main()
{
	int index = 0;
	int currentday, currentmonth, currentyear;

	printf("Enter current date of joining with day, month, year\n");
	scanf("%d %d %d", &currentday, &currentmonth, &currentyear);

	/*Print the employees whose tenure greater than or equal to three years */
	printf("\nThe name of employees whose tenure greater than or equal to 3 years is\n");
	for(; index < NUM_OF_EMPLOYEE; index++)
	{
		if((currentyear - Intel[index].date.year) > 3)
		{
			printEmployeeInfo(index);
		}			
		else if((currentyear - Intel[index].date.year) == 3)
		{
			if(((currentmonth - Intel[index].date.month) >= 0) &&
			   ((currentday - Intel[index].date.day) >= 0))
			{
				printEmployeeInfo(index);
			}
		}
	}		
}

