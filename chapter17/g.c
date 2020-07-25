/*(g) Write a function that compares two given dates. To store a data use a structure that
      contains three members namely day, month and year. If the dates are equal the function
      should return 0, otherwise it should return 1. 
 
 Apporach:
 	1) Get two dates from the user and compare the dates.
 	2) If two dates are equal return 1 or else return 0.
 */
 
 #include<stdio.h>
 
 struct date
 {
 	int day;
 	int month;
 	int year;
 }d[2];
 
 int main()
 {
 	/* Get the date from the user. */
 	printf("Enter the day, month and year of two dates\n");
 	for(int i = 0; i < 2; i++)
 	{
 		scanf("%d %d %d", &d[i].day, &d[i].month, &d[i].year);
 	}
 	
 	/*Compare the two date. */
 	if((d[0].day == d[1].day) && (d[0].month == d[1].month) && (d[0].year == d[1].year))
 	{
 		printf("Both dates are equal\n");
 		return 1;
 	}
 	else
 	{
 		printf("Both dates are not equal\n");
 		return 0;
 	}
 } 
 	
