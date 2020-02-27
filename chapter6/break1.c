#include<stdio.h>
void main()
{
	int num,i;
	printf("enter a number");
	scanf("%d",&num);
	for ( i=2;i<num;i++)
	{
		if (num%i==0)
		{
			printf("Not a prime number\n");
			break;
		}
	
		}
		if (i==num)

		{
			printf("prime number");
			
		}
	
}

