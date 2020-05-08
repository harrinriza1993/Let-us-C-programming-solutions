#include<stdio.h>

void main()
{
	int a[5], i = 0 , j;
	
	printf("Enter the array elements\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	i = 0;
	while ( i < 5)
	{
		printf("The elements after deleterear\n");
		for(j = 0; j < 4- i; j++)
			printf("%d\n",a[j]);
		i++;
	}
}
	
	
