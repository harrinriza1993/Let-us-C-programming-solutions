/* (f) Create a structure called library to hold accession number, title of the book,
       authorname, price of the book, and flag indicating whether book is issued or not.
       Write a menu-driven program that implements the working of a library. The menu options
       should be
       
       1. Add book information
       2. Display book information
       3. List all books of given author
       4. List the title of specified book
       5. List the count of books in the library
       6. List the books in the order of accession number
       7. Exit

Apporach:
	1) A menu driven is presented with the help of switch functio.
	2) Each operation is performed in each cases.
*/
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 #include<string.h>
 
 struct library
 {
 	int accessionnumber;
 	char title[30];
 	char author[30];
 	int price;
 	bool flag;
 }lib[5] = { 5, "HarryPotter", "JKRowling", 789, 1,
 	     4, "heidi", "jonnah", 560, 0,
 	     3, "count of monte christo", "rudyardcliping", 890, 1,
 	     1, "Oliver Twist", "sancho", 678, 1,
 	     2, "clara", "jonnah", 765, 0
          };

/* Function for quicksort for arranging number based on accession number. */ 
int compareaccession_number(const void *pa, const void *pb)
{
	struct library *p1 = pa;
	struct library *p2 = pb;
	return p1->accessionnumber- p2->accessionnumber;
}
 
 void main()
 {
 
 	int choice;
 	
 	/*Print the library information. */
 	printf("The structure of a library is\n");
 	for(int i = 0; i < 5; i++)
 	{
 		printf("%d %s %s %d %d\n", lib[i].accessionnumber, lib[i].author, lib[i].title, lib[i].price, lib[i].flag);
 	}
 	printf("\n");				 
 	
 	while(1)
 	{
 		printf("Enter the choice\n\n");
 		printf("1. Add book information\n");
 		printf("2. Display book information\n");
 		printf("3. List all books of given author\n");
 		printf("4. List the title of specified book\n");
 		printf("5. List the count of books in the library\n");
 		printf("6. List the books in the order of accession number\n");
 		printf("7. Exit \n\n");
 		
 		scanf("%d", &choice);
 		
 		switch(choice)
 		{
 			case 1:
 				printf("Add book information\n");
 				break;
 				
 			case 2:
 				printf("Display book information based on accession number\n");
 				
 				int number;
 				
 				printf("Enter the required accesion number\n");
 				scanf("%d", &number);
 				
 				/*Print the book information based on accession number. */
 				printf("The book information withrespect to accession number is\n");
 				for(int i = 0; i < 5; i++)
 				{
 					if(lib[i].accessionnumber == number)
 					{
 						printf("%d %s %s %d %d\n", lib[i].accessionnumber, lib[i].title, lib[i].author, lib[i].price, lib[i].flag);
 					}
 				}
 				printf("\n");
 				break;
 				
 			case 3:
 				printf("List all books of given author\n");
 				
 				char authorname[30];
 				
 				printf("Enter the author name to be searched\n");
 				scanf(" %s", authorname);
 				
 				/*Print thr nmaes of book with respect to a specified author. */
 				printf("The list of all the books with respect to the given author is\n");
 				for(int i = 0; i < 5; i++)
 				{
 					if(strcmp(authorname,lib[i].author) == 0)
 						printf(" %s\n", lib[i].title);
 				}
 				printf("\n");
 				break;
 				
 			case 4:
 				printf("List the title of specified book\n");
 				
 				char booktitle[30];
 				
 				printf("Enter the title of book whose information is needed\n");
 				scanf(" %s", booktitle);
 				
 				/*Print the book information regarding to the title of book. */
 				printf("The book information with respect to the title of the book is\n");
 				for(int i = 0; i < 5; i++)
 				{
 					if(strcmp(lib[i].title, booktitle) == 0)
 					{
 						printf("%d %s %s %d %d\n", lib[i].accessionnumber, lib[i].title, lib[i].author, lib[i].price, lib[i].flag);
 					}
 				}
 				printf("\n");
 				break;
 				
 			case 5:
 			
 				printf("List the count of books in library\n");
 				
 				int count = 0;
 				
 				for(int i = 0; i < 5; i++)
 				{
 					if(strlen(lib[i].title) != 0 )
 					{
 						count++;
 					}
 				}
 				
 				/*Print the total counts in the library. */
 				printf("The total number of books in library is %d\n", count);
 				printf("\n");
 				break;
 				
 			case 6:
 				printf("List the order in accession number\n");
 				
 				printf("The order of books before arranging\n");
 				for(int i = 0; i < 5; i++)
 				{
 					printf("%d %s %s %d %d\n", lib[i].accessionnumber, lib[i].author, lib[i].title, lib[i].price, lib[i].flag);
 				}
 				qsort(lib, 5, sizeof(struct library), compareaccession_number);
 				
 				/*Print the books in the order of accession number. */
 				printf("\nThe order of books based on accession number is \n");
 				for(int i = 0; i < 5; i++)
 				{
 					printf("%d %s %s %d %d\n", lib[i].accessionnumber, lib[i].author, lib[i].title, lib[i].price, lib[i].flag);
 				}
 				break;
 					
 			case 7:
 				exit(0);
 			}
 		}
}
 				
 				
 			
 				
 				
 	
