/* (a) Create a structure called student that contain data given below

	Roll number, Name, Department, Course, Year of joining
	
	Assume that there are not more than 450 students in the college.
	
	(1) Write a function to print names of all students who joined in a particular
	    year.
	(2) Write a function to print the data of a student whose roll number 
	    is received by the function.
*/

#include<stdio.h>

// Private variable
#define NUM_OF_STUDENT 5 //450

struct student
{
	int rollNo;
	char name[20];
	char department[20];
	char course[20];
	int yearOfJoining;
}s[NUM_OF_STUDENT] = { 
	1, "Harrin", "IT",		  "Msc", 2011,
	2, "Rizza",  "ECE",		  "B.E", 2015,
	3, "Lal",    "EEE", 		  "B.E", 2020,
	4, "Bosco",  "Mechanical",        "B.E", 2000,
	5, "Raj",    "Computer Science",  "Bsc", 2019,
};

// Private Function declaration
static void studentInparticularYear(int year);
static void dataOfStudent(int rollNo);

void main()
{
	int year;
	printf("Enter a particular year of joining\n");
	scanf("%d", &year);
	studentInparticularYear(year);
	
	int rollNumber;
	printf("Enter the roll number of a student whose data is needed\n");
	scanf("%d", &rollNumber);
	dataOfStudent(rollNumber);
}

// Private Function definition

/*Print the names of a paricular year. */
static void studentInparticularYear(int year)
{
	printf("\nYear of joining the student: %d\n", year);
	for(int i = 0; i < NUM_OF_STUDENT; i++)
	{
		if(year == s[i].yearOfJoining)
		{
			printf("Name: %s\n", s[i].name);
		}
	}
	printf("\n\n");
} 

/*Print the entire data of a particular roll number. */
static void dataOfStudent(int rollNumber)
{
	printf("\nThe data of students for a particular rollno is %d\n", rollNumber);
	for(int i = 0; i < NUM_OF_STUDENT; i++)
	{
		if(rollNumber == s[i].rollNo)
		{
			printf("Roll Number : %d\n", s[i].rollNo);
			printf("Name : %s\n", s[i].name);
			printf("Department : %s\n", s[i].department);
			printf("Course : %s\n", s[i].course);
			printf("Year of Join : %d\n\n", s[i].yearOfJoining);
		}
	}
	printf("\n\n");
}

