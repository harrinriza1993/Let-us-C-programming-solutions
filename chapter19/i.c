/* (i) A hospital keeps a file of blood donor in which each record has the format:

	Name : 20 Columns
	Address : 40 Columns
	Age : 2 Columns
	Blood Type : 1 Column(Type 1, 2, 3 or 4)
	
	Write a program to read the file and print a list of all blood donors whose
	age is below 25 and whose blood type is 2.

Apporach:
	1) A structure of blood donor is opened.
	2) In that file the details of blood donors whose age is less than 25 and blood type 2 
	   is displayed.
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct blood_donor
{
	char name[40];
	char address[40];
	int age;
	int blood_type;
}b[MAX];

void main()
{
	FILE *fp;
	
	fp = fopen("blood_donor.txt", "r");
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	/* Read the  blood donors from the file. */
	printf("The details of a blood donor are\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fp, "%s %s %d %d", b[i].name, b[i].address, &b[i].age, &b[i].blood_type) != EOF)
		{
			printf("%s %s %d %d\n", b[i].name, b[i].address, b[i].age, b[i].blood_type);
		}
	}
	
	/* Print the details of blood donors whose age is below 25 and whose blood type is 2. */
	printf("\nThe details of blood donors whose age is below 25 and whose blood type is 2\n");  
	for(int i = 0; i < MAX; i++)
	{
		if(b[i].age < 25 && b[i].blood_type == 2)
			printf("%s %s %d %d\n", b[i].name, b[i].address, b[i].age, b[i].blood_type);
	}
	fclose(fp);
}
