/* (g) In the file 'CUSTOMER.DAT' there are 100 records with the following structure :

	struct customer
	{
		int accno; char name[30]; float balance;
	};
	
	In another file 'TRANSACTIONS.DAT' there are several records with the following 
	structure :
	
	struct trans
	{
		int accno; char trans_type; float amount;
	}
	
	The element trans_type contains D/W indicating deposit or withdrawl of amount. Write a program
	to update 'CUSTOMER.DAT' file, i.e., if the trans_type is 'D' then update the balance of 
	'CUSTOMER.DAT' by adding amount to balance for the corresponding accno. Similarly if trans_type
	is 'W' then subtract the amount from balance. However, while subtracting the amount ensure the
	amount should not get overdrawn, i.e, atleast 100 Rs.should remain in the account.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
struct customer_details
{
	int accno;
	char name[30];
	float balance;
}customer[MAX];

struct transaction_details
{
	int accno;
	char trans_type;
	float amount;
}transaction[MAX];

void main()
{
	FILE *fp, *fs;
	
	fp = fopen("logs/CUSTOMER.DAT", "r");
	fs = fopen("logs/TRANSACTIONS.DAT", "r"); 
	if(fp == NULL || fs == NULL)
	{
		printf("Could not able to open CUSTOMER.DAT and TRANSACTIONS.DAT file\n");
		exit(0);
	}
	
	printf("The customer Details in a file is\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fp, "%d %s %f", &customer[i].accno, customer[i].name, &customer[i].balance) != EOF)
			printf("%d %s %f\n", customer[i].accno, customer[i].name, customer[i].balance);
	}
	
	printf("\nThe transcation details in a trans file is\n");
	for(int i = 0; i < MAX; i++)
	{
		if(fscanf(fs, "%d %c %f", &transaction[i].accno, &transaction[i].trans_type, &transaction[i].amount) != EOF)
			printf("%d %c %f\n", transaction[i].accno, transaction[i].trans_type, transaction[i].amount);
	}
	
	printf("\nThe customer details after transcation\n");
	for(int i = 0; i < MAX; i++)
	{
		for(int j = 0; j < MAX; j++)
		{
			if(customer[i].accno == transaction[j].accno)
			{
				if((transaction[j].trans_type == 'W') &&((customer[i].balance - transaction[j].amount) > 100))
				{
					customer[i].balance = customer[i].balance - transaction[j].amount; 
				}
				else if(transaction[j].trans_type == 'D') 
				{
					customer[i].balance = customer[i].balance + transaction[j].amount;
				}
			}
		}
		printf("%d %s %f\n", customer[i].accno, customer[i].name, customer[i].balance);
	}
	fclose(fp);
	
	fp = fopen("logs/CUSTOMER.DAT", "w");

	for(int i = 0; i < MAX; i++)
	{
		fprintf(fp,"%d %s %f\n", customer[i].accno, customer[i].name, customer[i].balance);
	}
	
	fclose(fp);
	fclose(fs);
}

