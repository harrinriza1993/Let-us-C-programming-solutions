/* (a) Create a structure called student that contain data given below

	Roll number, Name, Department, Course, Year of joining
	
	Assume that there are not more than 450 students in the college.
	
	(1) Write a function to print names of  all students who joined in a particular
	    year.
	(2) Write a function to print the data of a student whose roll number 
	    is received by the function.
	
Apporach:
	1) The structure named student is created, with the specified data.
	2) A particular year is asked to the user and respective name to the year
	   is printed.
	3) A roll number is received to the function by the user and the data 
	   related to the roll number is printed.
*/

#include<stdio.h>

struct student
{
	int rollno;
	char name[10];
	char department[10];
	char course[10];
	int yearofjoining;
}s[5];

void nam(char *);
void dataofstudent(struct student s1);


void main()
{
	
	printf("Enter the student details\n");
	printf("Enter the student Roll number, name, department, course, year of joining\n");
	for(int i = 0; i <= 5; i++)
	{
		scanf("%d %s %s %s %d", &s[i].rollno, s[i].name, s[i].department, s[i].course, &s[i].yearofjoining);
	}
	
	int i, year;
	printf("Enter a particular year of joining\n");
	scanf("%d", &year);
	
	/*Print the names of a paricular year. */
	printf("\nThe name of students joined in a particular year are \n");
	for(i = 0; i <= 5; i++)
	{
		if(year == s[i].yearofjoining)
			nam(s[i].name);
	}
	
	int rollnumber;
	
	/*Print the entire data of a particular roll number. */
	printf("Enter the roll number of a student whose data is needed\n");
	scanf("%d", &rollnumber);
	for(i = 0; i <= 5; i++)
	{
		if(rollnumber == s[i].rollno)
			dataofstudent(s[i]);
	}
}

void nam(char *name)
{
	printf("%s\n", name);
} 

void dataofstudent(struct student s1)
{
	printf("\nThe data of students for a particular rollno is\n");
	printf("%d %s %s %s %d\n", s1.rollno, s1.name, s1.department, s1.course, s1.yearofjoining);
} 
