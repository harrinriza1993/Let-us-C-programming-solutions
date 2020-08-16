/* (i) A stack is a data structure in which addition of new element or deletion of 
       existing element always take place at the same end known as 'top' of stack.
       Write a program to implement a stack using a linked list.

Apporach:
	1) Since the time complexity of for push and pop operation is O(1) 
 	   data insertion and deletion takes place at the starting of the list
 	   that is the top of the list.
*/
 
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top;

/*Function to insert a node at top. */
void push()
{
	struct node *new_node = (struct node *) malloc (sizeof (struct node));	
	if(new_node == NULL)
	{
		printf("Unable to allocate memory\n");
		exit(0);
	}
	
	printf("Enter the newnode data\n");
	scanf("%d", &new_node -> data);
	
	if(top == NULL)
	{
		top = new_node;
		new_node -> next = NULL;
	}
	else
	{
		new_node -> next = top;
		top = new_node;
	}
}

/*Function to delete a node at top. */
void pop()
{
	if(top == NULL)
	{
		printf("There is no elements to delete\n");
	}
	else
	{
		struct node *temp = top;
		top = top -> next;
		free(temp);
	}
}

/*Print the elements in the list. */
void display()
{	
	if(top == NULL)
		printf("The list is empty\n");
	else
	{
		struct node *temp = top;
		
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
	top = NULL;
	
	int choice;
	
	while(1)
	{
		printf("\nEnter the choice\n");
		printf("1. Push the node in the stack\n");
		printf("2. Pop the node in the stack\n");
		printf("3. Display the list\n");
		printf("4. Exit the list\n");
		
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nPush the node in the stack\n");
				push();
				break;
			case 2:
				printf("\nPop the node in the stack\n");
				pop();
				break;
			case 3:
				printf("\nDisplay the list\n");
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Unknown option\n");
				break;
		}
	}
}
	
	
