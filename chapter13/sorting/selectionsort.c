/*Selection sort is an in-place sorting algorithm. In the 
input array there is a sorted portion and an unsorted portion. 
The algorithm repeatedly finds the smallest element in the unsorted 
portion of the array and puts it at the end of the sorted portion of
the array.

Apporach:
	1) The first element should be compared with all the elements
	   and from that the smallest value is found.
	2) Then the second element is compared with all the elements,
           similarly all the elements are compared.
	3) Finally sorted elements are obtained.
*/
#include <stdio.h>

void selectionsort(int arr[], int size)
{
	int i, temp = 0, j;
	
	for ( i = 0; i < size; i++)
	{
		for (j = i + 1; j <= size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}
 
