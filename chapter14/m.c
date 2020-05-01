/*(m) The area of a triangle can be computed by the sine law when
      2 sides of the triangle and the angle between them are known.

		Area = (1/2)absin(angle)

       Given the following 6 pieces of land, write a program to 
       find their area and determine which is largest.
	plotno	a	b	angle
	1	137.4	80.9	0.78
	2	155.2	92.62	0.89
	3	149.3	97.93	1.35
	4	160.0	100.25	9.00
	5	155.6	68.95	1.25
	6	149.7	120.0	1.75

Apporach:
	1) The area of 6 pieces of land should be found using the formula
		Area = (1/2)absin(angle)
	2) The largest element is found by comparing the first element with 
 	   other elements.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	float a[6][4] = {
			/*Plot	a 	b    	angle */
			{1,	137.4,  80.9,   0.78}, 
			{2, 	155.2,	92.62,  0.89},
			{3, 	149.3,	97.93,	1.35},
			{4,	160.0, 100.25,	9.00},
			{5, 	155.6,  68.95,	1.25},
			{6, 	149.7, 120.0,	1.75}
		      };

	int size = 6, i, j, largestPloat;
	float area[6], temp, largestArea;

	printf("The area for 6 pieces of land are \n");

	/* Area calculation */
	for(i = 0; i < size; i++)
	{
		area[i] =  ( a[i][1] * a[i][2] * sin(a[i][3]))/2 ; 
		printf("Plot %d : Area : %f\n", i, area[i]);
	}

	/*  */
	largestPloat = i;
	largestArea = area[i];

	for(i = 1; i < size; i++)
	{
		if (largestArea < area[i])
		{
			largestPloat = i;
			largestArea = area[i];
		}	
	}

	printf("The largest area of Plot[%d] is %f\n", largestPloat, largestArea);
}	


			
			


