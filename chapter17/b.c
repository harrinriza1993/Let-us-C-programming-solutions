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
*/

#include<stdio.h>

// Private variable
#define NUM_OF_CUSTOMER 5 //200

struct customer
{
	int accNo;
	char name[25];
	int balance;
}customerDetails[NUM_OF_CUSTOMER] = {
	1, "Rihanna",      23,
	2, "Beyonce",     101,
	3, "Jennifer",   3000,
	4, "Lawrence",   7000,
	5, "Will Smith",   34
};

// Private function declaration
static void lowBalance();
static void requestForDepositOrWithdrawl(int accountNumber,int depositOrWithdrawl,int amount);

void main()
{
	int accountNumber, depositOrWithdrawl, amount;

	lowBalance();

	printf("\nTo get the requirements of each customer in the need of deposit or withdrawl\n");
	printf("Enter the account number to deposit or withdrawl\n");
	scanf("%d", &accountNumber);
	printf("Please enter 1 for deposit, 0 for withdrawl\n");
	scanf("%d", &depositOrWithdrawl);

	if(depositOrWithdrawl)
	{
		printf("Enter the amount for deposit\n");		
	}
	else
	{
		printf("Enter the amount for withdrawl\n");
	}
	scanf("%d", &amount);

	requestForDepositOrWithdrawl(accountNumber, depositOrWithdrawl, amount);
}

/*Print the account number and name of customers whose balance is less than 100. */
static void lowBalance()
{
	printf("\nThe account number and name of customers whose balance is below 100 are\n\n");
	for(int i = 0; i < NUM_OF_CUSTOMER; i++)
	{
		if (customerDetails[i].balance < 100)
		{
			printf("Name: %s\n", customerDetails[i].name);
			printf("Account Number: %d\n\n", customerDetails[i].accNo);
		}
	}
}

// Fuction to deposir or withdrawl
static void requestForDepositOrWithdrawl(int accountNumber,int depositOrWithdrawl,int amount)
{
	int i = 0;
	for(; i < NUM_OF_CUSTOMER; i++)
	{
		if(customerDetails[i].accNo == accountNumber)
			break;
	}

	if(depositOrWithdrawl)
	{
		customerDetails[i].balance += amount;
		printf("The amount of money after deposit is %d\n",customerDetails[i].balance);
	}
	else
	{
	        if((customerDetails[i].balance > 100) && (customerDetails[i].balance-amount > 0))
		{
			customerDetails[i].balance -= amount;
			printf("The amount after withdrawl of money is %d\n",customerDetails[i].balance);
		}
		else
		{
			printf("The balance is insufficient for withdrawl\n\n");
		}
	}
}

	
	
           
