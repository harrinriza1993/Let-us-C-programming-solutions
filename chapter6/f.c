/*When interest compounds q times per year at an annual rate of r%
for n years,the principal p compounds to an amount a as per the 
following formula

		a = p(1+r/q)^nq

Write a Program to read 10 sets of p,r,n & q and calculate the 
corresponding as.

Apporach:
	1)To calculate the amount a, the values of p,q,r,n,q 
	are get through the user.
	2)To read 10 sets, a count variable is intialized from 1 
	to 10,which is used to calculate amount for 10 set of values
Note:
	Run the program as <gcc -o interest_comp f.c -lm>
	-lm : Library file needs for pow()
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int p,q,r,a,n;

	/*count variable is used to count values from 1 to 10*/
	for (int count = 1;count <= 10;count++)
	{
		printf("Enter the values of principal,time,rate and year\n");
		scanf("%d %d %d %d",&p,&q,&r,&n);
		
		/*a is variable used to calculate using the given formula */
		a = p*pow(1+(r/q),n*q);

		printf("The amount is %d\n",a);
	}
}

