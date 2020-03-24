/*Write a function to compute the greatest common divisor given by 
  Euclid's algorithm ,exemplified for j = 1980,k= 1617 as follows	
	1980/1617 = 1     	1980-1*1617 = 363
	1617/363 = 4 		1617-4*363 = 165
	363/165 = 2		363-2*165 = 33
	5/33 = 5		165-5*33 = 0
    Thus the greatest common divisor is 33.

Apporach:
    1)To find the greatest common divisor between 2 numbers divide the 
      small number by large number.
    2)Then largenumber - quoitent *small number is to be done.
    3)Then the values are exchange ,the small number is exchanged to 
      large number and then largenumber - quoitent *small number is to
      to be exchanged with small number and this process continues till
      we get zero.
    4)The large number in which finally we get zero that is the Greatest 
      common divisor.
*/	

#include<stdio.h>

void euclidAlgorithm(int j, int k, float *gcd);

void main()
{
	int a, b, max, min;
	float gcd;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a<b)
	{
		max = b;
		min = a;
	}
	else
	{
		max = a;
		min = b;		
	}
	
	euclidAlgorithm(max, min, &gcd);
	printf("The greatest common divisor is %f\n", gcd);
}

void euclidAlgorithm(int j, int k, float *gcd)
{
	float remainder, mul;
	
	while(1)
	{
		remainder = j/k;
		mul = j - (remainder * k);

		if (mul == 0)
		{
			*gcd = k;
			break;
		}
		
		/*Swap the values and continue the process*/
		j = k;
		k = mul;
	}
}
	
		

