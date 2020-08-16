/* (d) A record contains name of cricketer, his age, number of test matches that he
       has played and the average runs that he has scored in each test match. Create
       an array of structures to hold records of 20 such cricketers and then write a
       program to read these records and arrange them in ascending order by average runs. 
       Use the qsort() standard library function.
*/

#include<stdio.h>
#include<stdlib.h>

//  Private variable
#define NUM_OF_CRICKETERS 10 //20

struct cricketerDetails
{
	char name[50];
	int age;
	int numberOfTestMatches;
	int averageRuns;
};

int compareAverageRuns(const void *pa, const void *pb)
{
	struct cricketerDetails *p1 = pa;
	struct cricketerDetails *p2 = pb;
	return p1->averageRuns - p2->averageRuns;
}

void main()
{
	struct cricketerDetails records[NUM_OF_CRICKETERS] =
	{
		"Saurav Ganguly",   42, 98,  67,
		"Rahual Dravid",    35, 100, 58,
		"Ricky Ponting",    45, 103, 61,
		"Yunis Khan",       40, 65,  43,
		"Suresh Raina",     32, 23,  48,
		"Murali Vijay",     30, 20,  34,
		"Virendra Sehwag",  38, 112, 55,
		"Sachin Tendulkar", 49, 123, 56,
		"Alstair Cook",     36, 134, 68,
		"Ian Bell",         32, 34,  41,
	};

	int numberOfCricketers = sizeof (records) / sizeof (struct cricketerDetails);
	
	/* Using the qsort library function. */
	qsort(records, numberOfCricketers, sizeof(struct cricketerDetails), compareAverageRuns);
	
	/* The sorted records based on cricketer average runs */
	printf("\nThe sorted cricketer record based on average runs is\n\n");
	printf("----------------------------------------------------\n");
	printf("| Name           | Age | Number Of    | Averge Runs |\n");
	printf("| Name           | Age | Test Matches | Averge Runs |\n");
	printf("----------------------------------------------------\n");
	for(int i = 0; i < NUM_OF_CRICKETERS; i++)
	{
		printf("%16s %4d %10d %10d\n", records[i].name, records[i].age, \
			 records[i].numberOfTestMatches, records[i].averageRuns);
	}
	printf("----------------------------------------------------\n");
}


	
