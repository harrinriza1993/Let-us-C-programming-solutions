/* (d) A record contains name of cricketer, his age, number of test matches that he
       has played and the average runs that he has scored in each test match. Create
       an array of structures to hold records of 20 such cricketers and then write a
       program to read these records and arrange them in ascending order by average runs. 
       Use the qsort() standard library function.

Apporach:
	1) Using Qsort library function the given cricketer records are arranged
	   based on their average runs scored by them.
*/

#include<stdio.h>
#include<stdlib.h>

struct cricketerdetails
{
	char name[20];
	int age;
	int numberOfTestMatches;
	int averageRuns;
};

int compareAverageRuns(const void *pa, const void *pb)
{
	 struct cricketerdetails *p1 = pa;
	struct cricketerdetails *p2 = pb;
	return p1->averageRuns - p2->averageRuns;
}

void main()
{
	struct cricketerdetails records[5];
	int i;
	
	/* Get the values from the user regarding cricketer records. */
	printf("Enter the name, age, number of test matches, average runs of a cricket player\n");
	for(i = 0; i < 5; i++)
	{
		scanf(" %s %d %d %d", &records[i].name, &records[i].age, &records[i].numberOfTestMatches, &records[i].averageRuns);
	}
	
	int n = sizeof (records) / sizeof (struct cricketerdetails);
	
	/* Using the qsort library function. */
	qsort(records, n, sizeof(struct cricketerdetails), compareAverageRuns);
	
	/* The sorted records based on cricketer average runs */
	printf("\nThe sorted cricketer record based on average runs is\n");
	for(i = 0; i < n; i++)
	{
		printf(" %s %d %d %d\n", records[i].name, records[i].age, records[i].numberOfTestMatches, records[i].averageRuns);
	}
}


	
