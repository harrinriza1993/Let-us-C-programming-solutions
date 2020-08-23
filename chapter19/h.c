/* (h) There are 100 records present in a file with the following structure

	struct date
	{
		int d, m, y;
	}
	
	struct employee
	{
		int empcode[6]; char empname[20];
		struct date Join_date; float salary;
	};
	
	Write a program to read these records, arrange them in ascending order by join_date
	and write them to a target file.

Apporach:
	1) Using q sort arrange them in terms of the year.
	2) If two years are equal then check the months, and then check the days
	   and swap them accordingly.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 6

struct date
{
	int d;
	int m;
	int y;
};

struct employee
{
	int empcode;
	char empname[20];
	struct date join_date;
	float salary;
}e[MAX];

int compare_year(const void *pa, const void *pb)
{
	struct employee *p1 = (struct employee *)pa;
	struct employee *p2 = (struct employee *)pb;
	return (p1 -> join_date.y - p2 -> join_date.y);	
}



void main()
{
	int tempcode;
	char tempname[20];
	int tempday;
	int tempmonth;
	int tempyear;
	float tempsalary;
	
	FILE *fp;
	
	fp = fopen("employee.txt", "r");
	
	if(fp == NULL)
	{
		printf("Cannot open existing file\n");
		exit(0);
	}
	
	printf("The details of employee is\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fp, " %d %s %d %d %d %f", &e[i].empcode, e[i].empname, &e[i].join_date.d, &e[i].join_date.m, &e[i].join_date.y, &e[i].salary) != EOF)
			printf(" %d %s %d %d %d %f\n", e[i].empcode, e[i].empname, e[i].join_date.d, e[i].join_date.m, e[i].join_date.y, e[i].salary);
	}
	
	/*Using qsort arrange them in terms of year. */
	qsort(e, 6, sizeof(struct employee), compare_year);
	
	/*If two year are equal, then check the months and swap them accordingly. */
	for(int i = 0; i < MAX; i++)
	{
		for(int j = i + 1; j < 6; j++)
		{
			if(e[i].join_date.y == e[j].join_date.y)
			{
				if(e[i].join_date.m > e[j].join_date.m)
				{
					tempcode = e[i].empcode;
					strcpy(tempname, e[i].empname);
					tempday = e[i].join_date.d;
					tempmonth = e[i].join_date.m;
					tempyear = e[i].join_date.y;
					tempsalary = e[i].salary;
					
					e[i].empcode = e[j].empcode;
					strcpy(e[i].empname, e[j].empname);
					e[i].join_date.d = e[j].join_date.d;
					e[i].join_date.m = e[j].join_date.m;
					e[i].join_date.y = e[j].join_date.y;
					e[i].salary = e[j].salary;
					
					e[j].empcode = tempcode; 
					strcpy(e[j].empname, tempname);
					e[j].join_date.d = tempday; 
					e[j].join_date.m = tempmonth; 
					e[j].join_date.y = tempyear;  
					e[j].salary = tempsalary;
				}
			}
		}	
	}
	
	/*If two months and year are same, then check the days and swap them accordingly. */
	for(int i = 0; i < MAX; i++)
	{
		for(int j = i + 1; j < MAX; j++)
		{
			if((e[i].join_date.m == e[j].join_date.m) && (e[i].join_date.y == e[j].join_date.y))
			{
				if(e[i].join_date.d > e[j].join_date.d)
				{
					tempcode = e[i].empcode;
					strcpy(tempname, e[i].empname);
					tempday = e[i].join_date.d;
					tempmonth = e[i].join_date.m;
					tempyear = e[i].join_date.y;
					tempsalary = e[i].salary;
					
					e[i].empcode = e[j].empcode;
					strcpy(e[i].empname, e[j].empname);
					e[i].join_date.d = e[j].join_date.d;
					e[i].join_date.m = e[j].join_date.m;
					e[i].join_date.y = e[j].join_date.y;
					e[i].salary = e[j].salary;
					
					e[j].empcode = tempcode; 
					strcpy(e[j].empname, tempname);
					e[j].join_date.d = tempday; 
					e[j].join_date.m = tempmonth; 
					e[j].join_date.y = tempyear;  
					e[j].salary = tempsalary; 
				}
			}
		}
	}
	
	printf("\nThe sorted data based on joining date is\n");
	for(int i = 0; i < MAX; i++)
	{
		printf(" %d %s %d %d %d %f\n", e[i].empcode, e[i].empname, e[i].join_date.d, e[i].join_date.m, e[i].join_date.y, e[i].salary);
	}
	fclose(fp);
}	
	

