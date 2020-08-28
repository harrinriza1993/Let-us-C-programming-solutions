/* (f) Write a program to encrypt/decrypt a file using:
	
	(1) Offset cipher : In this cipher each character from the source file is
	    offset with a fixed value and then written to a target file.
	    
	    For example, if character read from the source file is 'A', then write
	    a character represented by 'A' +128 to the target file. 
	    
	(2) Substitution cipher : In this cipher each for character read from the
	    source file a corresponding predetermined character is written to the
	    target file.
	    
	    For example, if character 'A' is read from the source file, then a '!'
	    would written to the target file. Similarly, even 'B' would be substituted by
	    '5' and so on.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp, *fs;
	char str[100], ch;
	
	fp = fopen("logs/sourcefile.txt", "r");
	fs = fopen("logs/targetfile.txt", "w");
	if(fp == NULL || fs == NULL)
	{
		printf("Could not able to open sourcefile.txt and targetfile.txt\n");
		exit(0);
	}
	
	/*It is an offset cipher, check whethear it is small or capital letter then change according to that. */ 
	while(1)
	{
		ch = fgetc(fp);
		
		if(ch == EOF)
			break;
		if(ch >= 65 && ch <= 90)
		{
			
			fputc(ch + 128 , fs);
		}
		else
		{
			fputc(ch, fs);
		}
	}
	printf("\n");
	fclose(fp);
	fclose(fs);
	
	fp = fopen("logs/sourcefile1.txt", "r");
	fs = fopen("logs/targetfile1.txt", "w");
	if(fs == NULL || fp == NULL)
	{
		printf("Could not able to open sourcefile1.txt and targetfile1.txt\n");
		exit(0);
	}
	
	/*It is a substitution cipher, the values are substitituted according to the assumptions. */
	while(1)
	{
		ch = fgetc(fp);
		
		if(ch == 'A')
		{
			ch = '!';
		}
		
		if(ch == 'B')
		{
			ch = '5';
		}
		
		if(ch == 'C')
		{
			ch = '0';
		}
		
		if(ch == 'D')
		{
			ch = '@';
		}
		
		if(ch == 'E')
		{
			ch = '#';
		}
		
		if(ch == 'F')
		{
			ch = '$';
		}
		
		if(ch == 'G')
		{
			ch = '%';
		}
		
		if(ch == 'H')
		{
			ch = '^';
		}
		
		if(ch == 'I')
		{
			ch = '&';
		}
		
		if(ch == 'J')
		{
			ch = '*';
		}
		
		if(ch == 'K')
		{
			ch = '(';
		}
		
		if(ch == 'L')
		{
			ch = '+';
		}
		
		if(ch == 'M')
		{
			ch = ')';
		}
		
		if(ch == 'N')
		{
			ch = '-';
		}
		
		if(ch == 'O')
		{
			ch = '{';
		}
		
		if(ch == 'P')
		{
			ch = '}';
		}
		
		if(ch == 'Q')
		{
			ch = '[';
		}
		
		if(ch == 'R')
		{
			ch = ']';
		}
		
		if(ch == 'S')
		{
			ch = ':';
		}
		
		if(ch == 'T')
		{
			ch = ';';
		}
		
		if(ch == 'U')
		{
			ch = '<';
		}
		
		if(ch == 'V')
		{
			ch = '>';
		}
		
		if(ch == 'W')
		{
			ch = '?';
		}
		
		if(ch == 'X')
		{
			ch = 'm';
		}
		
		if(ch == 'Y')
		{
			ch = '"';
		}
		
		if(ch == 'Z')
		{
			ch = '|';
		}
		
		fputc(ch, fs);
		
		if(ch == EOF)
			break;
	}
	
	fclose(fp);
	fclose(fs);
}
