/*(b) Write down the macro definitions of the following:
  
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

#define IS_SMALL_CASE_LETTER(x)  ((x >= 97 && x <= 122) ? 1 : 0)

#define IS_UPPER_CASE_LETTER(x)  ((x >= 65 && x <= 90) ? 1 : 0)

#define IS_ALPHABET(x) 	 	 ((IS_SMALL_CASE_LETTER(x) || IS_UPPER_CASE_LETTER(x)) ? 1 : 0)

#define BIGGEST_OF_TWO(a,b)	 (a > b) ? printf("%d is a bigger number\n", a) :\
					   printf("%d is a bigger number\n", b); 

void main()
{
	char character;
	int number1, number2;
	
	printf("Enter any character\n");
	scanf("%c", &character);

	printf("Enter two numbers\n");
	scanf("%d %d", &number1, &number2);
	
	if IS_SMALL_CASE_LETTER(character)
		printf("Entered character ['%c'] is a samll case\n", character);
	else
		printf("Entered character ['%c'] is not a samll case\n", character);

	if IS_UPPER_CASE_LETTER(character)
		printf("Entered character ['%c'] is a uppercase\n", character);
	else
		printf("Entered character ['%c'] is not a uppercase\n", character);

	if IS_ALPHABET(character)
		printf("Entered character ['%c'] is a alphabet\n", character);
	else
		printf("Entered character ['%c'] is not a alphabet\n", character);

	BIGGEST_OF_TWO(number1, number2)
}

