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
	
	if((selling_price - cost_price) > (cost_price - selling_price))
	{
		printf("The lesser has made profit\n");
		profit = selling_price - cost_price;
		
		printf("The profit made by the seller is %d\n", profit);  
	}
	else
	{
		printf("The seller has made loss\n");
		loss = cost_price - selling_price;
		printf("The loss made by the seller is %d\n", loss);
	}
}
