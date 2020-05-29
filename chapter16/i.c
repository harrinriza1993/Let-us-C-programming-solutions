/* (i) Write a program that receives an integer (less than or equal to 
       nine digits in length) and prints out the number in words. For example
       if the input number is 12342, then output should be Twelve Thousand Three
       Hundred Forty two.
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char number[10];
	int i;

	printf("Enter the number\n");
	scanf("%s", number);
	
	void convert(number);
}

void convert(char *num)
{
	int len = strlen(num);

	if(len == 0)
		printf("It 
