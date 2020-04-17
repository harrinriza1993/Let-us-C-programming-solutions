/*(a) Write a program that interchanges the odd and even
      elements of an array.

Apporach:
	1) An array of fixed size is taken.
	2) The odd element and even elements are interchanged by
           a temporary variable.
*/

#include<stdio.h>

void printArray(int *p, int size)
{
	for(int index = 0; index < size; index++)
		printf("%d ", *p++);

	printf("\n");
}

void main()
{
	int index, temp, sizeOfArray;

	printf("Enter size of array\n");
	scanf("%d", &sizeOfArray);

	int array[sizeOfArray];

	/* Fill the array */
	for(index = 0; index < sizeOfArray; index++)
		array[index] = index;

	printf("Before interchanging the odd and even elements: ");
	printArray(array, sizeOfArray);
	
	/*Temporary variable is used for interchanging and i is incremented
          twice to consider the other two elements in a sequence.*/
	for(index = 0; index < sizeOfArray; index = index + 2)
	{
		if(index+1 == sizeOfArray)
			break;

		temp = array[index];
		array[index] = array[index + 1];
		array[index + 1] = temp;
	}

	printf("After interchanging the odd and even elements : ");
	printArray(array, sizeOfArray);
}
		
