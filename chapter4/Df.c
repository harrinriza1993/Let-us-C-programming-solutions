/* (f) A certain grade of steel is graded according to the following conditions:

	(i) Hardness must be greater than 50
	(ii) Carbon content must be less than 0.7
	(iii) Tensile strength must be greater than 5600
	
	The grades are as follows:
	
	Grade is 10 if all three conditions are met
	Grade is 9 if conditions (i) and (ii) are met
	Grade is 8 if conditions (ii) and (iii) are met
	Grade is 7 if conditions (i) and (iii) are met
	Grade is 6 if only one condition is met
	Grade is 5 if none of the conditions are met
	
	Write a program, which will require the user to give values of hardness, carbon content and 
	tensile strength of the steel under consideration and output the grade of the steel.
*/

#include<stdio.h>

void main()
{
	int hardness, carbon_content, tensile_strength;
	
	printf("Enter the hardness, carbon content and tensile strength of the steel\n");
	scanf("%d %d %d", &hardness, &carbon_content, &tensile_strength);
	
	printf("%d %d %d", hardness, carbon_content, tensile_strength);
	
	if((hardness > 50) && (carbon_content < 0.7) && (tensile_strength > 5600))
		printf("The grade of the steel is 10\n");
	else if((hardness > 50) && (carbon_content < 0.7))
		printf("The grade of the steal is 9\n");
	else if((carbon_content < 0.7) && (tensile_strength > 5600))
		printf("The grade of the steel is 8\n");
	else if((hardness > 50) && (tensile_strength > 5600))
		printf("The grade of the steel is 7\n");
	else if((hardness > 50) || (carbon_content < 0.7) || (tensile_strength > 5600))
		printf("The grade of the steel is 6\n");
	else
		printf("The grade of the steel is 5\n");
}
