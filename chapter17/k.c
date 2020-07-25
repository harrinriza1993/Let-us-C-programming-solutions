/* (k) Write a program to implement in ascending order linked list. This means any 
       element that is added to the linked list gets inserted at a place in the 
       linked list such that it's ascending order nature remains intact.
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head;

void insert_sort(int element)
{
	int temp;
	struct node *current_node = head, *index_node = NULL;
	struct node * new_node = (struct node *)malloc(sizeof(struct node));
	
	new_node -> data = element;
	new_node -> next = NULL;
	
	head = new_node;
	current_node = head;
	
	if(head == NULL)
	{
		return;
	}
	else
	{
		while(current_node != NULL)
		{
			index_node = current_node -> next; 
			
			while(index_node != NULL) 
			{  
                    		if(current_node -> data > index_node -> data) 
                    		{  
				        temp = current_node -> data;  
				        current_node -> data = index_node -> data;  
				        index_node -> data = temp;  
				}  
                    		index_node = index_node -> next;  
                	}  
                   	current_node = current_node ->next;  
		}
	}
}

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
			printf("%d\n", temp -> data);
			temp = temp -> next;
		}
		printf("%d\n", temp -> data);
	}
}

void main()
{
	head = NULL;
	int element;
	
	printf("Enter the element\n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &element);
		insert_sort(element);
	}
	display();
}

