/* (d) Temperature of a city in Fahrenheit is input through the keyboard. Write
       a program to convert this temperature in to Centigrade degrees.
*/

#include<stdio.h>

void main()
{
	int temp_fahrenheit;
	float centigrade;
	
	printf("Enter the temperature of the city in fahrenheit\n");
	scanf("%d", &temp_fahrenheit);
	
	centigrade = (temp_fahrenheit - 32) * 0.56;
	
	printf("The temperature in centigrade degrees is %f\n", centigrade);
}
