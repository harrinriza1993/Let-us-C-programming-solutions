/* (i) Consider a currency system in which there are notes of seven denominations, namely,
       Re.1, Rs. 2, Rs.5, Rs.10, Rs.50, Rs.100. If a sum of Rs. N is entered through the
       Keyboard, write a program to compute the smallest number of notes that will combine
       to give Rs.N.
*/

#include<stdio.h>

void main()
{
	int amount, temp;
	
	printf("Enter the amount\n");
	scanf("%d", &amount);

	temp   = amount / 100;  
    	amount = amount - (temp * 100);  
  	printf("%d   x 100 = %d\n", temp, (temp * 100));
  	
  	temp = amount / 10;
  	amount = amount - (temp * 10);
  	printf("%d   x 10 = %d\n", temp, (temp * 10));
  	
  	temp = amount / 5;
  	amount = amount - (temp * 5);
  	printf("%d   x 5 = %d\n", temp, (temp * 5));
  	
  	temp = amount / 2;
  	amount = amount - (temp * 2);
  	printf("%d   x 2 = %d\n", temp, (temp * 2));
  	
  	temp = amount / 1;
  	amount = amount - (temp * 1);
  	printf("%d   x 1 = %d\n", temp, (temp * 1));
}
 
