/* (e) Write a program that merges lines alternatively from two files and write the result to new file.
       If one file has less number of lines than the other, the remaining lines from the larger file
       should be simply copied into the target file.

Apporach :
	1) Using fgetc single character by character is taken to merge two files
	   alternatively.
	2) Using fgets a string of line of two files are merged together in the third
	   file.
*/

/*program that merges lines alternatively from two files using getc(single character). */
#include "stdio.h"

void main()
{
	FILE *fp,*ft,*fs;
	char ch;
	int f1 = 1,f2 = 1,counter = 1;

	fp=fopen("file1.txt","r");
	ft=fopen("file2.txt","r");
	fs=fopen("combine.txt","w");

	while(1)
	{
		/*Write the lines of file1.txt in to combine.txt file. */
		if(counter == 1||f2 == 0)
		{
			ch = fgetc(fp);
			
			if(ch == EOF)
				f1 = 0;
				
			if(ch =='\n'||ch == 46)
				counter = 2;
				
			if(f1 != 0)
				fputc(ch,fs);
		}
		
		/*Write the lines of file2.txt in to combine.txt file. */
		if(counter == 2||f1 == 0)
		{
			ch = fgetc(ft);
			
			if(ch == EOF)
				f2 = 0;
			
			if(ch =='\n'||ch == 46)
				counter=1;
					
			if(f2!=0)
				fputc(ch,fs);
		}
		
		if(f1 == 0 && f2 == 0)
			break;
	}

	fclose(fp);
	fclose(ft);
	fclose(fs);
} 

/*program that merges lines alternatively from two files using gets(a line of string). */
#include<stdio.h>
void main()
{
	FILE *fp, *ft, *fs;
	char line[256];
	char p1, p2;

	fp = fopen("f1.txt", "r");
	ft = fopen("f2.txt", "r");
	fs = fopen("f3.txt", "w");

	if(fp == NULL || ft == NULL ||  fs == NULL)
	{
		printf("could not open the file\n");
		exit(0);
	}

	while(1)
	{
		// Read the line from the file1
		p1 = fgets(line, sizeof(line), fp);
		if(p1 != NULL)
		{
			fputs(line, fs);
		}

		// Read the line from the file2
		p2 = fgets(line, sizeof(line), ft);
		if(p2 != NULL)
		{
			fputs(line, fs);
		}
			
		if(p1 == NULL && p2 == NULL)
		{
			break;
		}	
	}

	fclose(fp);
	fclose(ft);
	fclose(fs);
}
