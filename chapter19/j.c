/* (j) Given a list of students in a class, write a program to store the names in a file on disk. Make
       a provision to display the nth name in the list, where n is read from the keyboard.

Apporach:
	1) Get the student name as input and store it in a file.
	2) Ask the user the number and display the student name.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char str[200], ch = 'Y', c;
	int n, i ;
	
	fp = fopen("logs/student1.txt", "w");
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	/*Get the students name and store it in fp file. */	
	while(ch == 'Y')
	{
		printf("Enter the name : ");
		scanf("%[^\n]",str);
		//fflush(stdin);
		fputs(str, fp);
		//printf("Do you want to continue Y/N : ");
		//scanf(" %c", &ch);
		//fflush(stdin);
	}
	
	printf("Enter the  nth number of student whose name should be displayed\n"); 
	scanf("%d", &n);
	
	/*Display the nth name in the list, where n is read from keyboard. */
	rewind(fp);
	for(i = 0; i < n; i++)
	{
		if((str, sizeof(str), fp) == NULL)
				break;
	}
	if(i == n)
		printf("The student name to be displayed from the list is %s", str);
	else
		printf("The no of lines in a file is less\n");
	
	fclose(fp);
}
	
