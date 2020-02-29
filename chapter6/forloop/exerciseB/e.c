/*(e)According to a study ,the approximate level of a intelligence
of a person can be calculated using the formula:

i = 2 +(y+0.5x)

Write a program that will produce a table of values of i,y and x where
y varies from 1 to 6,and for each value of y,x varies from 5.5 to 12.5
in steps of 0.5.*/

/*Apporach:
	1)To draw table use "----- and ||"in printf statement.
	2)The value of i is calculated using x,y and formula.
	and the values of x,y,i are tabulated in a table.*/

	#include<stdio.h>
	void main()
	{
		int y;
		float x,i;
		printf("---------------------------\n");
		printf("|y|  |x|         |i|\n");
		x = 4;

		/*The value of y ranges from 1 to 6*/

		for (y=1;y<=6;y++)
		{
			/*The value of x varies from 5.5 to 12.5
			in steps of 0.5*/
	 
			for (;x = x+0.5;)
			{
				i = 2 +(y+0.5 * x);
				break;
			
			}
			printf("|%d|  |%f|  |%f|\n",y,x,i);
			printf("---------------------------\n");
		}
	}

