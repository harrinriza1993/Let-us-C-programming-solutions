/*A 5-digit positive integer is entered through the keyboard,write a
  recursive and a non-recursive function to calculate sum of digits
  of the 5 digit number.

Apporach:
	1) The modulo operation should be performed and the number should
           be divided and it should continue till the number becomes zero.
        2) All the numbers in the modulo operator are added together.
*/

#include<stdio.h>

int rsum(int);
void nsum(int);

int main()
{
	int number,result;
	
	printf("Enter a five digit positive number\n");
	scanf("%d",&number);
	
	/*The number should be checked whether it is a 5 digit positive 
	  number or not.*/
	if (number >= 10000 && number <= 99999)
	{
		/*rsum is a recursive function used to perform addition of 5 digit
                  integer.*/
		result = rsum(number);
		printf("The sum of 5 digit positive integer using recursive function is %d\n",result);

		/*nsum is non recursive function used to perform addition of 5 digit
                  integer.*/
		nsum(number);
	}
	else
		printf("Invalid number\n");
	return 0;
}

int rsum(int number)
{
	if (number != 0)
		return (number%10+rsum(number/10));
	else
		return 0;
}

void nsum(int n)
{
	int sum=0;

	while(n>0)
	{
		sum = sum+n%10;
		n = n/10;
	}
	printf("The sum of 5 digit positive integer using non recursive function is %d\n",sum);
}

