/*(d) Twenty-five numbers are entered from keyboard in to an 
      array.Write a program to find out how many of them are
      positive,how many are negative,how many are even and 
      how many odd.

Apporach:
	1) The array of number should be checked for 2 
 	   conditions.
	2) If it greater than zero it is a positive number
 	   or else it is a negative number.
	3) If the number is divisible by 2 ,then it is a odd 
           number or else it is a even number.
*/

#include<stdio.h>

void main()
{
	int array[25];
	int i, odd = 0,even = 0,positive = 0,negative = 0;

	
	/*An array of 25 numbers is obtained*/
	for (i = 0;i <= 24;i++)
	{
		
		printf("Enter the numbers\n");
		scanf("%d",&array[i]);
		
		/*The array numbers should be checked if it is
                  greater than zero or less than zer0*/
		if (array[i] > 0)
			positive++;
		else
			negative++;

		/*If the number in the array is divisible by 2 then it is a
                  even number,otherwise it is a odd number*/
		if (array[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("The number of positive numbers is %d\n",positive);
	printf("The number of negative numbers is %d\n",negative);
	printf("The number of even numbers is %d\n",even);
	printf("The number of odd numbers is %d\n",odd);
}
		
