/* (C) If the marks obtained by a student in five different subjects are input through
       the keyboard, write a program to find out the aggregate marks and percentage marks
       obtained by the student. Assume that the maximum marks obtained by the student in
       each subject is 100.
*/

#include<stdio.h>

void main()
{
	int m1, m2, m3, m4, m5;
	
	printf("Enter the marks obtained by a student in 5 subjects\n");
	scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
	
	if(m1 <= 100 && m1 >= 0 && m2 <= 100 && m2 >= 0 && m3 <= 100 && m3 >= 0 && m4 <= 100 && m4 >= 0 && m5 <= 100 && m5 >= 0)
  	{
		printf("The Aggregate mark of the student is %d\n", m1 + m2 + m3 + m4 + m5);
		printf("The Percentage mark of the student is %f\n", (float)((m1 + m2 + m3 + m4 + m5) / 5));
	}
	else
	{
		printf("Invalid subject mark\n");
		
	}  
} 
