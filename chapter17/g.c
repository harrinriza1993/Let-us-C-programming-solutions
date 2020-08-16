/*(g) Write a function that compares two given dates. To store a data use a structure that
      contains three members namely day, month and year. If the dates are equal the function
      should return 0, otherwise it should return 1. 
 */
 
#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

/* Function to return two dates
   Returns: 	0 for equal, 1 for not equal
*/
int compareTwoDates(struct date date1, struct date date2)
{
	if((date1.day == date2.day) && 
           (date1.month == date2.month) && 
           (date1.year == date2.year))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
 
int main()
{
	struct date dates[2];

	/* Get the date from the user. */
	for(int i = 0; i < 2; i++)
	{
		printf("Enter the day, month and year: ");
		scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
	}

	/*Compare the two date. */
	if(compareTwoDates(dates[0], dates[1]))
	{
		printf("Both dates are not equal\n");
	}
	else
	{
		printf("Both dates are equal\n");
	}
} 

