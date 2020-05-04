/*(q) A dequeue is an ordered set of elements in which the  elements
      may be inserted or retrieved from either end. Using an array
      simulate a dequeue of characters and the operations retrieve left,
      retrive right, insert left, insert right. Exceptional condition such
      as dequeue full or empty should be indicated. Two pointers(namely, left
      and right) are needed in this simulation.
*/

#include<stdio.h>
void insertrear(int a[], int rear);
void insertfront(int a[], int front);
void deletefront(int a[], int front);
void deleterear(int a[], int front);

void main()
{
	int a[5], rear = -1, front = -1;

	insertrear(a, rear);
	insertfront(a, front);
	deletefront(a, front);
	deleterear(a, rear);
}

void insertrear(int a[], int rear)
{
	int element;
	
	if (rear >= 4)
		printf("Dequeue is full\n");
	else
	{
		printf("Enter the elements inserted by insert rear method\n");
		while (rear < 4)
		{
			scanf("%d",&element);
			a[rear] = element;
			rear++;
		}
	}
}

void insertfront(int a[], int front)
{
	int element, size = 4;


	front = size-1;
	printf("Enter the elements inserted by insert front method\n");
	while (front < size && front >= -1)
	{
		scanf("%d",&element);
		a[front] = element;
		front--;
	}
}

void deletefront(int a[], int front )
{
	int element, number, size = 5;

	printf("Enter the elements\n");
	for(front = -1; front <=3; front++)
	{
		scanf("%d",&element);
		a[front] = element;
	}
	printf("Enter the number of elements to be deleted\n");
	scanf("%d",&number);
	if (number <= 5)
	{
		front = -1;
		front = number + front;
		printf("The elements after front deletion\n");
		while(front <= 3)
		{
			printf("%d\n",a[front]);
			front++;
		}
	}
}

void deleterear(int a[], int rear)
{
	int element, number, size = 5;
	printf("Enter the elements\n");
	for(rear = -1; rear <= 3; rear++)
	{	
		scanf("%d",&element);
		a[rear] = element;
	}
	printf("Enter the number of elements to be deleted\n");
	scanf("%d",&number);
	if (number <= 5)
	{
		rear = 3;
		rear = rear - number;
		printf("The elements after rear deletion\n");
		while (rear >= -1)
		{
			printf("%d\n",a[rear]);
			rear--;
		}
	}
} 

		
	

	
	

	
	
	
	
