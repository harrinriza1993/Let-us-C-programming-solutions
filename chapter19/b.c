/* (b) Write a program to append the contents of one file at the end of another.

Apporach :
	1) To append two files copy the contents of two files in the other file.
*/

#include <stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp, *fs;
	char ch;
	
	/*Open the file which is used for appending the other file.*/
	fp = fopen("file1", "a");
	fprintf(fp, "\n");
	
	if(fp == NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	
	fs = fopen("file2", "r");
	if(fs == NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	
	/*Appending two one file at the end of another. */
	while(1)
	{
		ch = getc(fs);
		
		if(ch == EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fp);
		}
	}
	fclose(fp);
	fclose(fs);
}
