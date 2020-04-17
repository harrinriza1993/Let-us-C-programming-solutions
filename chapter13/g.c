/*(g) Write a program which performs the following tasks:

	-- Intialize an integer array of 10 elements in main()
	-- Pass the entire array to a function modify()
	-- In modify() multiply each element of array by 3
	-- Return the control to main() and print the new array
           elements in main()
*/

#include<stdio.h>

void modify(int[], int);

void main()
{
	/* Intialize an integer array of 10 elements in main() */
	int elements[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("The elements in the array are\n");
	for (int i = 0; i < 10; i++)
		printf("%d ",elements[i]);

	/* Pass the entire array to a function modify() */
	modify(elements, 10);

	printf("\nThe new elements in the array are\n");
	for (int i = 0;i <= 9; i++)
		printf("%d ",elements[i]);

	printf("\n");
}

void modify(int elements[], int size)
{
	/* multiply each element of array by 3 */	
	for (int i = 0; i < size; i++)
		elements [i] = 3 * elements[i];
}

	
	
		 
