/*(i)Population of a town today is 100000.The population has 
     increased steadily at a rate of 10% per year for last 10 years.
     Write a program to determine the population at the end of each 
     year in the last decade

Apporach:
	To determine the population at the end of each 
	year in the last decade the formula used here is
	population = population - (population/100)*10
*/

#include<stdio.h>

void main()
{
	int population=100000, percentageRate=10;
	for (int year=0; year<10; year++)
	{
		/* The formula to calculate the population
		   at each decade */
		population = population - (population/100)*percentageRate;
		printf("Population at each decade [Year : %d] : %d\n",10-year, population);
	}
}



