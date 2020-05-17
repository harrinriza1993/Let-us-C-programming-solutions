/*(c) Write a program that extracts part of the given string from 
      the specified position. For example, if the string is "Working 
      with strings is fun", then if from position 4, 4 characters are 
      to be extracted then the program should return as "king". If the 
      number of characters to be extracted is 0 then the program should
      extract entire string from the specified position.

Approach:
	1) In two types the strings are extracted from the given words.
	2) In First type if starting position is from a given number
           and ending position is zero, then the element from starting 
	   position to the whole words are get printed.
	3) If the starting and ending position are given in integers, then 
           the element from starting position to the element at ending position
           is printed.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char s[30] = "Working with strings is fun";
	int position, numberOfchar, i;

	printf("Enter the starting position to print the string\n");
	scanf("%d", &position);
	position = position - 1;

	printf("How many character you would like print\n");
	scanf("%d", &numberOfchar);

	if(numberOfchar == 0)
	{
		printf("%s\n", &s[position]);
	}
	else
	{
		for(i = 0; i < numberOfchar; i++)
			printf("%c", s[position + i]);
		printf("\n");
	}
}
