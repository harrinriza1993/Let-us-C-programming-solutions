/*A 5-digit positive integer is entered through the keyboard,write a
  recursive and a non-recursive function to calculate sum of digits
  of the 5 digit number.
*/

#include<stdio.h>

int recursive_sum(int);
void non_recursive_sum(int);

int main()
{
	int number,result;
	
	printf("Enter a five digit positive number\n");
	scanf("%d",&number);
	
	/* The number should be checked whether it is a 5 digit positive number or not. */
	if (number >= 10000 && number <= 99999)
	{
		/* rsum is a recursive function used to perform addition of 5 digit integer. */
		result = recursive_sum(number);
		printf("The sum of 5 digit positive integer using recursive function is %d\n",result);

		/* nsum is non recursive function used to perform addition of 5 digit integer. */
		non_recursive_sum(number);
	}
	else
		printf("Invalid number\n");

	return 0;
}

/* recursive function used */
int recursive_sum(int number)
{
	if (number != 0)
		return (number%10 + recursive_sum(number/10));
	else
		return 0;
}

/* Non recursive function used */
void non_recursive_sum(int number)
{
	int sum=0;

	while(number > 0)
	{
		sum = sum + number%10;
		number /= 10;
	}

	printf("The sum of 5 digit positive integer using non recursive function is %d\n",sum);
}

