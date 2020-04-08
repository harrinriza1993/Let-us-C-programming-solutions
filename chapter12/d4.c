/*(b) 4. To obtain the biggest of three numbers.
  
  Apporach:
	1)First compare a with b and c.
	2)Then compare b with c and a
        3)And finally compare c with a and b.
	4)From this the biggest of 3 numbers is found.
*/
#include<stdio.h>
#define BIG(a,b,c)  if(a > b && a > c)\
			printf("%d is greater\n",a);\
		    else if(b > a && b > c)\
			printf("%d is greater\n",b);\
		    else\
			printf("%d is greater\n",c);
void main()
{
	int number1,number2,number3;

	printf("Enter the numbers\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	
	BIG(number1,number2,number3);
}

