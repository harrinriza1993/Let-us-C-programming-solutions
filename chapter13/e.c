/*(e) If a array arr contains n elements, then write a program to
      check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.
*/

#include<stdio.h>

void main()
{
	int i, n;

	printf("Enter size of array\n");
	scanf("%d", &n);

	int arr[n];

	/* Fill the array */
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	/*The size of n is fixed by defining it*/
	for (i = 0; i < n; i++)
	{
		if (arr[i] == arr[n-(i+1)] )
			printf("arr[%d] = %d : arr[%d] = %d\n", i, arr[i], n-(i+1), arr[n-(i+1)]);
	}
}
