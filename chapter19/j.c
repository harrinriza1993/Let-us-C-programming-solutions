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
	char str[200], ch;
	int number, n;
	
	fp = fopen("student1.txt", "w");
	
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	printf("Enter the no. of students to be written in a file\n");
	scanf("%d ", &number);
	
	/*Get the students name and store it in fp file. */	
	for(int i = 0; i < number; i++)
	{
		fgets(str, sizeof(str), stdin);
		fputs(str, fp);
	}
	fclose(fp);
	
	printf("Enter the number of student whose name should be displayed\n"); 
	scanf("%d", &n);
	
	/*Display the nth name in the list, where n is read from keyboard. */
	fp = fopen("student.txt", "r");
	if(n <= number)
	{
		for(int i = 0; i < number; i++)
		{
			fgets(str, sizeof(str), fp);
			
			if(n == i + 1)
				printf("The student name to be displayed from the list is %s", str);
		}
	}
	fclose(fp);
}
	
