/* (g) The Body Mass Index(BMI) is defined as a ratio of weight of a person (in kilograms) to the square
       of the height(in meters). write a program that receives weight and height, calculates the BMI, 
       and reports the BMI category as per the following table.
       
       BMI Category			BMI
       
       Starvation			< 15
       Anorexic			15.1 to 17.5
       Underweight			17.6 to 18.5
       Ideal				18.6 to 24.9
       Overweight			25 to 25.9
       Obese				30 to 30.9
       Morbidly Obese			>= 40
*/

#include<stdio.h>

void main()
{
	int weight, height;
	float body_mass_index;
	
	printf("Enter the weight and height\n");
	scanf("%d %d", &weight, &height);
	
	body_mass_index = weight / (height * height);
	
	if(body_mass_index < 15)
		printf("The BMI category is Starvation\n");
	else if((body_mass_index > 15.1) && (body_mass_index <= 17.5))
		printf("The BMI category is Anorexic\n");
	else if((body_mass_index > 17.6) && (body_mass_index <= 18.5))
		printf("The BMI category is Underweight\n");
	else if((body_mass_index > 18.6) && (body_mass_index <= 24.9))
		printf("The BMI category is Ideal\n");
	else if((body_mass_index > 25) && (body_mass_index <= 25.9))
		printf("The BMI category is overweight\n");
	else if((body_mass_index > 30) && (body_mass_index <= 30.9))
		printf("The BMI category is Obese\n");
	else if(body_mass_index >= 40)
		printf("The BMI category is Morbidly Obese\n");
}
