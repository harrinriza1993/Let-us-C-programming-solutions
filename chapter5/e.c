/*(e) Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself, 
the the number is called an Armstrong number.For example,153=(1*1*1)+(5*5*5)+(3*3*3)*/

/*Apporach:
	1) The user enter a number 
	2) The armstrong number is calculated using the formula 
	armstrong_number = (b2*b2*b2)+(b1*b1*b1)+(a1*a1*a1)
	3) Then the number is compared with the armstrong number 
	to check if both numbers are equal*/

	#include<stdio.h>
	void main()
	{

		int number = 1,a1,a2,b1,b2,armstrong_number;

		while(number<=500)
		{


		  /* The number should perform two operations modulus and division and 
		  both the values are stored in seperate variables and again this process
		  continues till the number become single digit and the numbers are stored 
		  in seperate variables*/ 

			a1 = number%10;
			a2 = number/10;
			b1 = a2%10;
			b2 = a2/10;

			armstrong_number = (b2*b2*b2)+(b1*b1*b1)+(a1*a1*a1);
		
			if (number==armstrong_number)
				printf("The armstrong number is %d",armstrong_number);
				number++;
		}

	}
		
		
