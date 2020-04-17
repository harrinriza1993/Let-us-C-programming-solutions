/*(d)Write down macro definitions for the following:

   1.To find arithmetic mean of two numbers.
   2.To find absolute value of a number.
   3.To convert an upper case alphabet to lowercase.
   4.To obtain the biggest of three numbers.

Apporach:
	1) Add two numbers and divide the numbers by 2 
           to get arithmetic mean of two numbers.
	2) Absolute value of a number means whether it is a 
           positive number or negative number all numbers are
           converted into positive number.
	3) Compare the ascii value of uppercase and lowercase
           letters and print the alphabet accordingly.
	4) To obtain the biggest of three numbers.
*/

#include<stdio.h>

#define ARITHMETIC_MEAN(a, b) (a+b)/2

#define ABSOLUTE_VALUE(x)    (x > 0) ? x : (x*-1);

#define UPPERCASE_TO_LOWERCASE(c) (c >= 65 && c <= 90) ? c+32 : 0

#define BIGGEST(a, b, c)  (a > b && a > c) ? a : (b > a && b > c) ? b : c

void main()
{
	int number1, number2, abs_value, number, n1, n2, n3, bigNum;
	float arithmeticmean;
	char alphabet, conv_alphabet;

	/* 1.To find arithmetic mean of two numbers. */
	printf("\nEnter two numbers to find an arithmetic mean\n");
	scanf("%d%d", &number1, &number2);

	arithmeticmean = ARITHMETIC_MEAN(number1, number2);
	printf("The arithmetic mean of two numbers is %f\n\n",arithmeticmean);

	/* 2.To find absolute value of a number. */
	printf("\nEnter number to find a absolute value\n");
	scanf("%d", &number);
	
	abs_value = ABSOLUTE_VALUE(number);
	printf("Absolute value of a %d is %d\n",number, abs_value);

	/* 3.To convert an upper case alphabet to lowercase. */
	printf("\nEnter the uppercase alphabet: ");
	/* The %c character reads the blank or newline after the first scanf
	   use " %c" with a leading space to skip over optional white space
	   before reading the character. */
	scanf(" %c", &alphabet);

	conv_alphabet = UPPERCASE_TO_LOWERCASE(alphabet);
	if (conv_alphabet)
		printf("Conversion of uppercase ['%c'] to lowercase is ['%c']\n" ,alphabet, conv_alphabet);
	else
		printf("Plaese enter a valid Upper case character\n");
	
	/* 4.To obtain the biggest of three numbers. */
	printf("\nEnter three numbers\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	bigNum = BIGGEST(n1, n2, n3);
	printf("The Biggest of three numbers [%d %d %d] is %d\n", n1, n2, n3, bigNum);	
}

