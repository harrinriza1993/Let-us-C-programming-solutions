/*(a) Write a program that interchanges the odd and even
      elements of an array.

Apporach:
	1)An array of fixed size is taken
	2)The odd element and even elements are interchanged by
          a temporary variable
*/

#include<stdio.h>

void main()
{
	int array[6] = {1,2,3,4,5,6};
	int i,temp=0;
	
	printf("The numbers after interchanging the odd and even elements\n");

	/*Temporary is used for interchanging and i is incremented
          twice to consider the other two elements in a sequence.*/
	for (i = 0;i <= 5;i = i + 2)
	{
		temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;

		printf("%d %d ",array[i],array[i+1]);
	}
}
		
