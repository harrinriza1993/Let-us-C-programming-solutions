/* (c) Write a program using command line arguments to search for a word in file and 
       replace it with the specified word. The usage of the program is shown below
       
       c>change<old word><new word><filename>
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

/*Function to change a word to another word. */
void replace(char *str, int argc, char *argv[])
{
	char *pos, temp[MAX];
	int index, owlen;
	owlen = strlen(argv[2]);
	
	while ((pos = strstr(str, argv[2])) != NULL)
	{
		strcpy(temp, str);
		
		index = pos - str;
		str[index] = '\0';
		
		strcat(str, argv[3]);
		strcat(str, temp + index + owlen);
	} 
}

void main(int argc, char *argv[])
{
	FILE *fp, *ftemp;
	char str[MAX];
	
	fp = fopen(argv[1], "r");//c.text is the file
	ftemp = fopen("temp.text", "w");
	if(fp == NULL || ftemp == NULL)
	{
		printf("Cannot able to open c.text file or temp.text file\n");
		exit(0);
	}
	
	if(argc != 3)
	{
		printf("Improper number of arguments\n");
		exit(0);
	}
	
	/*Obtain each line from the file fp. */
	while(fgets(str, MAX, fp) != NULL)
	{
		replace(str, argc, argv);
		fputs(str, ftemp); 
	}
	
	remove(argv[1]);
	rename("temp.text", argv[1]);
	
	fclose(fp);
	fclose(ftemp);
}
