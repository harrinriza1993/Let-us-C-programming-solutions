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
	int array[4] = {1,2,3,4};
	
	/*reversearray is a empty array with size4.*/
	int reversearray[4],i;
	
	printf("The reverse order of a array in another array is\n reversearray[4]="); 
	for (i = 0; i <= 3;i++)
	{
		/*The last element of array will be the first element in reverse array
		  and so on.*/
		reversearray[i] = array[3 - i];
		printf("%d ",reversearray[i]);
	}
}
		

