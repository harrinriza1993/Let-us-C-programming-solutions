/* (e) There is a structure called employee that holds the employee code, name and the
       date of joining. Write a program to create an array of structure and write a 
       data into it. Then ask the user to enter current date, Display the names of those
       employee whose tenure is greater than or equal to 3 years.
 
 Apporach:
 	1) A structure employee is created with details given below.
 	2) Current year should be compared with date of joining year.
 	3) If the tenure is greater than or equal to three years,
           then the names are printed.
*/
 
 #include<stdio.h>
 
 struct dateofjoining
 {
 	int day;
 	int month;
 	int year;
 };
 
 struct employee
 {
 		int code;
 		char name[20];
 		struct dateofjoining date;
 		
 }emp[5];
 
 void main()
 {
 	int i;
 	int currentday, currentmonth, currentyear;
 	
 	/*Get the information from the user. */
 	printf("Enter the code, name and date of joining of employees with day, month and year\n");
 	for(i = 0; i < 5; i++)
 		scanf("%d %s %d %d %d", &emp[i].code, emp[i].name, &emp[i].date.day, &emp[i].date.month, &emp[i].date.year);
 	
 	printf("Enter current date of joining with day, month, year\n");
 	scanf("%d %d %d", &currentday, &currentmonth, &currentyear);
 	
 	/*Print the employees whose tenure greater than or equal to three years */
 	printf("\n The name of employees whose tenure greater than or equal to 3 years is\n");
 	for(i = 0; i < 5; i++)
 	{
 		if((currentyear - emp[i].date.year) >= 3)
 			printf("%s\n", emp[i].name);
 	}
 }
 	
