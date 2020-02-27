#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=24;i++)
	{
		if(i>=1 && i<=11)
			printf("%d AM\n",i);
		else if(i==12)
			printf("%d Noon\n",i);
		else if(i>=13 && i<=23)
			printf("%d PM\n",i);
		else if(i==24)
			printf("%d Midnight\n",i);
	}
}
		
