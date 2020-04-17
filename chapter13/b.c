/*(b) Write a program to copy the contents of one array into 
      another in the reverse oder.

Apporach:
	1) One array with fixed size is taken.
	2) Another empty array with fixed size is taken.
	3) The last element of array is taken as first element
 	    of a empty array and thus it goes on.
*/

#include<stdio.h>

void main()
{
	int i, sizeOfArray;

	printf("Enter size of array\n");
	scanf("%d", &sizeOfArray);

	int array[sizeOfArray], reversearray[sizeOfArray];

	for(i = 0; i < sizeOfArray; i++)
		array[i] = i;
	
	printf("Index: Orignal Array: Reversed array\n"); 
	for (i = 0; i < sizeOfArray; i++)
	{
		/*The last element of array will be the first element in reverse array
		  and so on.*/
		reversearray[i] = array[sizeOfArray-i-1];
		printf("%d	: 	%d   :	%d\n", i, array[i], reversearray[i]);
	}
}
		

