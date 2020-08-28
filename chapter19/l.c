/* (l) Given a text file, Write a program to create another text file deleting
       the words "a", "the", "an" and replace each one of them with a blank space.

Apporach :
	1) Compare all words using fscanf and replace a, the, an with a space.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *fp, *fs;
	char str[300], ch;
	
	fp = fopen("logs/file.txt", "r");
	fs = fopen("logs/fil.txt", "w");
	if(fp == NULL || fs == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	/*Remove the words "a", "the", "an" from the text and replacing it by a space. */	
	while(fgets(str, fp))
	{
		printf("%s", str);
		if((strcmp(str, "the") == 0) || (strcmp(str, "a") == 0) || (strcmp(str, "an") == 0))
		{
			strcpy(str, "  ");
			fputs(str, fs);
		}
		else
		{
			fputs(str, fs);
			fputs(" ", fs);
		}
		
		 
	}
	
	fclose(fp);
	fclose(fs);
}

