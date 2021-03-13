/* (a) Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% 
       of basic salary, and house rent allowance is 20% of basic salary. Write a program
       to calculate his gross salary.
*/

#include<stdio.h>

void main()
{
	int basic_salary, dearness_allowance, house_rent_allowance, gross_salary;
	
	printf("Enter the basic salary\n");
	scanf("%d", &basic_salary);
	
	dearness_allowance = (basic_salary / 40) * 100;
	house_rent_allowance = (basic_salary / 20) * 100;
	
	printf("\nThe dearness allowance is %d\n", dearness_allowance);
	printf("The house rent allowance is %d\n", house_rent_allowance);
	
	/*Formula for gross salary. */
	gross_salary = basic_salary + dearness_allowance + house_rent_allowance;
	printf("The gross salary is %d\n", gross_salary);
}
