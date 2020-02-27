#include<stdio.h>
#include<math.h>
void main()
{
	float x,n,i=1;

	printf("Enter the value of x\n");
	scanf("%f",&x);
	n = pow((x-1)/x,i);

	for ( i = 2;i<=7;i++)
	{
		
		n = n +0.5*pow((x-1)/x,i);
		printf("The natural logarithm is %f\n",n);
	}
}
		
	
	
