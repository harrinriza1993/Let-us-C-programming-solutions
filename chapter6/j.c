/*(j)Ramanujan number is the smallest number that can be expressed as
     sum of two cubes in two different ways.Write a program to print
     all such numbers up to a reasonable limit.
*/

/*Apporach:
	1)If the condition a^3 + b^3 = c^3 + d^3 is satisfied then the 
	  number is ramanujan number.
	2)A variable flag should be considered,if a^3 + b^3 = number then
	  flag is incremented,if it is incremented twice,that means if 
	  c^3 + d^3 = number,we can print the number as ramanujan number.
*/

#include<stdio.h>

void main()
{
	int number,flag=0;
	
	for (number = 1;number <= 5000;number ++)
	{ 
		/*flag is a temporary variable which is incremented and it 
		  is used in if condition to check for ramanujan number.
		*/ 
		flag = 0;
		
		/*The condition i^3<=the given number is to be checked,if it
		  becomes greater than the number definetely it can't be the 
		  exact number which is needed.
		*/ 
		for (int i = 1; i*i*i <= number;i ++)
		{
			for (int j = i + 1;i*i*i + j*j*j <= number;j ++)
			{
				/*The i,j pairs are calculated as below and they are checked*/
				if (i*i*i + j*j*j == number)

					/*flag is incremented each time when the condition 
					  becomes true.
					*/
					++flag;
			}
		}
		if (flag == 2)
			printf("%d is a ramanujan number\n",number);
	}
}

	

