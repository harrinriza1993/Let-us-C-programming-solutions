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

struct employee_details
{
	int empcode;
	char empname[20];
	struct date join_date;
	float salary;
}employee[MAX];

int compare_year(const void *pa, const void *pb)
{
	struct employee_details *p1 = (struct employee_details *)pa;
	struct employee_details *p2 = (struct employee_details *)pb;
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
	FILE *fp, *fs;
	
	fp = fopen("logs/employee.txt", "r");
	fs = fopen("logs/employee1.txt", "w");
	if(fp == NULL || fs == NULL)
	{
		printf("Could not open employee.txt, employee1.txt file\n");
		exit(0);
	}
	
	printf("The details of employee is\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fp, " %d %s %d %d %d %f", &employee[i].empcode, employee[i].empname, &employee[i].join_date.d, &employee[i].join_date.m, &employee[i].join_date.y, &employee[i].salary) != 			EOF)
			printf(" %d %s %d %d %d %f\n", employee[i].empcode, employee[i].empname, employee[i].join_date.d, employee[i].join_date.m, employee[i].join_date.y, employee[i].salary);
	}
	
	/*Using qsort arrange them in terms of year. */
	qsort(employee, MAX, sizeof(struct employee_details), compare_year);
	
	/*If two year are equal, then check the months and swap them accordingly. */
	for(int i = 0; i < MAX; i++)
	{
		for(int j = i + 1; j < MAX; j++)
		{
			if(employee[i].join_date.y == employee[j].join_date.y)
			{
				if(employee[i].join_date.m > employee[j].join_date.m)
				{
					tempcode = employee[i].empcode;
					strcpy(tempname, employee[i].empname);
					tempday = employee[i].join_date.d;
					tempmonth = employee[i].join_date.m;
					tempyear = employee[i].join_date.y;
					tempsalary = employee[i].salary;
					
					employee[i].empcode = employee[j].empcode;
					strcpy(employee[i].empname, employee[j].empname);
					employee[i].join_date.d = employee[j].join_date.d;
					employee[i].join_date.m = employee[j].join_date.m;
					employee[i].join_date.y = employee[j].join_date.y;
					employee[i].salary = employee[j].salary;
					
					employee[j].empcode = tempcode; 
					strcpy(employee[j].empname, tempname);
					employee[j].join_date.d = tempday; 
					employee[j].join_date.m = tempmonth; 
					employee[j].join_date.y = tempyear;  
					employee[j].salary = tempsalary;
				}
			}
		}	
	}
	
	/*If two months and year are same, then check the days and swap them accordingly. */
	for(int i = 0; i < MAX; i++)
	{
		for(int j = i + 1; j < MAX; j++)
		{
			if((employee[i].join_date.m == employee[j].join_date.m) && (employee[i].join_date.y == employee[j].join_date.y))
			{
				if(employee[i].join_date.d > employee[j].join_date.d)
				{
					tempcode = employee[i].empcode;
					strcpy(tempname, employee[i].empname);
					tempday = employee[i].join_date.d;
					tempmonth = employee[i].join_date.m;
					tempyear = employee[i].join_date.y;
					tempsalary = employee[i].salary;
					
					employee[i].empcode = employee[j].empcode;
					strcpy(employee[i].empname, employee[j].empname);
					employee[i].join_date.d = employee[j].join_date.d;
					employee[i].join_date.m = employee[j].join_date.m;
					employee[i].join_date.y = employee[j].join_date.y;
					employee[i].salary = employee[j].salary;
					
					employee[j].empcode = tempcode; 
					strcpy(employee[j].empname, tempname);
					employee[j].join_date.d = tempday; 
					employee[j].join_date.m = tempmonth; 
					employee[j].join_date.y = tempyear;  
					employee[j].salary = tempsalary; 
				}
			}
		}
	}
	
	printf("\nThe sorted data based on joining date is\n");
	for(int i = 0; i < MAX; i++)
	{
		printf(" %d %s %d %d %d %f\n", employee[i].empcode, employee[i].empname, employee[i].join_date.d, employee[i].join_date.m, employee[i].join_date.y, employee[i].salary);
	}
	
	for(int i = 0; i < MAX; i++)
	{
		fprintf(fs, " %d %s %d %d %d %f\n", employee[i].empcode, employee[i].empname, employee[i].join_date.d, employee[i].join_date.m, employee[i].join_date.y, employee[i].salary);
	}
	
	fclose(fp);
	fclose(fs);
}
	

