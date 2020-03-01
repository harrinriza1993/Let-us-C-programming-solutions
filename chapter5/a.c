/*
(a) Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of rs.12.00 per hour for every hour 
worked above 40 hous.Assume that employees do not work for 
fractional part of an hour.
*/

/*Apporach:
 	1) Ask the user to enter the numbers of hours employee has worked on.
	2) Verify that the employee has worked more than 40 hours.
        3) Calculate overtime pay for the employee if he worked more than 40 hours.
*/	

#include<stdio.h>

void main()
{
	int hourly_pay_rate = 12, emp = 1, extra_pay, working_hour;

	while(emp <= 10)
	{
		printf("Enter the working hours of the employee [%d]: \n", emp);
		scanf("%d",&working_hour);

		if(working_hour > 40)
		{
			extra_pay = (working_hour-40) * hourly_pay_rate;
			printf("Overtime pay for the employee Rs : %d\n\n", extra_pay);	
		}
		else
			printf("Employee does not work overtime\n\n");
		
		emp = emp + 1;
	}
}

