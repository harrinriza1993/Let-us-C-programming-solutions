/*(g) Write a program to enter numbers till the user wants.
   At the end it should display the count of positive,
   negative and zeros entered.
*/

/*Apporach:
	1)The range of numbers are entered through the keyboard.
	2)If it is a positive number then  positive variable 
	is incremented,similarly if it is a negative number or
	zero the variables negative and zero is incremented.
*/

#include<stdio.h>

void main()
{
	int positive=0, negative=0, zero=0, number, totalNum;

	/*The user asks the range of numbers to be entered through keyboard*/
	printf("How many numbers, you would like to enter\n");
	scanf("%d",&totalNum);

	while(totalNum)
	{
		printf("Enter a number\n");
		scanf("%d",&number);
	
		if (number > 0)
			++positive;
		else if (number < 0)
			++negative;
		else if (number == 0)
			++zero;

		--totalNum;
	}

	/*The number of count of postive,negative and zero is given*/
	printf("\nThe number of positive number: %d\n",positive);
	printf("The number of negative number: %d\n",negative);
	printf("The number of zeros: %d\n",zero);
} 
