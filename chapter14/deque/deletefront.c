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
		printf("The elements after deletefront\n");
		for(j = i + 1; j < 5; j++)
			printf("%d\n",a[j]);
		i++;
	}
}
	
	
