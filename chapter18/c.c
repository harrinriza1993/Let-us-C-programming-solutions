/* (c) Define a function getfloat(), which would receive a numeric string from the
       keyboard, convert it to a float value and return the float to the 
       calling function.
       
Apporach :
	1) SScanf function is used to convert a numeric string in to float number.
*/


#include<stdio.h>

/*Function to convert a numeric string to a float value. */
int getint()
{
	char str[20];
	float float_number;
	
	/*Only numeric sring should get from the user. */
	printf("Enter the numeric string to convert in to a float value\n");
	gets(str);
	
	sscanf(str, "%f", &float_number);
	printf("The float number for the string is %f\n", float_number);
	
	return float_number;
}

int main()
{
	float a;
	
	a = getint();
	
	printf("You entered %d\n", a);
	
	return 0;
}

