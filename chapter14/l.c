/*(l) For the following set of sample data, compute the standard 
      deviation and the mean.
	
	-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2

	The formula for standard deviation is
	 	 __
	sqrt(xi - x)^2/n          __
	where xi is the data item  x is the mean.

Apporach:
	1) Consider this numbers as a 1d matrix, to compute the mean
	   add all numbers and divide it by total number.
	2) The standard deviation for each number is found by calculating
  	   using the above formula.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int i;
	float mean = 0, standard_deviation = 0;

	int a[15] = {-6,-12, 8, 13,11,6,7,2,-6,-9,-10, 11, 10, 9, 2};

	/* Mean calculation */
	for(i = 0; i < 15; i++)
		mean = mean + a[i];

	mean = mean/15;
	printf("\nThe mean of set of 15 numbers is %f\n\n",mean);
	
	for(i = 0; i < 15; i++)
	{
		standard_deviation = sqrt((a[i] - mean) * (a[i] - mean))/15;
		printf("sd of %3d is %f\n", a[i], standard_deviation);
	}
}
	
