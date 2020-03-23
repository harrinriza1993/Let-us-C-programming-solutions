/*Write a C function to evulate the series

	sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!)+....
   up to 10 terms.

Apporach:
     1)Using the formula sin(x) should be found.
     1)The power of numbers should be found and the factorial
       of numbers should be found and these values are divided
       up to 10 terms to get the final value.
*/ 
#include<math.h>

int sine(int x,int *sinx);

int main()
{
	int x,sinx;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	sine(x,&sinx);
	printf("sin(x) = %d\n",sinx);
	return 0;
}
int sine(int x,int *sinx)
{
	int fact,factorial,sin=1;

	for (int i = 1 ;i <=19;i = i+2)
	{
		factorial = 1;
		for ( fact = 1;fact <=i;fact = fact+1)
		{
			factorial = fact * factorial;
		}

		/*The poower value should be divided by factorial and it 
                  should be continued till 10 terms.*/
		*sinx = *sinx + (pow(x,i)/(factorial))*sin;

		/*To change the sign the sin variable is used*/
		sin = sin * -1;
	}
}
		

		 
			
	

