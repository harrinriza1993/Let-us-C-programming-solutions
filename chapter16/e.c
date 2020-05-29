/*(e) Write a program to delete all vowels from a sentence. Assume that 
      the sentence is not more than 80 characters long.

Apporach:
	1) Except the vowels all others are to be printed, so vowels are excluded
           using continue keyword.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char a[3][80];
	int i, j, row = 3, col = 80, k;

	printf("Enter the sentences\n");
	for (i = 0; i < row; i++)
	{
		gets(&a[i][0]);
		
		/*To check whether the sentence is not more than 80 characters long, 
     		  this condition is checked.*/
		k = strlen(&a[i][0]);
		if (k > 80)
			printf("The sentence is in valid\n");
	}
	
	/*To delete all vowels and print the sentence*/
	printf("The sentence after deletion of vowels\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= strlen(&a[i][0]); j++)
		{
			
			/*Except the vowels all the other value should be printed so continue is used.*/
			if ((a[i][j] == 'a')|| (a[i][j] == 'e') ||(a[i][j] == 'i')|| (a[i][j] == '0')|| (a[i][j] == 'u')
			     || (a[i][j] == 'A')|| (a[i][j] == 'E')|| (a[i][j] == 'I')|| (a[i][j] == 'O')|| (a[i][j] == 'U'))
			{
				continue;
			}
			printf("%c", a[i][j]);
		}
			printf("\n");
	}
	
}
				
