/* (c) An automobile company has serial number for engine parts starting 
       from AA0 to FF9. The other characterstics of a parts are year of
       manufacture, material and quantity manufactured.
       
       1) Create a structure to store information corresponding to a part.
       2) Write a program to retrieve information on parts with serial
          numbers between BB1 and cc6.
*/

#include<stdio.h>

/* Structure named company is created with required information. */
struct company
{
	char serial[4];
	int year;
	char material[10];
	int quantity;
}Bens[5] = {
"AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};


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
	
