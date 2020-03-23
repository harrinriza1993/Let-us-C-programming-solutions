/*If the length of the sides of a triangle are denoted by a,b
  and c then area of triangle is given by 
		 area = sqrt(s(s-a)(s-b)(s-c))
  where s = (a+b+c)/2.Write a function to calculate the area of
  the triangle.

Apporach:
     1)The triangle points should should always satisfies a condition
       a+b > c && a+c >b && b+c > ,otherwise it cannot be a valid triangle
       point.*/

#include<stdio.h>
#include<math.h>

void area(float,float,float,float*);

void main()
{
	float a,b,c,ar;

	printf("Enter the value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);

	/*If this considition is satisfied then only the area of triagle
          can be found.*/
	if (a+b > c && a+c >b && b+c > a)
	{
		area(a,b,c,&ar);
		printf("The area of a triangle is %f\n",ar);
	}
		
	else
		printf("Entered number is not a valid numbers\n");
}
void area(float a,float b,float c,float *area)
{
	float s,ar;

	s       = (a+b+c)/2;

	/*The area of the triangle can be found using this formula.*/
	ar      = s*(s-a)*(s-b)*(s-c);
        *area   = sqrt(ar);
}
	
	  
