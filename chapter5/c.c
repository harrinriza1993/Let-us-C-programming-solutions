/* (c) Two numbers are entered through the keyboard.
       Write a program to find the value of one number 
       raised to the power of another.
*/

/*Approach:
	method 1:
		A temprary variable temp is intialized to 1 and 
		it is compared with the exponent what the user 
		have entered
	method 2:
		We can do this one with pow(number, exponent)
*/

#include<stdio.h>

void main()
{
	int number,exponent, temp=1, power=0;

	printf("Enter the number\n");
	scanf("%d%d",&number);
	printf("Enter the exponent\n");
	scanf("%d%d",&exponent);

	while(temp <= exonent)
	{
		 /*Another temporary variable power is intialized to 1 
		   and it is multiplied with the number what the user
		   have entered and it is stored in power and this
	 	   process continues untill the loop satisfies the condition*/
		power = power*number;
		temp++;
	}

	/* ANOTHER METHOD TO DO */
	//power = pow(number, exponent)

	printf("The power of a number is %d",power);
}
			

