/* (j) In a data structure called the addition of new elements takes place at end
       (called 'rear' of queue.), Whereas deletion take place at the other end
       (called 'front' of queue). Write a program to implement a queue using
       the linked list.
       
Apporach:
	1) In queue addition take place at one end called rear and deletion take
	   place at the other end.
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *front, *rear;

/*Function to add element at the rear(end) of the list. */
void enqueue()
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	
	if(new_node == NULL)
	{
		printf("Unable to allocate memory\n");
		exit(0);
	} 

	printf("Enter the value\n");
	scanf("%d",&new_node -> data);
	
	new_node -> next = NULL;
	
	if(front == NULL && rear == NULL)
	{
		front = new_node;
	}
	else
	{
		rear = front;
		
		while(rear -> next != NULL)
		{
			rear = rear -> next;
		}
		rear -> next = new_node;
	}
}

/*Function to delete elements at front of the list. */
void dequeue()
{
	if(front == NULL && rear == NULL)
	{
		printf("There is no elements to delete\n");
	}
	else
	{
		rear = front;
		front = front -> next;
		free(rear);
	}
}

/*Print the element in the list. */
void display()
{
	if(front == NULL && rear == NULL)
		printf("The list is empty\n");
	else
	{
		struct node *rear = front;
		
		printf("The list is \n");
		while(rear -> next != NULL)
		{
			printf("%d\n", rear -> data);
			rear = rear -> next;
		}
		printf("%d\n", rear -> data);
	}
}


void main()
{
	front = NULL;
	rear = NULL;
	
	int choice;
	
	/*While loop is used with switch statement to call the required functions. */
	while(1)
	{
		printf("\nEnter your choice\n");
		printf("1. enqueue at rear\n");
		printf("2. dequeue at front\n");
		printf("3. Display the list\n");
		printf("4. exit\n");
		
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\nenqueue at rear\n");
				enqueue();
				break;
			case 2:
				printf("\ndequeue at front\n");
				dequeue();
				break;
			case 3:
				printf("\nDisplay the list\n");
				display();
				break; 
			case 4:
				exit(0);
		}
	}
}
	
 


