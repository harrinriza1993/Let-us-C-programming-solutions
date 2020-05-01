/*How will you initialize a three-dimensional array thread[3][2][3].
  How will you refer the first and last element in this array.

Apporach:
	1. A 3-D array can be thought of as an array of arrays.
	2. The syntax is int arrayname[][][]; , Where [] states that it is
	   3 dimensional array.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	/*The outer array has 3 elements, each of which is a 2-D
          array of two 1-D arrays,each of which contain 3 integers*/ 
	int thread[3][2][3] = {
				{
					{1, 2, 3},
					{4, 5, 6}
				},

				{
					{7, 8, 9},
					{10, 11, 12}
				},

				{
					{13, 14, 15},
					{16, 17, 18}
				}

			      };

	printf("The first element of the array is \n");
	printf("\t***thread : %d\n\tthread[0][0][0] : %d\n\t*(*(*thread+0)+0)+0): %d\n", \
			***thread, thread[0][0][0], *(*(*(thread+0)+0)+0) );

	printf("\nThe last element of the array is \n");
	printf("\tthread[0][0][0] : %d\n\t*(*(*(thread+2)+1)+2)): %d\n", \
			thread[2][1][2], *(*(*(thread+2)+1)+2) );
}
