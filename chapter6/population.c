#include<stdio.h>
void main()
{
	int population=100000;

	for (int year=1;year<=10;year++)
	{
		population = population -(100000*year*1/10);
		printf("population%d\n",population);
	}
	printf("population at 10 decade %d\n",population);
}
	
		
		
