/* (f) If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest
       of the three.
*/

#include<stdio.h>

void main()
{
	int age1, age2, age3;
	
	printf("Enter the age of Ram, Shyam and Ajay\n");
	scanf("%d%d%d", &age1, &age2, &age3);
	
	if(age1 < age2)
	{
		if(age1 < age3)
		{
			printf("Ram is youngest\n");
		}
	}
	else
	{	
		if(age2 < age3)
			printf("Shyam is youngest\n");
		else
			printf("Ajay is youngest\n");
	}		
}
