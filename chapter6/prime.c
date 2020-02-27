#include<stdio.h>
void main()
{
	int i,j;
	for ( i = 1;i<=300;i++)
	{
		for ( j = 2;j<i;j++)
		{
			if (i%j==0)
			{
				//printf("%d is not the prime number\n",i);//
				break;
			}
			
		}
		if (i==j)
			printf("%d is a prime number\n",i);
																							
                }
}
