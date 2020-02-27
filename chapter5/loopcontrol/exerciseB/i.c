/*(i)Write a program to find the range of a set of numbers entered through the keyboard.
   Range is the difference between the smallest and biggest number in the list.*/

/*Apporach:
	1)The user gets the range of numbers from the keyboard.
	2)From the range of numbers the smallestnumber and largest
	number is obtained 
	3)The range is found by finding the difference between these
	two numbers.*/



	#include<stdio.h>
		void main()
		{
			int number,num,largenumber,smallnumber,range;

			printf("Enter the number of times you have to enter\n");
			scanf("%d",&number);

			while(number)
			{
				printf("Enter the number\n");
				scanf("%d",&num);

				/*The entered number is compared with another variable 
				largenumber and the value is stored in this new variable*/

				if (num>largenumber)

				/*Each time the value is compared and the largest number 
				stored in variable largenumber*/

					largenumber = num;

				/*Here the smallest number is stored in variable 
				  smallnumber*/

				if(num<smallnumber)
					smallnumber = num;

				--number;
			}

			range = largenumber - smallnumber;
			printf("The range of numbers is %d",range);
		}

		

