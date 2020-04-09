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

#define ARITHMETIC_MEAN(a,b) (a+b)/2

#define ABSOLUTE_VALUE(x)  if (x > 0)\
		  		printf("The absolute value of a number is %d\n\n",x);\
		           else if (x < 0)\
		        		x = -1 * x;\
			   	printf("The absolute value of a number is %d\n\n",x);
			    

#define UPPERCASE_TO_LOWERCASE(i) for (int j = 97;j <= 122;j++)\
	                          	if (i == j-32) \
						printf("The lowercase of a uppercase alphabet is %c\n\n",j);

#define BIGGEST(a,b,c)  if(a > b && a > c)\
			 	printf("%d is greater\n",a);\
		        else if(b > a && b > c)\
				printf("%d is greater\n",b);\
		    	else\
				printf("%d is greater\n",c);

void main()
{
	int number1,number2,arithmeticmean,number,n1,n2,n3;
	char alphabet;
	
	printf("Arithmetic mean of 2 numbers\n");
	printf("Enter the two numbers\n");
	scanf("%d%d",&number1,&number2);
	
	arithmeticmean = ARITHMETIC_MEAN(number1,number2);
	printf("The arithmetic mean of two numbers is %d\n\n",arithmeticmean);

	printf("Absolute value of a number\n");
	printf("Enter the number\n");
	scanf("%d",&number);
	
	ABSOLUTE_VALUE(number);

	printf("Conversion of uppercase to lowercase alphabets\n");
	printf("Enter the uppercase alphabet\n");
	scanf("%c",&alphabet);

	UPPERCASE_TO_LOWERCASE(alphabet);

	printf("The Biggest of three numbers\n");
	printf("Enter the numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	BIGGEST(n1,n2,n3);

	
}

	
	



  
