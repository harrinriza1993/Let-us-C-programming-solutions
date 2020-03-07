/*[D] Write a program to find the grace marks for a student using 
      switch.The user should enter the class obtained by the student and the
      number of students has failed in.Use the following logic:

     -If the student gets first class and the number of subjects he failed
      in is greater than 3,he does not get any grace.Otherwise the grace
      is of 5 marks per subject.
  
     -If the student gets second class and the number of subjects he 
      failed in is greater than 2,then he does not get any grace mark.
      Otherwise the grace of 4 marks per subject.

    -If the student gets third class and the number of subjects he
     failed in is greater than 1,then he does not get any grace mark.
     Otherwise the grace is of 5 marks.

Apporach:
	The class and failedsubject is get through the keyboard
	and according to that the grace mark is given.
*/


#include<stdio.h>

void main()
{
	int class,failedSubject;

	printf("Enter the class\n");
	scanf("%d",&class);

	printf("Enter the number of subjects failed\n");
	scanf("%d",&failedSubject);

	switch(class)
	{
		case 1:
			/*After the class it checks the failedsubject 
		 	 condition and according to that the gracemark
		  	is given.*/
			
			if (failedSubject>3)
				printf("There is no grace mark\n");
			else
			{
				printf("The Student is in 1st class\n");
				printf("The student gets grace mark 5 per subject\n");
			}
			break;
		case 2:
			if (failedSubject>2)
				printf("There is no grace mark\n");
			else
			{
				printf("The student is in 2nd class\n");
				printf("The student gets grace mark 4 per subject\n");
			}
			break;
		case 3:
			if (failedSubject>1)
				printf("There is no grace mark\n");
			else
			{
				printf("The student is in 3rd class\n");
				printf("The student gets 5 per subject\n");
			}			
			break;
		default:
			printf("Please enter 1st or 2nd or 3rd class\n");
	}
}



	



