/*Write a function that receives 5 integers and returns the sum,
  average, and standard deviation of these numbers.call this function
  from main() and print the results in main().

Apporach:
        1)A subfunction sum is used to find the sum,average
          and standard deviation of 5 numbers
*/

#include<stdio.h>

int sum(int,int,int,int,int,int*,int*,int*);


int main()
{
	int n1,n2,n3,n4,n5,s,a,sd;

	printf("Enter the numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	sum(n1,n2,n3,n4,n5,&s,&a,&sd);
	printf("The sum of 5 integers is %d\n",s); 
	
	printf("The average of 5 integers is %d\n",a);
	
	printf("The standard deviation of 5 integers is %d\n",sd);
	return 0;
}

int sum(int n1,int n2,int n3,int n4,int n5,int *add,int *average,int *sd)
{
	/*The sum of numbers is found by adding all the numbers*/
	*add        = n1+n2+n3+n4+n5;

	/*The average of numbers is found by adding all the numbers
	  and dividing it by the total numbers.*/
	*average    = *add/5;
	
	/*The standard is found by subtracting each number by the average,then 
	  take square of the numbers and finally add all the numbers and divide
          it by total number.*/ 
	n1 	   = n1 - *average;
	n2 	   = n2 - *average;
	n3         = n3 - *average;
	n4         = n4 - *average;
	n5         = n5 - *average;
	n1         = n1 * n1;
	n2         = n2 * n2;
	n3         = n3 * n3;
	n4         = n4 * n4;
	n5         = n5 * n5;
	*sd        = (n1 + n2 + n3 + n4 + n5)/5;
	
}



	
	

	
	
	
	
