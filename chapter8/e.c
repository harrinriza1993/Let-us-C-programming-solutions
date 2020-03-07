/*A positive integer is entered through the keyboard.Write a function to 
  obtain the prime factors of this number*/

/*Apporach:
	1)To get the factors of a given number,the number should be divided 
	  by 2 to less than the given number.
	2)This can be done by a modulo operator.
	3)If we get zero,then the divided numbers are considered as Prime factors.
*/

#include<stdio.h>

int factor(int);

void main()
{
	int number,fact;

	printf("Enter a number\n");
	scanf("%d",&number);
	fact = factor(number);
}
int factor(int number)
{
	int index;

	for ( index = 2;index < number; index++)
	{
		/*This condition is checked and the index numbers which satisfy
		  this condition are prime factors.*/
		if (number%index == 0)
			printf ("The factors of  %d is %d\n",number,index);
	}
	return (index);
}

	
