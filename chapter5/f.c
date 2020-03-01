/*(f) Write a program for a matchstick game being played between the 
      computer and a user.Your program should ensure that the computer 
      always wins. Rules for the game as follows:
	-There are 21 matchsticks
	-The computer asks the player to pick 1,2,3,or 4 matchsticks.
	-After the person picks,the computer does it's picking.
	-Whoever is forced to pick up the last matchstick loses the game
*/

/*Apporach:
	1) Ask the user to pick the matchstick.
	   If user picked more than 4 matchsticks then COMPUTER WINS.
	2) Computer picks the matchsticks.
	3) Since there is only 21 matchsticks,the user always force to loose the game
*/ 


#include<stdio.h>

void main()
{
	int matchsticks = 21, user, computer;
	printf("User should pick up  1,2,3,or 4 matchsticks.\n\n");

	while (matchsticks >= 1)
	{
		printf("Number of avilable matchsticks : %d\n\n", matchsticks);

		//Ask the user to pick the matchstick
		printf("Pick up number of match sticks [1,2,3,or 4 ] : ");
		scanf("%d", &user);	

		if (user > 4)
		{
			printf("\nYou have picked up more than 4 match sticks\n");	
			printf("Ivalid Picks!\nCOMPUTER WINS .....\n\n");
			break;
		}

		matchsticks = matchsticks - user;
		if (matchsticks < 1)
		{
			printf("\nCOMPUTER WINS....\n");
			break;
		}
		
		//computer picks
		computer = 5 - user;
		printf("\nComputer pics : %d \n", computer);

		matchsticks = matchsticks - computer;

		if (matchsticks < 1)
		{
			printf("\nUSER WINS....\n");
		}
	}
}



