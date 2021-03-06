/*Implement the Insertion Sort algorithm shown in the following figure
  on a set of 25 numbers.

	Iteration1	Iteration2	Iteration3	Iteration4	Result
           44 <--|        33		   33 <---|	   22 <---|	0 [11]
	   33 ---|        44 <--| 	   44     |	   33  	  |	1 [22] 
	   55             55 ---|	   55     |	   44     |	2 [33]
	   22             22		   22-----|	   55     |	3 [44]
           11         	  11		   11		   11 -----	4 [55]
Apporach:
	1) Compare the second element with all the first element
        2) Then compare the third element with second and first
	   element
	3) The nth element should be compared with all other elements.
	4) Then it is sorted in ascending order.
*/

#include<stdio.h>

void main()
{
	int num[25], i, temp = 0, j, size = 25, swap;
		
	printf("Enter 25 numbers for sorting\n");
	for (i = 0; i < size; i++)
		scanf("%d", &num[i]);
	
	printf("The elements after sorting\n");
	
	for(i = 1; i < size; i++)
	{
		temp = i;
		for(j = i-1; j >= 0; j--, temp--)
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
		printf("%d\n",num[i]);
} 
