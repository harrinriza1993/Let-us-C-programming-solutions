/*Write a function to compute the distance between two points and 
  use it to develop another function that will compute the area of 
  the triangle whose vertices are A(x1,y1),B(x2,y2)and C(x3,y3).
  Use these functions to develop a function which returns a value 1 if
  the point (x,y) lies inside the triangle ABC, otherwise returns
  a value 0.

Apporach:
	1)The distance between two points is found using the formula
          distance = sqrt((x1-x2)^2 + (y1-y2)^2)

	2)Area of Triangle with 3 Sides using Heron’s Formula
          area = sqrt(s * (s-d1)* (s-d2) * (s-d3))
	  s = (d1 + d2 + d3)/2

	3)The area of the triangle whose vertices are A(x1,y1),B(x2,y2)and C(x3,y3).
          A third point P(x,y) is considered and the area of triangle

          PAB [(x,y) (x1,y1) (x2,y2)] ---> A1
	  PAC [(x,y) (x1,y1) (x3,y3)] ---> A2
	  PCA [(x,y) (x3,y3) (x1,y1)] ---> A3

	  ABC [(x1,y1) (x2,y2) (x3,y3)] ---> A

If A1+A2+A3 == A ,then the point lies inside the triangle.
*/


#include<stdio.h>
#include<math.h>

float distance(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);
float triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);

void main()
{
	int x1,y1,x2,y2,x3,y3,x,y;	

	printf("Enter the value of A(x1,y1): ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of B(x2,y2): ");
	scanf("%d%d",&x2,&y2);
	printf("Enter the value of C(x3,y3): ");
	scanf("%d%d",&x3,&y3);
	printf("Enter the point P(x,y) to check if lies inside the triangle: ");
	scanf("%d%d",&x,&y);

	if (triangle(x1, y1, x2, y2, x3, y3, x, y))
		printf("The Point(%d,%d) lies inside the triangle\n", x,y);
	else
		printf("The Point(%d,%d) lies outside the triangle\n", x,y);

}

float distance(int x1, int y1, int x2, int y2)
{
	// calculate distance between two points
	return sqrt( pow((x1 - x2), 2) + pow((y1 - y2), 2) );
}

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float d1, d2, d3, s, area;

	d1 = distance(x1, y1, x2, y2);
	d2 = distance(x2, y2, x3, y3);
	d3 = distance(x3, y3, x1,y1);

	s = (d1 + d2 + d3)/2;

	/*Area of triangle A can be found using this formula.*/
	area = sqrt(s*(s - d1)*(s - d2)*(s - d3));

	return round(area);
}

float triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
	float A, A1, A2, A3;

	/* Area of ABC */
	A = area(x1, y1, x2, y2, x3, y3);

	/* Area of PAB, PBC, PCA */
	A1 = area(x, y, x1, y1, x2, y2);
	A2 = area(x, y, x2, y2, x3, y3);
	A3 = area(x, y, x3, y3, x1, y1);

	printf("\nArea of A  : %f\n", A);
	printf("Area of A1 : %f\n", A1);
	printf("Area of A2 : %f\n", A2);
	printf("Area of A3 : %f\n\n", A2);

	/*And if they satisfy this condition then the point lies inside
          the triangle.*/
	if (A1+A2+A3 == A)
		return 1;
	else
		return 0;
}
	


	
	
	
