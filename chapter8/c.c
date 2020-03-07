/*(c)Write a general-purpose function to convert any given year into its
     Roman equivalent.Use these Roman equivalents for decimal numbers
     1-I,5-V,10-X,50-L,100-C,500-D,1000-M.

Apporach:
	1)The given year should be checked with the given decimals in the
	  program.
	2)If the given year is greater than the given decimals,it should 
	  be divided by the number till the quotient becomes zero.
	3)The number should be subtracted from the decimal and this continues
	  till we get zero.
*/

#include<stdio.h>

void roman(int);

void main()
{
	int year,r;
	
	printf("Enter the year\n");
	scanf("%d",&year);
	roman(year);
}
void roman(int year)
{
	/*The year is divided by the decimals and the quotient value
	  is considered to print the equivalent roman number.*/
	for (;year/1000 != 0;year = year-1000)
		printf("M");
	for (;year/500 != 0;year = year-500)
		printf("D");
	for (;year/100 != 0;year = year-100)
		printf("C");
	for (;year/50 != 0;year = year-50)
		printf("L");
	for (;year/10 != 0;year = year-10)
		printf("X");
	for (;year/5 != 0;year = year-5)
		printf("V");
	for (;year/1 != 0;year = year-1)
		printf("I");

	printf("\n");
}
	
	
	
	
	



