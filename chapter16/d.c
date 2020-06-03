/*(d) Write a program to reverse the strings stored in an array of pointers to 
      strings.

Apporach:
	1) The two dimensional character array is reversed by reversing 
           the columns in a row
*/

#include<stdio.h>
#include<string.h>
void revstr(char *p);

void main()
{
	char str[4][10] = {
			    "Hello",
			    "Harrin",
			    "Lal bosco",
			    "12345678"
			  };

	/*Print the given array. */
	printf("The given array is \n");
	for(int i = 0; i < 4; i++)
	{
		printf("%s\n", &str[i]);
	}
	
	/*Print the array in reverse order. */
	printf("\nThe given array in reverse order is\n");
	for(int i = 0; i < 4; i++)
	{
		revstr(&str[i]);
		printf("%s\n", &str[i]);
	}
}

void revstr(char *p)
{
	int len = 0, i = 0;
	char temp;

	len = strlen(p) - 1;

	while(i < len)
	{
		temp = p[i];
		p[i] = p[len];
		p[len] = temp;

		i++;
		len--;
	}
}
		

