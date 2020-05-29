/*(d) Write a program to reverse the strings stored in an array of pointers to 
      strings.

Apporach:
	1) The two dimensional character array is reversed by reversing 
           the columns in a row
*/

#include<stdio.h>
#include<string.h>
void reverse(char a[3][20], row, col);

void main()
{
	char a[3][20] = {
			 "she is nice",
			 "Earth is round",
			 "Lal Bosco"
			 
		        };
	int row = 3, col = 20;

	reverse(&a[0][0], row, col);
}

void reverse(char a[3][20], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		/*The columns are reversed by initializing the maximum value for the
                  column and then decrement the column value each time. */
		for(int j = col - 1; j >= 0; j--)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
} 
