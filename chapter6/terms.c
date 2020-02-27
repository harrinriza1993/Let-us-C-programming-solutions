#include<stdio.h>
void main()
{
	int i,j,fact = 1;
	float terms;
	
	for (i=1;i<=7;i++)
	{
		fact = 1;
		for (j=1;j<=i;j++)

		{
		
			fact = fact*j;
			
		}
		
		printf("%d fact of a number is %d\n",i,fact);
		terms = terms +(float) i/fact;
		printf("%f term value\n",terms);
		
			
		
		
		

	}
	//printf("%d is the sum of series\n",terms);//
}
