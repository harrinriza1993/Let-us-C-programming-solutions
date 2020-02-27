#include<stdio.h>
void main()
{
	int y;
	float x,i;
	printf("---------------------------\n");
	printf("|y|  |x|         |i|\n");
	x = 0;
	for (y=1;y<=6;y++)
	{
		for (;x = x+0.5;)
		{
			i = 2 +(y+0.5 * x);
			break;
			
		}
		printf("|%d|  |%f|  |%f|\n",y,x,i);
		printf("---------------------------\n");
		
			
			
	}
}
