/* (e) A five-digit number is entered through the keyboard. Write a program to obtain the reversed number 
       and to determine whether the original and reversed numbers are equal or not.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int number, num, n, i = 4, reverse_number = 0;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	num = number;
	
	if(num >= 10000)
	{
		while(num)
		{
			n = num % 10;
			reverse_number = reverse_number + (n * pow(10, i));
			i--;
			num = num / 10;
		}
		printf("The reversed number is %d\n", reverse_number);
		
		if(number == reverse_number)
			printf("The orginal number and reverse number are equal\n");
		else
			printf("The orginal number and reverse number are not equal\n");
	}
	else
		printf("invalid number\n");
}
