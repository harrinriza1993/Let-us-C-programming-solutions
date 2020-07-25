/* (b) Create a structure that contain data of customers in a bank. The 
       data to be stored is Account number, Name, Balance in account. 
       Assume maximum of 200 customers in the bank.
       
       (1) Write a function to print the Account number and name of each
           customer with balance below rs.100.
       (2) If a customer requests for withdrawl or deposit, the form contains
           the fields:
           
           Accno, amount, code(1 for deposit, 0 for withdrawl)
           
           Write a function that prints a message "The balance is insufficient for 
           the specified withdrawl", if on withdrawl the balance falls below Rs.100

Apporach:
	1) A Bank customer detail structure is created.
	2) The account number and name of each customer whose balance below 100 is printed.
	3) If a customer needs withdrawl or deposit the bank should ask details of accn0, amount, 
	   code.
	4) If a customer has minimum balance then a message is printed.
*/

#include<stdio.h>

struct customer
{
	int accno;
	char name[10];	
	int balance;
}c[5];

void display(int accountnumber, char *name);
void message();

void main()
{
	int i;
	
	printf("Enter the bank customer details\n");
	printf("Enter the accountnumber, name, balance\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d %s %d", &c[i].accno, c[i].name, &c[i].balance);
	}
	
	/*Print the account number and name of customers whose balance is less than 100. */
	printf("\nThe account number and name of customers whose balance is below 100 are\n");
	for(i = 0; i < 5; i++)
	{
		if (c[i].balance < 100)
			display(c[i].accno, c[i].name);
	}
	
	int customernumber = 0;
	while(customernumber < 5)
	{
		int withdrawl, deposit, accountno, amount;
		
		printf("\nTo get the requirements of each customer in the need of deposit or withdrawl\n");
		
		/* As mentioned in the program if a customer need withdrawl 1 is given and if a customer need
		   deposit 0 is given. */
		printf("Is withdrawl is needed\n");
		scanf("%d", &withdrawl);
		printf("Is depoist is needed\n");
		scanf("%d", &deposit);
		
		if(withdrawl == 0 || deposit == 1)
		{
			printf("Enter the accno\n");
			scanf("%d", &accountno);
		}
			
		for(i = 0; i < 5; i++)
		{
			if((accountno == c[i].accno) && (deposit == 1))
			{
				printf("Enter the amount for deposit\n");
				scanf("%d", &amount);
				c[i].balance = amount + c[i].balance;
				printf("The amount of money after deposit is %d\n",c[i].balance);
			}
			if((accountno == c[i].accno) && (withdrawl == 0))
			{
				printf("Enter the amount for deposit\n");
				scanf("%d", &amount);
				
				if(c[i].balance > amount && c[i].balance > 100)
				{
					c[i].balance = c[i].balance - amount;
					printf("The amount after withdrawl of money is %d\n",c[i].balance);
				}
				else
					message();
			}
		}
			customernumber++;
	}
}

void display(int accountnumber, char *name)
{
	printf("%d %s\n", accountnumber, name);
}

void message()
{
	printf("The balance is insufficient for withdrawl\n\n");
}

	
	
           
