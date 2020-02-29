/*(g)The natural logaritham can be approximated by the following
series.

x-1/x + 1/2(x-1/x)^2 + 1/2(x-1/x)^3 + 1/2(x-1/x)^4+....

If x is input through the keyboard,write a program to calculate
the sum of first seven terms of this series.*/

/*Apporach:
	1)The value of n is first given as x-1/x, outside
	the for loop.
	2)Inside the for loop the value n is given as natural_logarithm 
	+ 1/2(x-1/x)^power to get the natural logaritham.
	3)The power variable value range from 1 to 7.*/

	#include<stdio.h>
	#include<math.h>
	void main()
	{
		float x,natural_logarithm,power=1;

		printf("Enter the value of x\n");
		scanf("%f",&x);
		natural_logarithm= pow((x-1)/x,power);

		/*The value of power ranges from 2 to 7 since we need first
		seven terms of the series*/

		for ( power = 2;power<=7;power++)
		{
			/*The natural logarithm is obtained using this formula given
			below.*/

			natural_logarithm = natural_logarithm +0.5*pow((x-1)/x,power);
			printf("The natural logarithm is %f\n",natural_logarithm);
		}
	}
		
	
	
