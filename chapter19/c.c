/* (c) Suppose a file contains student's records with each record containing name and age of a 
       student. Write a program to read these records and display them in sorted order by name.

Apporach :
	1) Read a file which contains name and age of the students.
	2) Using qsort, sort them interms of their names.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5
struct student_details
{
	char name[100];
	int age;
}student[MAX];

/*Function to compare all the names in the structure. */
int compare_name(const void* pa, const void* pb)
{
	struct student_details *p1 = (struct student_details *) pa;
	struct student_details *p2 = (struct student_details *) pb;
	return strcmp(p1 -> name, p2 -> name);
}

void main()
{
	FILE *fp;
	
	fp = fopen("logs/student.txt", "r");
	if(fp == NULL)
	{
		printf("Cannot open student.txt file\n");
		exit(1);
	}
	
	/*The name and age of a students in the file. */
	printf("The names and age of students in a file\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fp, "%s %d ", student[i].name, &student[i].age) != EOF)
			printf("%s %d\n", student[i].name, student[i].age);
	}
	
	qsort(student, MAX, sizeof(struct student_details), compare_name);
	
	/*The sorted details of students based on name. */
	printf("\nThe sorted details of students based on name is\n"); 
	for(int i = 0; i < MAX; i++)
	{
		printf("%s %d\n", student[i].name, student[i].age);
	}
	fclose(fp);
}
