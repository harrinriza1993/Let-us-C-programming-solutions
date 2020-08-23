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
	
	fp = fopen("sourcefile.txt", "r");
	fs = fopen("targetfile.txt", "w");
	
	if(fp == NULL || fs == NULL)
	{
		printf("Cannot open existing file\n");
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
		else if(ch >= 97 && ch<= 122)
		{
			fputc(ch - 128 , fs);
		}
	}
	printf("\n");
	fclose(fp);
	fclose(fs);
	
	fp = fopen("sourcefile1.txt", "r");
	fs = fopen("targetfile1.txt", "w");
	
	if(fs == NULL || fp == NULL)
	{
		printf("cannot open existing file\n");
		exit(0);
	}
	
	/*It is a substitution cipher, the values are substitituted according to the assumptions. */
	while(1)
	{
		ch = fgetc(fp);
		
		if(ch == 'A')
		{
			ch = '!';
			fputc(ch, fs);
		}
		if(ch == 'B')
		{
			ch = '5';
			fputc(ch, fs);
		}
		
		if(ch == 'C')
		{
			ch = '0';
			fputc(ch, fs);
		}
		
		if(ch == 'D')
		{
			ch = '@';
			fputc(ch, fs);
		}
		
		if(ch == 'E')
		{
			ch = '#';
			fputc(ch, fs);
		}
		
		if(ch == 'F')
		{
			ch = '$';
			fputc(ch, fs);
		}
		
		if(ch == 'G')
		{
			ch = '%';
			fputc(ch, fs);
		}
		
		if(ch == 'H')
		{
			ch = '^';
			fputc(ch, fs);
		}
		
		if(ch == 'I')
		{
			ch = '&';
			fputc(ch, fs);
		}
		
		if(ch == 'J')
		{
			ch = '*';
			fputc(ch, fs);
		}
		
		if(ch == 'K')
		{
			ch = '(';
			fputc(ch, fs);
		}
		
		if(ch == 'L')
		{
			ch = '+';
			fputc(ch, fs);
		}
		
		if(ch == 'M')
		{
			ch = ')';
			fputc(ch, fs);
		}
		
		if(ch == 'N')
		{
			ch = '-';
			fputc(ch, fs);
		}
		
		if(ch == 'O')
		{
			ch = '{';
			fputc(ch, fs);
		}
		
		if(ch == 'P')
		{
			ch = '}';
			fputc(ch, fs);
		}
		
		if(ch == 'Q')
		{
			ch = '[';
			fputc(ch, fs);
		}
		
		if(ch == 'R')
		{
			ch = ']';
			fputc(ch, fs);
		}
		
		if(ch == 'S')
		{
			ch = ':';
			fputc(ch, fs);
		}
		
		if(ch == 'T')
		{
			ch = ';';
			fputc(ch, fs);
		}
		
		if(ch == 'U')
		{
			ch = '<';
			fputc(ch, fs);
		}
		
		if(ch == 'V')
		{
			ch = '>';
			fputc(ch, fs);
		}
		
		if(ch == 'W')
		{
			ch = '?';
			fputc(ch, fs);
		}
		
		if(ch == 'X')
		{
			ch = 'm';
			fputc(ch, fs);
		}
		
		if(ch == 'Y')
		{
			ch = '"';
			fputc(ch, fs);
		}
		
		if(ch == 'Z')
		{
			ch = '|';
			fputc(ch, fs);
		}
		
		if(ch == 'a')
		{
			ch = '1';
			fputc(ch, fs);
		}
		
		if(ch == 'b')
		{
			ch = '2';
			fputc(ch, fs);
		}
		
		if(ch == 'c')
		{
			ch = '3';
			fputc(ch, fs);
		}
		
		if(ch == 'd')
		{
			ch = '4';
			fputc(ch, fs);
		}
		
		if(ch == 'e')
		{
			ch = '7';
			fputc(ch, fs);
		}
		
		if(ch == 'f')
		{
			ch = '8';
			fputc(ch, fs);
		}
		
		if(ch == 'h')
		{
			ch = '9';
			fputc(ch, fs);
		}
		
		if(ch == 'i')
		{
			ch = '~';
			fputc(ch, fs);
		}
		
		if(ch == 'j')
		{
			ch = '`';
			fputc(ch, fs);
		}
		
		if(ch == 'k')
		{
			ch = '=';
			fputc(ch, fs);
		}
		
		if(ch == 'l')
		{
			ch = 'v';
			fputc(ch, fs);
		}
		
		if(ch == 'm')
		{
			ch = '_';
			fputc(ch, fs);
		}
		
		if(ch == 'n')
		{
			ch = 'q';
			fputc(ch, fs);
		}
		
		if(ch == 'o')
		{
			ch = 'w';
			fputc(ch, fs);
		}
		
		if(ch == 'p')
		{
			ch = 'e';
			fputc(ch, fs);
		}
		
		if(ch == 'r')
		{
			ch = 't';
			fputc(ch, fs);
		}
		
		if(ch == 's')
		{
			ch = 'i';
			fputc(ch, fs);
		}
		
		if(ch == 't')
		{
			ch = 'h';
			fputc(ch, fs);
		}
		
		if(ch == 'u')
		{
			ch = 'j';
			fputc(ch, fs);
		}
		
		if(ch == 'v')
		{
			ch = 'l';
			fputc(ch, fs);
		}
		
		if(ch == 'w')
		{
			ch = 'f';
			fputc(ch, fs);
		}
		
		if(ch == 'x')
		{
			ch = 'p';
			fputc(ch, fs);
		}
		
		if(ch == 'y')
		{
			ch = 'a';
			fputc(ch, fs);
		}
		
		if(ch == 'z')
		{
			ch = 'n';
			fputc(ch, fs);
		}
		
		if(ch == EOF)
			break;
	}
	fclose(fp);
	fclose(fs);
}
