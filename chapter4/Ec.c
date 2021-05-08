/* (c) Write a program to find the greatest of three numbers entered through the keyboard.
       Use conditional operators.
*/

#include<stdio.h>

void main()
{
	int num1, num2, num3;
	
	printf("Enter the three numbers\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	((num1 > num2) ? ((num1 > num3) ? printf("%d is greatest\n", num1) : printf("%d is greatest\n", num3)) : ((num2 > num3) ? printf("%d is greatest\n", num2) : printf("%d is greatest", num3)));
}
