/*(f) Write a program using pointers to find the smallest
      number in an array of 25 integers.

Apporach:
	1)Get all 25 values in the array.
	2)Compare the first value with all elements
          in the array.
	3)From that the smallest number is found.
*/

#include<stdio.h>

void smallest_number(int*);

void main()
{
	int smallnumber=0;
	
	
	/*Since we use pointers the address is considered*/
	smallest_number(&smallnumber);
	printf("The smallest number is %d\n",smallnumber);
}

void smallest_number(int *smallnumber)
{
	int num[25],i,j;
	
	/*An array of fixed size 25 is obtained from keyboard*/
	for (i = 0;i <= 24;i++)
	{
		printf("Enter the numbers\n");
		scanf("%d",&num[i]);
	}

	/*The first element should be compared with all
          the elements in the row.*/
	for (j =1 ; j <= 24;j++)
	{

		/*If first element is smallest num[0] will
                  remain same,else the other element will 
 		  become num[0].*/
		if (num[0] < num[j])
		{
			num[0]  = num[0];
			*smallnumber = num[0];
		}
		else
		{
			num[0] = num[j];
			*smallnumber = num[j];
		}
	}
}
	

	
	

