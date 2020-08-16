/* (h) Linked list is very common data structure that is often used to store similar data in memory.
       The individual elements of a linked list are "stored somewhere" in memory. The order of the 
       elements is maintained by explicit links between them. Thus, a linked list is a collection
       of elements called nodes, each of which stores two item of information - an element of the
       list, and a link, ie, a pointer or an address that indicates explicitly the location of the
       node containing the successor of the list element.
       
       Write a program to build a linked list by adding new nodes at the begining, at the end
       or in the middle of the linked list. Also write a function display() which displays all
       the nodes present in the linked list.
*/
 
#include<stdio.h>
#include<stdlib.h>
 
 /*A structure node is created to create a node in linked list. */
struct node
{
	int data;
	struct node *next;
};

struct node *head;

struct node *create_node()
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL)
	{
		printf("Unable to allocate memory\n");
		exit(0);
	}

	printf("Enter the value to add in the list\n");
	scanf("%d",&new_node -> data);

	return new_node;
}

/*Function to insert a node in front. */
void insert_front()
{
	struct node *new_node = create_node();	

	if(head == NULL)
	{
		head = new_node;
		new_node -> next = NULL;
	}
	else
	{
		new_node -> next = head;
		head = new_node;
	}
}

/*Function to insert a node at the end in the linked list. */
void insert_end()
{
	struct node *new_node = create_node();

	new_node -> next = NULL;
	
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		struct node *temp = head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
}

/*Function to insert a node at middle. */
void insert_middle()
{
	if(head == NULL)
	{
		insert_front();
	}
	else
	{
		int count = 0;
		struct node* temp = head;
		
		while(temp != NULL)
		{
			count++;
			temp = temp -> next;
		}
		printf("\nThe total number of nodes is %d\n", count);
		
		if(count % 2 == 0)
		{
			count = count / 2;
		}
		else
		{
			count = (count + 1)/2;
		}
		printf("The count is %d\n", count);
		
		temp = head;
		
		while(count-- > 1)
		{
			temp = temp -> next;
		}
		
		struct node * new_node = create_node();

		new_node -> next = temp -> next;
		temp -> next = new_node;
	}
}

/*Function to print the list of nodes. */
void display()
{
	if(head == NULL)
		printf("The list is empty\n");
	else
	{
		struct node *temp = head;
		
		printf("The list is \n");
		while(temp -> next != NULL)
		{
			printf("%d ", temp -> data);
			temp = temp -> next;
		}
		printf("%d\n", temp -> data);
	}
}

void main()
{
	head = NULL;
	
	int choice;
	
	/*While loop is used with switch statement to call the required functions. */
	while(1)
	{
		printf("\nEnter your choice\n");
		printf("1. Insert at front\n");
		printf("2. Insert at end\n");
		printf("3. Insert at middle\n");
		printf("4. Display the list\n");
		printf("5. exit\n");
		
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nInsert at front\n");
				insert_front();
				break;
			case 2:
				printf("\nInsert at end\n");
				insert_end();
				break;
			case 3:
				printf("\nInsert at middle\n");
				insert_middle();
				break; 
			case 4:
				printf("\nDisplay the list\n");
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Unknown option\n");
				break;
		}
	}
}
	
 
