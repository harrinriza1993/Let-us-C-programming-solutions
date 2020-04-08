/*(b) 4.To obtain bigger of two numbers

   Apporach:
	1)Check the number,which is greater between two numbers
   	2)Conditonal operator can also be used to check the
     	  greatest of two numbers.
*/

#include<stdio.h>
#define GREATER(a,b)	if (a > b)\
				printf("%d is greater\n",a);\
			else\
				printf("%d is greater\n",b);

#define BIGGER(a,b)	(a > b) ? printf("%d is greater\n",a) : printf("%d is greater\n",b); 

void main()
{
	#if defGREATER
		int a,b;

		printf("Enter the value of a and b\n");
		scanf("%d%d",&a,&b);
	
		GREATER(a,b);
	#else
		int a,b;

		printf("Enter the value of a and b\n");
		scanf("%d%d",&a,&b);
	
		BIGGER(a,b);
	#endif
}
