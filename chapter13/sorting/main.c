#include<stdio.h>
#include "main.h"

void main()
{
	int arr[5], size = 5;
	int choice;

	printf("Enter ur choice\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("Bubble sort\n");

			void bubblesort(arr, size);
			break;
		case 2:
			printf("Selection sort\n");

 			void selectionsort(num, size);
			break;
		case 3:
			printf("Insertion sort");

			void insertionsort(num,  size);
			break;
	}
}

