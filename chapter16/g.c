/*(g) Write a program that takes a set of individuals and abbreviates the first and
      middle name to their first letter.

Apporach:
	1) The first letter of the name is printed by printing the letters
           after the space.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char name[80];
	int i, count = 0;

	printf("Enter a name\n");
	gets(name);
	
	/*Find the number of spaces. */
	for(i = 1; i < strlen(name); i++)
	{
		if(name[i] == 32)
			count++;
	}
	
	/*A temporary pointer is used to pass the address of first variablr. */
	char *p = &name[0];

	/*Prints the abbreviation of the name. */
	printf("The abbreviation of the name is \n");
	for(i = 0; i < count; i++)
	{
		printf("%c", *p);
		while(*p != ' ')
			p++;
		p++;
	}
	printf("%s\n", p);
}

	
