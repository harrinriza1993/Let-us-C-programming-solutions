/*[C] Write a menu driven program which has following options:
	1.Factorial of a number
	2.Prime or not
	3.Odd or even
	4.Exit
    Once a menu item is selected the appropriate action should be taken
    and once this action is finished,the menu should reappear.Unless the
    user selects the 'Exit' option the program should continue to run.

Apporach:
	In this program infinite while loop and switch statement are used
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int menu,index=1,fact=1,number,divisor=2;

	/*while statement is used for an infinite loop*/
	while(1)
	{
		printf("\n\nEnter your choice.\n\n");
		printf("1. Find factorial number.\n\n");
		printf("2. Check Prime number or not.\n\n");
		printf("3. Check even or odd number.\n\n");
		printf("4. Exit the program.\n\n");
		scanf ("%d",&menu);

		switch (menu)
		{
			case 1:
				printf("Enter the number to find the factorial\n");
				scanf("%d",&number);

				while (index<=number)
				{
					fact = fact*index;
					index++;
				}
				printf("The factorial [%d] of the number is %d\n",number, fact);
				break;
			case 2:
				printf("Enter the number to find a prime number or not\n");
				scanf("%d",&number);

				divisor = 2;
				while (divisor<number)
				{
					if (number%divisor==0)
					{
						printf("%d is not a prime number\n",number);
						break;
					}
					++divisor;
				}
				if (number == divisor)
					printf("%d is a prime number\n", number);
				break;
			case 3:
				printf("Enter the number to find odd or even\n");
				scanf("%d",&number);

				if (number%2==0)
					printf("%d is a even number\n", number);
				else 
					printf("%d is a odd number\n", number);
				break;
			case 4:
				printf("Exit\n");

				/*exit statement terminates the program*/
				exit(1);
		}
	}
}


