/* (a) Define two functions xgets() and xputs() which work similar to the standard library
       functions gets() and puts().
       
Apporach :
	1) Two functions are defined in the main function to get the input and print the
	   output.
*/

#include<stdio.h>

/*Function to get the input. */
void xgets(char str[])
{
	printf("Enter the string\n");
	gets(str);
}

/*Function to get the output. */
void xputs(char str[])
{
	puts("The string is");
	puts(str);
}

/*Main function to call the two functions. */
void main()
{
	char str[10];
	
	xgets(str);
	xputs(str);
}
