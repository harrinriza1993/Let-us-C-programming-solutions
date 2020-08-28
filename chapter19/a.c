/* (a) Write a program to read a file and display it's contents along with line numbers before 
       each line.

Apporach :
	1) If we encounter \n then i value should be incremented and printed after each line.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int i = 1;
	
	/*Reads a file. */
	fp = fopen("logs/a.txt", "r");
	if (fp == NULL)
	{
		printf("Cannot open a.txt file\n");
		exit(1);
	}
	
	/*Prints the file along with line numbers before each line. */
	printf("%d ", i);
	while(1)
	{
		ch = fgetc(fp);
		printf("%c", ch);
		
		if(ch == '\n')
		{
			i++;
			printf("%d ", i);
		}
		
		if (ch == EOF)
			break;
}
	
	printf("\n");
	
	fclose(fp);
	
	return 0;
}

