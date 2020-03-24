/* Given three variables x,y,z
   Write a function to circularly shift their values to right.
   In other words 
	if x = 5,y = 8, z = 10, after circular shift
   	   y = 5,z = 8,x = 10.
   Call the function with variables a,b,c to circularly shift values.

Apporach:
     1) A temporary variable is used and the values are shifted to 
        the temporary variable and simultanously all values should 
        be shifted in circular shift.
*/ 

#include<stdio.h>

void circular(int*,int*,int*);

void main()
{
	int a=10,b=20,c=30;

	circular(&a,&b,&c);

	printf("b value = %d,c value = %d,a value = %d\n",b,c,a);
}

void circular(int *a,int *b,int *c)
{
	int temp;

	/*The value of a is given to b and b value is given to temp
          the value of c is given to a and temp value is given to c 
          and thus we will get a circular shift of values.*/
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
	

