/*(b)Write down the macro definitions of the following:
  
   1. To test whether a character is a small case letter or not
   2. To test whether a case is an upper case letter or not.
   3. To test whether a character is an alphabet or not.
      Make use of the macros you defined in 1 and 2 above.
   4. To obtain bigger of two numbers.
   
Apporach:
	1) The ascii value of small letters are considered
	2) From the ascii value it is tested whether a character
	   is small or not.
	3) From the ascii value of upper case letters, it is tested
           whether a character is uppercase or not.
	4) Using the above two conditions it is known that a character
           is a alphabet or not.
	5) Using conditional operator the biggest of 2 numbers is found.
*/

#include<stdio.h>

#define SMALL_CASE_LETTER(x) 	if (x >= 97 && x<= 122)\
		               		printf("%c is a small letter\n",x);\
				else\
					printf("%c is not a small letter\n",x);

#define UPPER_CASE_LETTER(x)  if (x >= 65 && x <= 90)\
	       			printf("%c is a uppercase alphabet\n",x);\
			     else\
				printf("%c is not a uppercase alphabet\n",x);

#define ALPHABET(x) 	if (x >= 65 && x <= 90 )\
				printf("%c is a alphabet\n",x);\
		        else if (x >= 97 && x <= 122)\
				printf("%c is a alphabet\n",x);\
		        else\
				printf("%c is not a alphabet",x);

#define BIGGEST(a,b)	(a > b) ? printf("%d is greater\n",a) : printf("%d is greater\n",b); 



void main()
{
	char character;
	int number1,number2;
	
	printf("Enter any character\n");
	scanf("%c",&character);

	printf("Enter the numbers\n");
	scanf("%d%d",&number1,&number2);
	
	SMALL_CASE_LETTER(character);
	UPPER_CASE_LETTER(character);
	ALPHABET(character)
	BIGGEST(number1,number2);
}
