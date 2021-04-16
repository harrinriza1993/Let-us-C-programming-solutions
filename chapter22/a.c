/*(a) Create an array of four function pointers. Each pointer should point to a different function.
      Each of these functions should receive two integers and return a float. Using a loop call
      each of these functions using the addresses present in the array.
*/

#include<stdio.h>

float add(int, int);
float sub(int, int);
float div(int, int);
float mul(int, int);

void main()
{
	/* Array of 4 pointer declaration. */
	float (*ptr[4]) (int, int);
	 
	ptr[1] = add;
	ptr[2] = sub;
	ptr[3] = div;
	ptr[4] = mul;
	
	/*Loop call for the functions. */
	for(int i = 1; i <= 4; i++)
	{
		float f = (*ptr[i])(500, 200);
		
		printf("The calculation of two numbers is %f\n", f);
	}
}

float add(int x, int y)
{
	return (x + y);
}

float sub(int x, int y)
{
	return (x - y);
}

float div(int x, int y)
{
	return (x / y);
}

float mul(int x, int y)
{
	return (x * y);
}
