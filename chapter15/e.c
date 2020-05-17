/* (e) Write a program that generates and prints the fibonacci words of
       order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
       f(4) = "babba", etc.

Apporach:
	1) Since strings are to be printed, array size of 50 is taken.
	2) strcpy and strcat are used to print the fibonacci series.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char first[50] = "a";
	char second[50] = "b", temp[50];
	
	int i;
	printf("%s\t%s\t", first, second);
	
	for(i = 2; i < 5; i++)
	{
		strcpy(temp, second);

		/*concatenate the first and second term to get the third term. */
		strcat(temp, first);
		printf("%s\t", temp);

		strcpy(first, second);
		strcpy(second, temp);
		
	}
	printf("\n");
}
