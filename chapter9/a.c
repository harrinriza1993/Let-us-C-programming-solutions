/*
  Write a function that receives 5 integers and returns the sum,
  average, and standard deviation of these numbers.
  call this function from main() and print the results in main().

Apporach:
          A subfunction sumAvgStd is used to find the sum,average
          and standard deviation of 5 numbers
*/

#include<stdio.h>
#include<math.h>

int sumAvgStd(int,int,int,int,int,float*,float*,float*);


int main()
{
	int n1,n2,n3,n4,n5;
	float s,a,sd;

	printf("Enter five numbers to find avg, sum and std\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

	sumAvgStd(n1,n2,n3,n4,n5,&s,&a,&sd);

	printf("The sum of 5 integers is %f\n",s);	
	printf("The average of 5 integers is %f\n",a);	
	printf("The standard deviation of 5 integers is %f\n",sd);

	return 0;
}

int sumAvgStd(int n1,int n2,int n3,int n4,int n5,float *add,float *average,float *sd)
{
	/*The sum of numbers is found by adding all the numbers*/
	*add = n1+n2+n3+n4+n5;

	/*The average of numbers is found by adding all the numbers
	  and dividing it by the total numbers.*/
	*average    = *add/5;
	
	/*The standard is found by 
	  1. subtracting each number by the average 
	  2. take square of the numbers
	  3. finally squre root of (add all the numbers and divide it by total number).

		sd = sqrt[ (n1-avg)^2 + n2-avg)^2 + n3-avg)^2 + n4-avg)^2 + n5-avg)^2 ]
	*/ 

	n1  = pow((n1 - *average), 2);
	n2  = pow((n2 - *average), 2);
	n3  = pow((n3 - *average), 2);
	n4  = pow((n4 - *average), 2);
	n5  = pow((n5 - *average), 2);

	*sd = sqrt((n1 + n2 + n3 + n4 + n5)/5);
}



	
	

	
	
	
	
