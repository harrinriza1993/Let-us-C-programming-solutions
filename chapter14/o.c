/*(0) For the following set of point given by (x, y) fit a straight line
      given by y = a + bx
	where,	    ---   ---
		a =  y  -b y  and
		b = n * [summation(xy) - summation(x) * summation(y)/n * 
		    (summation(x^2)- summation(x))^2
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

Apporach:
	1) Using the formula the value of a and b are calculated
		a =  y  -b y  and
		b = n * [summation(xy) - summation(x) * summation(y)/n * 
		    (summation(x^2)- summation(x))^2
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
	int i;
	float x = 0, y = 0, xy = 0, a, b, mean_x, mean_y;

	for (i = 0; i < 10; i++)
	{
		x = x + arr[i][0];
		y = y + arr[i][1];
		xy = xy + (arr[i][0] * arr[i][1]);
	}
	mean_y = y/10;
	mean_x = x/10;
	b = (10 * xy - x * y)/10 *( pow((pow(x,2) - x), 2));
	a = mean_y - (b * mean_x);

	printf("The value of b is %f\n",b);
	printf("The value of a is %f\n",a);
} 	

			 
