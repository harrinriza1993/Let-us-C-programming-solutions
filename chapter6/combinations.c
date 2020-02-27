#include<stdio.h>
void main()
{
	int i,j,y;

	for ( i =1;i<=3;i++)
	{
		for( j=1;j<=3;j++)
		{
			for(y=1;y<=3;y++)
			{
				printf("%d%d%d\n",i,j,y);
			}
		}
	}
}
