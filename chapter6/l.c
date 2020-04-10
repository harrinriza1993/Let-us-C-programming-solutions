/*(l) Write a program to produce the following output (Floyd's Triangle)
                  
                         1
                    2         3
                 4       5       6
              7     8       9       10
*/


#include<stdio.h>

void main()
{
	int row, coloum, space, printNumber = 1, line;

	printf("How many number of rows you would like ");
	printf("to produce the output of Floyd's Triangle\n");
	scanf("%d", &line);

	for(row = 1; row <= line; row++)
	{
		for(space = 1; space <= (line-row); ++space)
			printf(" ");

		for(coloum = 1; coloum <= row; coloum++)
		{
			printf("%d ", printNumber);
			printNumber = printNumber + 1;
		}

		printf("\n");
	}
}

