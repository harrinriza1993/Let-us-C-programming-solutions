/*(c) Write a program to sort a set of names stored in an array in alphabetical 
      order.

Apporach :
	1) To sort the character name arrays just compare one name with other
	   name using strcmp function.
	2) strcpy is used for swapping the names.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char names[][10]= {
			"ezhil",
			"babitha",
			"abitha",
			"carol",
			"keerthana"
		     };
	int i, j;
	char temp[10];
	
	/*Prints the given array. */
	printf("The given array is \n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", names[i]);
	}

	/*Loop for sorting */
	for ( i = 0; i < 5; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if (strcmp(names[i], names[j]) > 0)
			{
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	
	/*Prints the sorted array. */
	printf("\nThe sorted array is\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", names[i]);
	}
}

