/*(j) Given an array p[5], write a function to shift it circularly left
      by two positions. Thus, if p[0] = 15, p[1] = 30, p[2] = 28, p[3] = 
      19 and p[4] = 61 then after the shift p[0] = 28, p[1] = 19, p[2] =
      61, p[3] = 15 and p[4] = 30. Call this function for a (4 X 5) matrix 
      and get it's rows left shifted.

Apporach:
	1) Since it is 4 x 5 matrix 20 elements is present.
	2) The elements should be shifted in rowwise. The first
           row should not interfere with the second row.
*/

#include<stdio.h>

void display(int a[5],int,int);

void main()
{
	int a[5];
	int row = 4, col = 5;

	display(a,row,col); 
}

void display(int a[5],int row, int col)
{
	int i, j, k, n = 5, temp1, temp2;

	k = 0;
	while (k < row) 
	{
		printf("Enter the %d row\n",k);
		{
			for(j = 0; j < col; j++)
			{
				scanf("%d",&a[j]);
			}
		}
		temp1 = a[0];
		temp2 = a[1];
		printf("The numbers after sorting\n");
		
		for(j = 0; j < n-2; j++)
		{
			a[j] = a[j + 2];
			printf("%d\n",a[j]);
		}
		a[n - 1] = temp1;
		a[n - 2] = temp2;
		printf("%d\n%d\n",a[n - 1],a[n - 2]);
		k++;
	}
}	
