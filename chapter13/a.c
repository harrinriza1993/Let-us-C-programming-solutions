/*(a) Write a program that interchanges the odd and even
      elements of an array.

Apporach:
	1)Two arrays are taken ,one has odd numbers
          and other array has even numbers
	2)A temporaryarray name is considered and the values
          are interchanged.
*/

#include<stdio.h>

int main()
{
	/*The odd numbers are taken in odd[4] arrayname*/ 
	int odd[4] = {1,3,5,7};

	/*The even numbers are taken in even[4] arrayname*/ 
	int even[4] = {2,4,6,8};

	/*number[4] is used as a temporary variable used for 
          interchanging.*/
	int number[4],i;
	
	/*The odd values are interchanged to even arrayname*/
	printf("The interchanged odd number is\n even[4]=");
	for (i = 0;i <= 3;i++)
	{
		number[i] = even[i];
		even[i] = odd[i];
		printf("%d ",even[i]);
	}
	printf("\n");
	printf("The interchanged even number is\n odd[4]=");

	/*The even values are interchanged in to odd arrayname*/
	for (i = 0;i <= 3;i++)
	{
		odd[i] = number[i];
		printf("%d ",odd[i]);
	}
	printf("\n");
}
