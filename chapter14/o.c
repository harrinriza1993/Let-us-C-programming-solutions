/*(0) For the following set of point given by (x, y) fit a straight line
      given by 

	y = a + bx

	where,
		    ---   ---
		a =  y  -b y  and

		b = n * sumOf(xy) - sumOf(x) * sumOf(y)/
		    n * (sumOf(x^2)- sumOf(x) * sumOf(x))

		x	y
		3.0	1.5
		4.5	2.0
		5.5	3.5
		6.5	5.0
		7.5	6.0
		8.5	7.5
		8.0	9.0
		9.0	10.5
		9.5	12.0
		10.0	14.0
*/

#include<stdio.h>
#include<math.h>

void main()
{
	float arr[10][2] = {
			{3.0, 1.5},
			{4.5, 2.0},
			{5.5, 3.5},
			{6.5, 5.0},
			{7.5, 6.0},
			{8.5, 7.5},
			{8.0, 9.0},
			{9.0, 10.5},
			{9.5, 12.0},
			{10.0, 14.0}
		       };

	int i, n = 10;
	float sumOfx = 0, sumOfy = 0, sumOfxy = 0, sum_x_square = 0, a, b, xbar, ybar;

	for (i = 0; i < n; i++)
	{
		sumOfx = sumOfx + arr[i][0];
		sumOfy = sumOfy + arr[i][1];
		sumOfxy = sumOfxy + (arr[i][0] * arr[i][1]);
		sum_x_square = sum_x_square + (arr[i][0] * arr[i][0]);
	}

	xbar = sumOfx/n;
	ybar = sumOfy/n;

	b = (n * sumOfxy - sumOfx * sumOfy)/ (n *sum_x_square - sumOfx * sumOfy);
	a = ybar - (b * xbar);

	printf("The value of b is %f\n",b);
	printf("The value of a is %f\n",a);
} 	

			 
