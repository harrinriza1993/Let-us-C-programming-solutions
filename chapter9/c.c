/*Write a C function to evulate the series

	sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!)+....

   up to 10 terms.

Apporach:
     The power of numbers should be found and the factorial
     of numbers should be found and these values are divided
     up to 10 terms to get the final value.
*/

#include<stdio.h>
#include<math.h>

void sine(int x, float *sinx);
unsigned long long factorial(int num);
double power(double base, double p);

int main()
{
	int x;
	float sinx=0;

	printf("Enter the value of x: ");
	scanf("%d",&x);

	sine(x, &sinx);

	printf("sin(%d) = %f\n",x, sinx);

	return 0;
}

/* To find the factorial */
unsigned long long factorial(int num)
{
	unsigned long long fact = 1;

	for(int i = 2; i <= num; i++)
	{
		fact = fact * i;
	}

	return fact;
}

/* To find power */
double power(double base, double p)
{
	double temp = 1;

	for(int i = 1; i <= (int)p; i++)
		temp = temp * base;

	return temp;
}

void sine(int x, float *sinx)
{
	int sign = 1;

	for (int i = 1 ;i <= 19; i = i+2)
	{
		*sinx = *sinx + (power(x,i)/factorial(i)) * (sign);

		sign = sign * -1;
	}
}
		

		 
			
	

