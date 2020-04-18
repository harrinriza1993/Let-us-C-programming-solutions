/*(c) Twenty-five numbers are entered from the keyboard in to
      an array. The number to be searched is entered through the
      keyboard by the user. Write a program to find if the number
      to be searched is present in the array and if it is present,
      display the number of times it appears in the array.

Apporach:
	1)An array of size 25 is taken and 25 numbers are entered
	  through the keyboard.
	2)The number to be searched is checked with all elements of array
	3)If the number is present and the number of times the searched number
	  is there in array is printed
*/

#include<stdio.h>

void main()
{
	int array[25], i, searchedNumber, count = 0;
	
	printf("Enter an element to be searched\n");
	scanf("%d",&searchedNumber);

	int sizeOfArray = sizeof(array)/sizeof(int);

	printf("Enter 25 numbers\n");

	/*An array of 25 numbers is obtained*/
	for (i = 0; i < sizeOfArray; i++)
	{	
		scanf("%d", &array[i]);

		/*It is compared with the searched number, if is present then it
                  should count the number of times.*/
		if (searchedNumber == array[i])
			count++;
	}

	printf("The number of times the number present in the array is %d\n",count);
}

		
		
	
