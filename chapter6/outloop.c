#include<stdio.h>
void main()
{
	char another;
	int num;
	do
	{
		printf("enter a number");
		scanf("%d",&num);
		printf("square of %d is %d\n",num,num * num);
		printf("want to enter another number y/n");
		
		scanf("%c",&another);
		}while(another == 'y');
}
