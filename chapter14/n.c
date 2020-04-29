/*(n) For the following set of n data points (x, y), write a 
      program to compute the correlation coefficient r, given 
      by 
	r = (sumation(xy) - sumation(x) * sumation(y))/
	    sqrt([n * (summation(x^2)- summation(x))^2]
	    * sqrt([n * (summation(y^2)- summation(y))^2]

	x 	y 	
	34.22	102.43
	39.87 	100.93
	41.85	97.43
	43.23	97.81
	40.06	98.32
	53.29	98.32
	53.29	100.07
	54.14	97.08
	49.12	91.59
	40.71	94.85
	55.15	94.65

Apporach:
	1) The correlation coefficient can be calculated can be found using the formula
		r = (sumation(xy) - sumation(x) * sumation(y))/
	    sqrt([n * (summation(x^2)- summation(x))^2]
	    * sqrt([n * (summation(y^2)- summation(y))^2]
	2) summation of x, y, xy is the sum of all the values of x, y, and xy.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	float arr[11][2] = {
			{34.22,	102.43},
			{39.87, 100.93},
			{41.85,	97.43},
			{43.23,	97.81},
			{40.06,	98.32},
			{53.29,	98.32},
			{53.29,	100.07},
			{54.14,	97.08},
			{49.12, 91.59},
			{40.71,	94.85},
			{55.15,	94.65}
		      };
	float x = 0, y = 0, xy = 0, r;
	int i;

	for (i = 0; i < 11; i++)
	{
		x = x + arr[i][0];
		y = y + arr[i][1];
		xy = xy + (arr[i][0] * arr[i][1]);
	}
	printf("summation of x is %f\n",x);
	printf("summation of y is %f\n",y);
	printf("summation of xy is %f\n",xy);
	
	r= ((xy) - (x * y))/(sqrt(11 * pow(pow(x, 2) - x,2))) * (sqrt(11 * pow((pow(y, 2) - y), 2)));
	printf("The correlation coefficient r is %f\n",r);
}

	    
