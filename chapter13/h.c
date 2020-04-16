/*Implement the Insertion Sort algorithm shown in fig13.3 
  on a set of 25 numbers.

	Iteration1	Iteration2	Iteration3	Iteration4	Result
           44 <--|        33		   33 <-- |	   22 <---|	0 [11]
	   33--           44 		   44  |	   33  |	1 [22] 
	   55             55<--|	   55  |	   44  |	2 [33]
	   22             22		   22--		   55  |	3 [44]
           11         	  11		   11		   11---	4 [55]
Apporach:
	1) Compare the first element with all the elements in an array
        2) If the first element is small then it remain same.
	3) Otherwise it is replaced by the smallest element.
	4) By this way the sorted elements are obtained.


*/

#include<stdio.h>

void main()
{
	int num[5],i,temp = 0,j;
		
	
	for (i = 0;i <= 4;i++)
	{
		printf("Enter the numbers for sorting\n");
		scanf("%d",&num[i]);
	}
	
	for ( i = 0;i <= 4;i++)
	{
		for (j = 1; j <= 4;j++)
		{
			
			/*The array element is checked with the next elements*/
			if (num[i] < num[j])
			{
				num[i] = num[i];
			}
			else
			{
				/*Temporary variable temp is used for replacing*/
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		printf("\n The sorted numbers are \n %d\n ",num[i]);
	}
}
