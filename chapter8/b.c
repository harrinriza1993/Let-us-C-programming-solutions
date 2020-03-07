/*(b)Write a function power(a,b),to calculate the value of a raised to b*/

/*Apporach:
	1) A variable power is intialized to 1 and it is multiplied 
           with the given number and it is continued at each time 
	   when the value of i increases.
	2) And finally the multiplied value is stored in power.
*/

#include<stdio.h>

int power(int,int);

void main()
{
	int base,exponent,p;

	printf("Enter the base\n");
	scanf("%d",&base);
	printf("Enter the exponent\n");
	scanf("%d",&exponent);
	p = power(base,exponent);
	printf("The power of a number is %d\n",p);
}

int power(int a, int b)
{
	int power = 1;
	
	/*index is a variable incremented at each step so that the 
	  power value is calculated and stored in power variable*/
	for (int index = 1; index <= b;index ++)
	{
		power = power * a;
	}
	return (power);
}
		
