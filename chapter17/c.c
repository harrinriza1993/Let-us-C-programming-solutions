/* (c) An automobile company has serial number for engine parts starting 
       from AA0 to FF9. The other characterstics of a parts are year of
       manufacture, material and quantity manufactured.
       
       1) Create a structure to store information corresponding to a part.
       2) Write a program to retrieve information on parts with serial
          numbers between BB1 and cc6.
          
 Apporach :
 	1) Create a structure company with required data for the engine parts 
 	   from AA0 to FF9.
 	2) The infromation of the parts from AA0 to FF9 is printed.
*/

#include<stdio.h>

/* Structure named company is created with required information. */
struct company
	{
	int year;
	char material[10];
	int quantity;
	}AA[10], BB[10], CC[10], DD[10], EE[10], FF[10];

void information(struct company, struct company );


void main()
{
	
	int i;
	
	printf("Enter the year of manufacture, material, quantity\n");
	for(i = 0; i <= 9; i++)
	{
		scanf("%d %s %d", &AA[i].year, &AA[i].material, &AA[i].quantity);
		scanf("%d %s %d", &BB[i].year, &BB[i].material, &BB[i].quantity);
		scanf("%d %s %d", &CC[i].year, &CC[i].material, &CC[i].quantity);
		scanf("%d %s %d", &DD[i].year, &DD[i].material, &DD[i].quantity);
		scanf("%d %s %d", &EE[i].year, &EE[i].material, &EE[i].quantity);
		scanf("%d %s %d", &FF[i].year, &FF[i].material, &FF[i].quantity);
	}
	
	for(i = 1; i <= 6; i++)
	{
		information(BB[i], CC[i]);
	}
}

/*Function to retrive information of the parts from BB1 to CC6. */
void information(struct company b, struct company c)
{
	printf("%d %s %d\n", b.year, b.material, b.quantity);
	printf("%d %s %d\n", c.year, c.material, c.quantity);
}
	
