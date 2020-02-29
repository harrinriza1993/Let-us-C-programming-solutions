/*(h)Write a program to receive an integer and 
     find it's octal equivalent*/


/*Apporach:
	1)Get a integer from the user 
	2)Divide the number by 8 till it
	gets zero as remainder
	3)The remainders of the number is 
	obtained by using a modulus operator
	4)The remainders are taken in reverse
 	direction which is the octal equivalent*/



	#include<stdio.h>
	void main()
	{
		int number,octal,temp=1,remainder;

		printf("Enter the number");
		scanf("%d",&number);
		while(number!=0)
		{
			
			remainder = number%8;

			/*The octal variable used to store the value of remainder 
			multiplied with temp*/

			octal = octal +(remainder*temp);

			/*temp is a temporary variable which is intialized to 1,and at each 
			time of the loop it is multiplied by 10 and the value is again 
			stored in temp*/

			temp = temp*10;

			integer = number/8;
		}

		printf("The octal number is %d",octal);
	}
