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
	
	printf("The abbreviates of the name\n");

	/*The first letter of any name is the first letter of 
          the abbreviate. */
	printf("%c\n", name[0]);

	for(i = 1; i < strlen(name); i++)
	{
		if(name[i] == 32)
			count++;
	}
	char *p = &name[0];

	for(i = 0; i < count; i++)
	{
		printf("%c", *p);
		while(*p != ' ');
			p++;
		p++;
	}
	printf("%s", p);
}

	
