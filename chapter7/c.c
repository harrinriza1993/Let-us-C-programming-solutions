/*[C] Write a menu driven program which has following options:
	1.Factorial of a number
	2.Prime or not
	3.Odd or even
	4.Exit
    Once a menu item is selected the appropriate action should be taken
    and once this action is finished,the menu should reappear.Unless the
    user selects the 'Exit' option the program should continue to run.
*/

/*Apporach:
	1)In this program infinite while loop and switch statement are used
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int menu,index=1,fact=1,number,divisor=2;

	printf("Enter the number\n");
	scanf("%d",& number);

	/*while statement is used for an infinite loop*/
	while(number!=0)
	{
		printf("Enter the option needed from menu\n");
		scanf ("%d",&menu);
		switch (menu)
		{
			case 1:
				printf("Factorial of a number\n");
			while (index<=number)
			{
				fact = fact*index;
				index++;
			}
			printf("The factorial of the number is %d\n",fact);
			break;
			case 2:
				printf("Prime or Not\n");

			while (divisor<number)
			{
				if (number%divisor==0)
					printf("%d is not a prime number\n",number);
				break;
			}
			if (number == divisor)
				printf("%d is a prime number\n",number);
			break;
		case 3:
			printf("Odd or Even\n");
			if (number%2==0)
				printf("%d is a even number\n",&number);
			else 
				printf("%d is a odd number\n",&number);
			break;
		case 4:
			printf("Exit\n");

			/*exit statement terminates the program*/
			exit(1);
		}
	}
}


