/*(d)Write a program to print the multiplication table of the 
number entered by the user.The table should displayed in the
following form 29 * 1 = 29
	       29 * 2 = 58*/

/*Apporach:
	1)The user should get a number and the number should be 
	multiplied by a range of number*/
	
	#include<stdio.h>
	void main()
	{
		int number,multiplication_table;

		printf("Enter a number\n");
		scanf("%d",&number);

		/*The range is a variable which uses range of numbers to 
		be multiplied with a given number*/

		for(int range = 1;range<=10;range++)
		{
			multiplication_table = number*range;
			printf("%dx%d = %d\n",number,range,multiplication_table);
		}
	}
