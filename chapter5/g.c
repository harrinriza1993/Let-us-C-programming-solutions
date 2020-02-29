/*(g) Write a program to enter numbers till the user wants.
   At the end it should display the count of positive,
   negative and zeros entered.*/

/*Apporach:
	1)The range of numbers are entered through the keyboard.
	2)If it is a positive number the positivenumbervariable 
	is incremented,similarly if it is a negative number or
	zero the variables negativenumber and zero is incremented.*/


	#include<stdio.h>
	void main()
	{
		int positivenumber=0,negativenumber=0,number,num,zero=0;

		/*The user asks the range of numbers to be entered
		  through keyboard*/

		printf("Enter the number of times\n");
		scanf("%d",&num);
	
		while(num)
		{
			printf("enter a number\n");
			scanf("%d",&number);
		
			if (number>0)
				++positivenumber;
			if (number<0)
				++negativenumber;
			if (number==0)
				++zero;
			--num;
		}
	
		/*The number of count of postivenumber,negativenumber
		  and zero is given*/

		printf("The number of positive number %d\n",positivenumber);
		printf("The number of negative number %d\n",negativenumber);
		printf("The number of zeros %d\n",zero);
	} 
