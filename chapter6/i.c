/*(i)Population of a town today is 100000.The population has 
     increased steadily at a rate of 10% per year for last 10 years.
     Write a program to determine the population at the end of each 
     year in the last decade
*/

/*Apporach:
	1)To determine the population at the end of each 
	year in the last decade the formula used here is
	population = population -(100000*year*1/10)
*/

#include<stdio.h>

void main()
{
	int population=100000;
	for (int year=1;year<=10;year++)
	{
		/*The formula to calculate the population
		  at each decade
		*/
		population = population -(100000*year*1/10);
		printf("Population at each decade%d\n",population);
	}
	printf("population at 10 decade %d\n",population);
}



