#include<stdio.h>

void main()
{
	int a[5], i = 0, j;

	while(i < 5)
	{
		printf("Enter the number\n");
		scanf("%d",&a[i]);

		printf("The number for rearfront\n");
		for(j = 0; j <= i; j++)
		{
			printf("%d\n",a[j]);
		}
		i++;
	}
}
