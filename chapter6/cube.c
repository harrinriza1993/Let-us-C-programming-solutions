#include<stdio.h>
void main()
{
	int n = 1729,a,b=0,c;
	for (a=1;a<=20;a++)
	{
		for (;b=b+1;)
		{
			c = a*a*a + b*b*b;
			
			if (c==n){
			
				printf("The sum of cubes of %d and %d is a perfect square and a ramanujan number  %d\n",a,b,c);
					
				}
		}
	}
}
	
