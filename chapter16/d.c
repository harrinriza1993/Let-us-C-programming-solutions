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
	char str[10] = "Hello";
	
	revstr(&str[0]);
	printf("%s\n", str);
}

void revstr(char *p)
{
	int len, i;

	len = strlen(p);

	char q[len];

	for(i = 0; i >= 0; i--)
	{
		*p = q[i];
		p++;
	}
}

 
	
