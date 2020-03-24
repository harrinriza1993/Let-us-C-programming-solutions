/*Write a C function to evulate the series

	sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!)+....

   up to 10 terms.

Apporach:
     The power of numbers should be found and the factorial
     of numbers should be found and these values are divided
     up to 10 terms to get the final value.
*/

#include<math.h>

void sine(int x,float *sinx);

int main()
{
	int x;
	float sinx=0;

	printf("Enter the value of x\n");
	scanf("%d",&x);

	sine(x, &sinx);

	printf("sin(%d) = %f\n",x, sinx);

	return 0;
}

void sine(int x, float *sinx)
{
	unsigned long int fact,factorial;
	int sign=1;

	for (int i = 1 ;i <=19;i = i+2)
	{
		factorial = 1;
		for ( fact = 1;fact <=i;fact = fact+1)
		{
			factorial = fact * factorial;
		}
		printf("Factorial : %d : %lu\n", i, factorial);

		/*The poower value should be divided by factorial and it 
                  should be continued till 10 terms.*/
		*sinx = *sinx + (pow(x,i)/(factorial))*sign;

		printf("Sign : %f %f\n",  (pow(x,i)/(factorial)*sign), *sinx);
		/*To change the sign the sin variable is used*/
		sign = sign * -1;
	}
}
		

		 
			
	

