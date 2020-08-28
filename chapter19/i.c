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

struct blood_donor
{
	char name[40];
	char address[40];
	int age;
	int blood_type;
}b;

void main()
{
	FILE *fp;
	
	fp = fopen("logs/blood_donor.txt", "r");
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	/* Read the  blood donors from the file. */
	printf("The details of a blood donor whose age is less than 25 and blood type 2 is\n");
	while(1) 
	{
		if(fscanf(fp, "%s %s %d %d", b.name, b.address, &b.age, &b.blood_type) != EOF)
		{
			if(b.age < 25 && b.blood_type == 2)
				printf("%s %s %d %d\n", b.name, b.address, b.age, b.blood_type);
		}
		else
		{
			break;
		}
	}
	
	fclose(fp);
}
