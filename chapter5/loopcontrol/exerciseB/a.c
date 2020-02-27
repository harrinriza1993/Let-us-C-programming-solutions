/*(a) Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of rs.12.00 per hour for every hour 
worked above 40 hous.Assume that employees do not work for 
fractional part of an hour.*/

/*Apporach:
 	1)Calculating the overtime pay using the formula 
	over_time_pay = hourly_pay_rate * 1.5 * over_time_hours.
	
	2)The hourly_pay_rate is given in the data and the user 
	have to get the over_time_hours from the keyboard.*/	

	#include<stdio.h>
	void main()
	{

		int hourly_pay_rate = 12;
		int over_time_hours,over_time_pay;

		/*intializing the variable emp=1 for a count to the employee number*/

		int emp = 1;

		while(emp<=10)
		{
			printf("Enter the overtimehour\n");
			scanf("%d",&over_time_hours);

			/*calculating overtime pay for 10 employees using this formula*/

			over_time_pay = hourly_pay_rate * 1.5 * over_time_hours;
			printf(" Over time pay of employees is%d\n",&over_time_pay);

			emp = emp+1;
		}
	}
		



