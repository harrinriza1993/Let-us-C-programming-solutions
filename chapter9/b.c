/* Write a function that receives marks obtained by a student in 3 subjects
   and returns the average and percentage of these marks.call this function
   from main() and print the results in main().

Apporach:
	1)The maximum mark of each subject is considered as 100.
	2)The average is found by sum of all numbers divided 
          by total number.
        3)Percentage is found by sum of all numbers multiplied by 100
          and divided by addition of maximum mark.
*/

#include<stdio.h>

int marks(int,int,int,int*,int*);


int main()
{
	int m1,m2,m3,average,percentage;
	
	printf("Enter the marks\n");
	scanf("%d%d%d",&m1,&m2,&m3);
	marks(m1,m2,m3,&average,&percentage);
	printf("The average of 3 subject is %d\n",average);
	
	printf("The percentage of 3 subject is %d\n",percentage);
	return 0;
}
int marks(int m1, int m2 ,int m3,int *average,int *percentage)
{
	int M;

	*average        = (m1 + m2 + m3)/3;
	 M              = m1 + m2 +m3;

	/*Maximum mark is considered to be 100,so the total 
          mark of 3 subject is 300.*/
	*percentage     = (M*100)/300;
}


