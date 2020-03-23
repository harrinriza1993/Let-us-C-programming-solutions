/*Write a function to compute the distance between two points and 
  use it to develop another function that will compute the area of 
  the triangle whose vertices are A(x1,y1),B(x2,y2)andC(x3,y3).Use
  these functions to develop a function which returns a value 1 if
  the point (x,y) lies inside the triangle ABC, otherwise returns
  a value 0.

Apporach:
	1)The distance between two points is found using the formula
          distance = sqrt((x1-x2)^2 + (y1-y2)^2)
	2)Area of a triangle is found usinf the formula
          area = [x1(y2-y3) + x2(y3-y1) + x3(y1-y2)]/2
	3)A third point p(x,y) is considered and the area of triangle
          PAB,PAC,PCA should be found.If A1+A2+A3 = A ,then the point lies
          inside the triangle.
*/


#include<stdio.h>
#include<math.h>

void distance(int,int,int,int,int,int);
void area(int,int,int,int,int,int);
int triangle(int,int,int,int,int,int);

void main()
{
	int x1,y1,x2,y2,x3,y3,a,b,c,t;

	printf("Enter the value of x1,y1\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of x2,y2\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the value of x3,y3\n");
	scanf("%d%d",&x3,&y3);

	distance(x1,y1,x2,y2,x3,y3);
	area(x1,y1,x2,y2,x3,y3);
	t = triangle(x1,y1,x2,y2,x3,y3);

	printf("The point lies in a triangle %d\n",t);
}
void distance(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int a,b,c,ar,br,cr;
	
	/*The points a,b,c are found using the given formula below.*/
	ar = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	a = sqrt(ar);
	br = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
	b = sqrt(br);
	cr = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
	c = sqrt(cr);

	printf("The distance between the points are %d,%d,%d\n",a,b,c);
}
void area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int areaA;

	/*Area of triangle A can be found using this formula.*/
	areaA = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
	printf("Area of a triangle is %d\n",areaA);
	
}
int triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int areaA1,areaA2,areaA3,x,y;

	/*areaA is taken from the previous function.*/
	area(x1,y1,x2,y2,x3,y3);
	printf("Area of a triangle is %d\n",areaA);
	
	/*A new point (x,y) is taken to find new area of
          triangle.*/
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);

	/*From the new point three areas should be found*/
	areaA1 = (x*(y1-y2)+x1*(y2-y)+x2*(y-y1))/2;
	printf("Area of a triangle is %d\n",areaA1);
	areaA2 = (x*(y2-y3)+x2*(y3-y)+x3*(y-y2))/2;
	printf("Area of a triangle is %d\n",areaA2);
	areaA3 = (x*(y1-y3)+x1*(y3-y)+x3*(y-y1))/2;
	printf("Area of a triangle is %d\n",areaA3);

	/*And if they satisfy this condition then the point lies inside
          the triangle.*/s
	if (areaA1+areaA2+areaA3 == areaA1)
		return 1;
	else
		return 0;

}
	


	
	
	
