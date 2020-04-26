#include<stdio.h>
#include<stdlib.h>
#include "main.h"

void main()
{
	int arr[25], size = 25;
	int choice, i;

	printf("Enter 25 numbers for sorting\n");
	for(i = 0; i < size; i++)
		scanf("%d",&arr[i]);
	
	printf("Enter your choice\n");
	printf("1. Bubble sort\n");
	printf("2. Selection sort\n");
	printf("3. Insertion sort\n");
	scanf("%d",&choice); 

	switch(choice)
	{
		case 1:
			printf("Bubble sort\n");
			bubblesort(arr, size);
			break;
		case 2:
			printf("Selection sort\n");
			selectionsort(arr, size);
			break;
		case 3:
			printf("Insertion sort");
			insertionsort(arr,  size);
			break;
		case 4:
			exit(0);
	}
}

