/*Programs to print inverted half pyramid using numbers*/

/*Apporach:
	1)The numbers from 1 to 5 should be printed in a first line. 
	2)In the next line the number should be printed from 1 to 4.
        3)This continues till we get 1.
*/

#include<stdio.h>

void main()
{
	/*The row  5 values at first
	  row,so it is intialized to 5 and 
	  at each step it is reduced*/
	for (int row = 5;row >= 1;row --)
	{
		for (int col = 1;col <= row; col ++)
		{
			printf("%d",col);
		}
		printf("\n");
	}
}	
 
