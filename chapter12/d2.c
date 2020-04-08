/*(b) 2.To find absolute value of a number

   Apporach:
	1)Absolute value of a number means whether it is a 
         positive number or negative number all numbers are
         converted into positive number.
*/
#include<stdio.h>
#define ABSOLUTE(x)  if (x > 0)\
		  	printf("The absolute value of a number is %d\n",x);\
		     else if (x < 0)\
			x = -1 * x;\
			printf("The absolute value of a number is %d\n",x);
void main()
{
	int number;
	
	printf("Enter the number\n");
	scanf("%d",&number);
	
	ABSOLUTE(number);
}			

