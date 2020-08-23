/* (d) Write a program to copy contents of one file to another. while doing so
       replace all lowercase characters to their equivalent uppercase characters.

Apporach:
	1) To replace all lowercase letters in to uppercase letters, subtract the ascii 
	   value of lowercase letters by 32, So we will get the uppercase alphabet.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fs, *fp;
	char ch;
	
	/*Opening a new file.*/	
	fs = fopen("lower.txt", "r");
	if(fs == NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	
	/*Creating a new file. */
	fp = fopen("upper.txt", "w");
	if(fp == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	
	/*Copying file1 to file2 and converting the lowecase letters in to uppercase letter. */
	while(1)
	{
		ch = fgetc(fs);
		
		if (ch == EOF)
		{
			break;
		}
		
		else if(ch >= 97 && ch <= 122)
		{
			ch = ch - 32;
			fputc(ch, fp);
		}
		else
		{
			fputc(ch, fp);
		}
	}
	fclose(fs);
	fclose(fp);
}
