/*Insertion sort is a simple sorting algorithm that builds the 
  final sorted array one item at a time.
  For example let us consider the numbers
  2, 11, 13, 5, 6

  Let us loop for i = 1 (second element of the array) to 4 (last element of the array)

  i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12
  11, 12, 13, 5, 6

  i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13
  11, 12, 13, 5, 6

  i = 3. 5 will move to the beginning and all other elements from 11 to 13 will 
  move one position ahead of their current position.
  5, 11, 12, 13, 6

  i = 4. 6 will move to position after 5, and elements from 11 to 13 will
  move one position ahead of their current position.
  5, 6, 11, 12, 13 
*/

void insertionsort(int num[], int size)
{
	 int i, temp = 0, j, swap ;
		
	printf("Enter the numbers for sorting\n");

	for (i = 0; i < size; i++)
	{
		
		scanf("%d", &num[i]);
	}
	
	printf("The elements after sorting\n");
	
	for ( i = 1; i < size; i++)
	{
		temp = i;
		for (j = i -1; j >= 0; j--, temp--)
		{
			if (num[j] > num[temp])
			{
				swap = num[j];
				num[j] = num[temp];
				num[temp] = swap;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%d\n",num[i]);
	}
} 
