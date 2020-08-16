/* (m) There are five players from which the Most Valuable Player(MVP) is to be 
       chosen. Each player is to be judged by 3 judges, who would assign a rank
       to each player. The player whose sum of rank is highest is chosen as MVP.
       Write a program to implement the scheme.

Apporach:
	1) A struct named players is created and rank is given as a input.
	2) The three judges give rank to all five players.
	3) Add the three ranks and who got highest rank is the Most valuable
	   player.
*/
 
#include<stdio.h>

#define NUM_OF_NUMBER 5

/*A structure named players is created. */
struct players
{
	char name[50];
	int rank[3];
	int total;
}MVP[NUM_OF_NUMBER] = {
"Sachin Tendulkar", 0, 0, 0, 0,
"Saurav Gangully",  0, 0, 0, 0,
"Gill Christ",      0, 0, 0, 0,
"Ricky Ponting",    0, 0, 0, 0,
"Yuvaraj Singh",    0, 0, 0, 0,
};
 
void main()
{
	int max = 0, i;

	for(i = 0; i < NUM_OF_NUMBER; i++)
	{
		printf("\nThe rank of %dst player [%s] is \n", i+1, MVP[i].name);
		for(int j = 0; j < 3; j++)
		{
			printf("Enter the rank by Judge %d: ", j+1);
			scanf("%d", &MVP[i].rank[j]);
		}
		MVP[i].total  = MVP[i].rank[0] + MVP[i].rank[1] + MVP[i].rank[2];

		if(MVP[i].total > max)
			max = MVP[i].total;
	}

	for (i = 0; i < 5; i++)
	{
		if (max == MVP[i].total)
		{
			printf("\nThe most valuable player is %s\n", MVP[i].name);
		}
	}
}

