/*(h)Write a program to generate all pythagorean Triplets with side 
length less than or equal to 30.*/

/*Apporach:
	1)Three variables side1,side2,side3 are taken, whose value
	is less are less than 30.
	2)If the condition,the square of one side of a triangle is 
	equal to the sum of squares of other two sides then it is 
	a pythagorean Triplet*/

	#include<stdio.h>
	void main()
	{
		int side1,side2,side3,s1,s2,s3;

		for (side1=1;side1<=30;side1++)
		{
			for (side2=1;side2<=30;side3++)
			{
				for (side3=1;side3<=30;side3++)
				{
					/* The square of side1 is stored in variable s1*/

					s1 = side1*side1;

					/* The square of side2 is stored in variable  s2*/

					s2 = side2*side2;

					/*The square of side3 is stored in variable  s3*/

					s3 = side3*side3;

					/* If the condition below is satisfied then it is a
					pythagorean triplet*/

					if (s1 == s2 *s3 || s2 == s1*s3 || s3== s1*s2)
						printf("%d %d %d is a pythagorean triplet\n",side1,side2,side3);
				}
			}
		}
	}
