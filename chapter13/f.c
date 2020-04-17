/*(f) Write a program using pointers to find the smallest
      number in an array of 25 integers.
*/

#include<stdio.h>

void main()
{
	int smallNumber = 0, i;
	int array[25];

	/*An array of fixed size 25 is obtained from keyboard*/
	printf("Enter 25 numbers\n");
	for (i = 0; i < 25; i++)
		scanf("%d", &array[i]);
	
	int *p = array;

	smallNumber = *p;

	for (i = 1; i < 25; i++)
		if (smallNumber > *(p+i))
			smallNumber = *(p+i);

	printf("The smallest number is %d\n",smallNumber);
}

