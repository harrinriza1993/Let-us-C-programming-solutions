#include<stdio.h>
void main()
{
	int i,j;
	for ( i = 1;i<=10;i++)
	{
		for (j=1;i>=j;j++)
		{
			//printf("%d%d\n",i,j);//
			break;
		}
		printf("%d%d\n",i,j);
	}
}
