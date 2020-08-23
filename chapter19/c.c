/* (c) Suppose a file contains student's records with each record containing name and age of a 
       student. Write a program to read these records and display them in sorted order by name.

Apporach :
	1) Read a file which contains name and age of the students.
	2) Using qsort, sort them interms of their names.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char name[100];
	int age;
}s[5];

/*Function to compare all the names in the structure. */
int compare_name(const void* pa, const void* pb)
{
	struct student *p1 = (struct student *) pa;
	struct student *p2 = (struct student *) pb;
	return strcmp(p1 -> name, p2 -> name);
}

void main()
{
	FILE *fp;
	fp = fopen("student.txt", "r");
	
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(1);
	}
	
	/*The name and age of a students in the file. */
	printf("The names and age of students in a file\n");
	for(int i = 0; i < 5; i++)
	{
		if(fscanf(fp, "%s %d ", s[i].name, &s[i].age) != EOF)
			printf("%s %d\n", s[i].name, s[i].age);
	}
	
	qsort(s, 5, sizeof(struct student), compare_name);
	
	/*The sorted details of students based on name. */
	printf("\nThe sorted details of students based on name is\n"); 
	for(int i = 0; i < 5; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}
	fclose(fp);
}
