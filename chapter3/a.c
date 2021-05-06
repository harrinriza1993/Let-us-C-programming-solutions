/* (a) If cost price and selling price of an item are input through the keyboard, write a program
       to determine whether the seller has made profit or loss. Also determine how much profit he
       made or loss he incurred.
*/

#include<stdio.h>

void main()
{
	int cost_price, selling_price, profit, loss;
	
	printf("Enter the cost price and selling price\n");
	scanf("%d%d", &cost_price, &selling_price);
	
	profit = selling_price - cost_price;
	loss   = cost_price - selling_price;
	
	if(profit > loss )
	{	
		printf("The profit made by the seller is %d\n", profit);  
	}
	else
	{	
		printf("The loss made by the seller is %d\n", loss);
	}
}
