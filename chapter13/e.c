/*(e) If a array arr contains n elements,then write a program to
      check if arr[0] = arr[n-1],arr[1] = arr[n-2] and so on.

Apporach:
	1) arr[0] = arr[n-1],arr[1] = arr[n-2],this condition is
           checked in the program whether it is true or false
*/

#include<stdio.h>

#define n 20

void main()
{
	int i,arr[n];

	/*The size of n is fixed by defining it*/
	for (i = 0;i <= n-1;i++)
	{
		if (arr[i] == arr[n-i])
			printf("It is true\n");
	}
}
