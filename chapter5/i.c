/*(i) Write a program to find the range of a set of numbers entered through the keyboard.
      Range is the difference between the smallest and biggest number in the list.
*/

/*Apporach:
	1)The user gets the range of numbers from the keyboard.
	2)From the range of numbers the smallestnumber and largest
	number is obtained 
	3)The range is found by finding the difference between these
	two numbers.
*/

#include<stdio.h>

void main()
{
	int totalNumber,num,largeNumber=0,smallNumber=0,range=0;

	printf("How many numbers, you would like to enter: ");
	scanf("%d",&totalNumber);

	printf("\n");

	while(totalNumber)
	{
		printf("Enter the number: ");
		scanf("%d",&num);

		/*The entered number is compared with another variable 
		largeNumber and the value is stored in this new variable*/
		if (num > largeNumber)
			largeNumber = num;

		/*Here the smallest number is stored in variable smallnumber*/
		if(num < smallNumber)
			smallNumber = num;

		--totalNumber;
	}

	range = largeNumber - smallNumber;
	printf("\nThe range of numbers is %d\n",range);
}

		

