#include<stdio.h>
void main()
{
	int i =1,j=1;
	while(i++<=5)
	{
		while(j++<=3)
	{
	
		if(j==150)
			break;
		else
			printf("%d%d\n",i,j);
		}
	}
}
