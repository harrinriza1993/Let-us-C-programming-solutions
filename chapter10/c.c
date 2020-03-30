/*Write a recursive function to obtain the first 25 numbers of 
  a Fibonacci sequence.In a Fibonacci sequence the sum of two
  sucessive terms gives the third term.Following are the first
  few terms of the Fibonacci sequence:
  1 1 2 3 5 8 13 21 34 55 89

Apporach
	1)The fibonacci number series is obtained by adding 
          first two numbers and swapping it in another variable.
*/ 

#include<stdio.h>

void fibo(int,int,int,int);

void main()
{
	int number=1,n1=0,n2=1,n3;

	printf("%d\n",n2);

	fibo(number,n1,n2,n3);
}
void fibo(int number,int n1,int n2,int n3)
{
	
	if (number <= 25)
	{
		/*n3 is get by adding first two variables.*/
		n3 = n1+n2;
		printf(" %d\n",n3);

		/*swapping the values of n2 and n3 to n1 and n2 the 
                  fibonacci series is obtained.*/
		n1 = n2;
		n2 = n3;
		number++;
		fibo(number,n1,n2,n3);
	}
}


	
	
