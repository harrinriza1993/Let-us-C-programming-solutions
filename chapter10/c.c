/*Write a recursive function to obtain the first 25 numbers of 
  a Fibonacci sequence.In a Fibonacci sequence the sum of two
  sucessive terms gives the third term.Following are the first
  few terms of the Fibonacci sequence:
  1 1 2 3 5 8 13 21 34 55 89

Apporach
	  The fibonacci number series is obtained by adding 
          first two numbers and swapping it in another variable.
*/ 

#include<stdio.h>

void fibo(int,int,int);

void main()
{
	int first = 0, second = 1, terms = 25;

	printf("Fibonacci sequence of %d term as bellow,\n", terms);
	/* Print the first terms */
	printf("%d %d ",first, second); 

	fibo(first, second, terms);

	printf("\n");
}

void fibo(int first, int second, int terms)
{
	int fib_number = 0;

	if (terms > 0)
	{
		/*fib_number is get by adding first two variables.*/
		fib_number = first + second;
		printf("%d ",fib_number);

		/*swapping the values of first to second and second to first */
		first = second;
		second = fib_number;

		terms--;

		fibo(first, second, terms);
	}
}

	
	
