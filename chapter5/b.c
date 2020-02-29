/* (b) Write a program to find the factorial value 
       of any number entered through the keyboard.
*/


/*Apporach:
	Ask the user to enter value, compare the index 
	value and the number what user have entered and 
	the condition exsits till it becomes false
*/

#include<stdio.h>
void main()
{
	int number,fact=1, index=1;

	printf("Enter the number\n");
	scanf("%d",&number);

	while (index<=number)
	{ 
		/*a temporary variable fact is initialized to 1 and it is 
		mulitiplied with the index value and the value is stored in 
		fact and again this process continues when the index value increases*/
		fact = fact*index;
		index++;
	}

	printf("The factorial of a number is %d\n",fact);
}
