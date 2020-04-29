/*(l) For the following set of sample data, compute the standard 
      deviation and the mean.
	
	-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2

	The formula for standard deviation is
	 	__
	sqrt(xi - x)^2/n          __
	where xi is the data item  x is the mean.

Apporach:
	1) Consider this numbers as a 3 X 5 matrix, to compute the mean
	   add all numbers and divide it by total number.
	2) The standard deviation for each number is found by calculating
  	   using the above formula.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int i, j, row = 3, col = 5;
	float mean = 0, standard_deviation;
	int a[3][5] = {
			{-6, -12, 8, 13, 11},
			{6, 7, 2, -6, -9},
			{-10, 11, 10, 9, 2}
   		      };

	for(i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			mean = mean + a[i][j];
		}
	}
	mean = mean/15;
	printf("The mean of set of 15 numbers is %f\n",mean);
	
	for(i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			standard_deviation = 0;
			standard_deviation = sqrt((a[i][j] - mean) * (a[i][j] - mean))/15;
			printf("sd of %d is %f\n", a[i][j], standard_deviation);
		}
	}
}
	
