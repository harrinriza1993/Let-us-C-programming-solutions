#include<stdio.h>
#include<math.h>
void main()
{
	int p,q,r,a,n;

	for (int count = 1;count<=10;count++)
	{
		
		printf("Enter the values of p,q,r,n\n");
		scanf("%d %d %d %d",&p,&q,&r,&n);
		
		a = p*pow(1+(r/q),n*q);
		printf("The amount is %d\n",a);
	}
}
		
