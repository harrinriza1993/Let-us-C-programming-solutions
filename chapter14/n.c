/*(n) For the following set of n data points (x, y), write a 
      program to compute the correlation coefficient r, given 
      by 

	r = (sumation(xy) - sumation(x) * sumation(y))/
	    sqrt([n * (summation(x^2)- summation(x) * sumation(x) )]
	    *  sqrt([n * (summation(y^2)- summation(y) * sumation(y) )]

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

	float sum_x = 0, sum_y = 0, sum_xy = 0, n = 11, r;
	float sum_x_square, sum_y_square, rx, ry;

	for (int i = 0; i < 11; i++)
	{
		sum_x = sum_x + arr[i][0];
		sum_y = sum_y + arr[i][1];
		sum_xy = sum_xy + (arr[i][0] * arr[i][1]);

		sum_x_square = sum_x_square + (arr[i][0] * arr[i][0]);
		sum_y_square = sum_y_square + (arr[i][1] * arr[i][1]);
	}

	printf("\nsummation of x is %f\n", sum_x);
	printf("summation of y is %f\n", sum_y);
	printf("summation of xy is %f\n", sum_xy);
	printf("summation of x^2 is %f\n", sum_x_square);
	printf("summation of y^2 is %f\n\n", sum_y_square);

	rx = n * (sum_x_square - sum_x * sum_x);
	ry = n * (sum_y_square - sum_y * sum_y);
	
	r = (sum_xy - sum_x * sum_y) / (sqrt(rx * ry));

	printf("The correlation coefficient r is %f\n",r);
}



	    
