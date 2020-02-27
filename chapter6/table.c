#include<stdio.h>
void main()
{
	int n,c;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i = 1;i<=10;i++)
	{
		c = n*i;
		printf("%dx%d = %d\n",n,i,c);
	}
}
