/* (b) Define a function getint(), which would receive a numeric string from the
       keyboard, convert it to an integer number and return the integer to the 
       calling function. A sample usage of getint() is shown below.
       
       	#include<stdio.h>
       	
       	int main()
       	{
       		int a;
       		
       		a = getint();
       		printf("You entered %d\n", a);
       		
       		return 0;
       	}
Apporach :
	1) SScanf function is used to convert a numeric string in to integer number.
*/

#include<stdio.h>

/*Function to convert a numeric string to integer number. */
int getint()
{
	char str[20];
	int integer_number;
	
	/*Only numeric sring should get from the user. */
	printf("Enter the numeric string to convert in to integer number\n");
	gets(str);
	
	sscanf(str, "%d", &integer_number);
	printf("The integer number for the string is %d\n", integer_number);
	
	return integer_number;
}

int main()
{
	int a;
	
	a = getint();
	
	printf("You entered %d\n", a);
	
	return 0;
}

