/*(j)Ramanujan number is the smallest number that can be expressed as
     sum of two cubes in two different ways.Write a program to print
     all such numbers up to a reasonable limit.

	Ramanujan number is a^3 + b^3 = c^3 + d^3

Apporach:
    1. Run a loop upto the number you want to check.
        for(num = 1; num <= ramNum; num++)
    2. If num^3 <= ramNum then the number is not a ramanjuam number.
        for(a=1; a^3<=num; a++)
    3. Then, check the combiantion of two numbers.
    4. Check if this combination of two numbers is equal to ramNum.
*/

#include<stdio.h>

void main()
{
	int number,flag=0;
	
	for (number=1; number <= 5000; number++)
	{ 
		flag = 0;
		
		/* The condition i^3<=the given number is to be checked,if it
		   becomes greater than the number definetely it can't be the 
		   exact number which is needed. */ 
		for (int i = 1; i*i*i <= number;i ++)
		{
			for (int j = i+1; i*i*i + j*j*j <= number; j++)
			{
				if (i*i*i + j*j*j == number)

					/*flag is incremented each time when the condition 
					  becomes true.*/
					++flag;
			}
		}
		if (flag == 2)
			printf("%d is a ramanujan number\n",number);
	}
}

	

