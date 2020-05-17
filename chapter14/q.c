/*(q) A dequeue is an ordered set of elements in which the  elements
      may be inserted or retrieved from either end. Using an array
      simulate a dequeue of characters and the operations retrieve left,
      retrive right, insert left, insert right. Exceptional condition such
      as dequeue full or empty should be indicated. Two pointers(namely, left
      and right) are needed in this simulation.
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

void insertRight(int a[], int *right, int *left);
void insertLeft(int a[], int *right, int *left);
void deleteRight(int a[], int *right);
void deleteLeft(int a[], int *right, int *left);
void display(int a[], int *right);

void main()
{
	int a[5], right = -1, left = -1, choice;

	while(1)
	{
		printf("\nEnter the choice\n");
		printf("1. Insert at right\n");
		printf("2. Insert at left\n");
		printf("3. Delete at right\n");
		printf("4. Delete at left\n");
		printf("5. Display the queue·\n");
		printf("6. Exit·\n\n");
		scanf("%d", &choice);

		switch(choice)
		{

			case 1:
				insertRight(a, &right, &left);
				break;

			case 2:
				insertLeft(a, &right, &left);
				break;

			case 3:
				deleteRight(a, &right);
				break;

			case 4:
				deleteLeft(a, &right, &left);
				break;

			case 5:
				display(a, &right);
				break;

			case 6:
				exit(0);

			default:
				printf("\nWrong choice\n\n");
		}
	}
}

// Insert at right
void insertRight(int a[], int *right, int *left)
{
	if (*right == MAX-1)
	{
		printf("\nQueue is full\n\n");
		return;
	}

	int element;

	if (*right == -1)
		*left = 0;

	*right = *right + 1;
	
	printf("Enter the element to insert at right: ");
	scanf("%d", &element);

	a[*right] = element;
}


// Insert at left
void insertLeft(int a[], int *right, int *left)
{
	if (*right == MAX-1)
	{
		printf("\nQueue is full\n\n");
		return;
	}

	if (*right == -1)
		*left = 0;

	*right = *right + 1; //4

	//shift the queue
	for(int i = *right; i >= 0; i--)
		a[i+1] = a[i];

	int element;
	printf("Enter the element to insert at left: ");
	scanf("%d", &element);
	a[*left] = element;
}

// Delete at left
void deleteLeft(int a[], int *right, int *left)
{
	if (*right == -1)
	{
		printf("\nQueue is empty\n\n");
		return;
	}

	printf("Removed item from list: %d\n\n", a[*left]);
	*right = *right - 1;

	for(int i = 0; i<= *right; i++)
	{
		a[i] = a[i+1];
	}
}

// Delete at right
void deleteRight(int a[], int *right)
{
	if (*right == -1)
	{
		printf("\nQueue is empty\n\n");
		return;
	}

	printf("Removed item from list: %d\n\n", a[*right]);
	*right = *right - 1;
}

void display(int a[], int *right)
{
	if (*right == -1)
	{
		printf("\nQueue is empty\n\n");
		return;
	}
	
	printf("\nDequeue List\n");
	for (int i = 0; i <= *right; i++)
		printf("%d\t", a[i]);

	printf("\n\n");
}



