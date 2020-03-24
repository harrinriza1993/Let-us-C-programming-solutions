/* Write a function that receives marks obtained by a student in 3 subjects
   and returns the average and percentage of these marks.
   call this function from main() and print the results in main().

Apporach:
	1)The maximum mark of each subject is considered as 100.
	2)The average is found by sum of all numbers divided 
          by total number.
        3)Percentage is found by sum of all numbers multiplied by 100
          and divided by addition of maximum mark.
*/

#include<stdio.h>

void marks(int,int,int,float*,float*);

int main()
{
	unsigned short int m1,m2,m3;
	float average,percentage;
	
	printf("Enter the marks for 3 subjects\n");
	scanf("%hu %hu %hu",&m1,&m2,&m3);

	if(m1<=100 && m2<=100 && m3<=100)
	{
		marks(m1,m2,m3,&average,&percentage);

		printf("The average of 3 subject is %f\n",average);	
		printf("The percentage of 3 subject is %f\n",percentage);
	}
	else
		printf("Invalid entry. Please enter valid numbe <0 - 100>\n");

	return 0;
}

void marks(int m1, int m2 ,int m3, float *average, float *percentage)
{
	*average  = (m1 + m2 + m3)/3;

	// percentage = sum of 3 marks * 100/300
	*percentage = *average/3;
}


