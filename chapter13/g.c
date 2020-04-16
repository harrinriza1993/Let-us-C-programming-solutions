/*(g) Write a program which performs the following tasks:

	-- Intialize an integer array of 10 elements in main()
	-- Pass the entire array to a function modify()
	-- In modify() multiply each element of array by 3
	-- Return the control to main() and print the new array
           elements in main()

Apporach:
	1) Create a array in main function,and pass the 
  	   array elements to other function.
	2) In the next function multiply the number by 3
	3) Get the new array
*/

#include<stdio.h>

void modify(int[]);

void main()
{
	int elements[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("The elements in the array are\n");

	modify(elements);
	for (int i = 0;i <= 9; i++)
		printf("%d ",elements[i]);
	
	
}

void modify(int elements[])
{
	
	/*The array values are obtained in modify function*/
	for (int i = 0;i <= 9;i++)
	{
		printf("%d ",elements[i]);
	}
	printf("\n");
	
	/*The new elements of the array are obtained by multiplying it by 3
 	  and values are printed in main function.*/s
	printf("The new elements in the array are\n");
	for (int i = 0; i <= 9;i++)
	{
		elements [i] = 3 * elements[i];
		
	}
}

	
	
		 
