/*(f) Write a program for a matchstick game being played between the 
   computer and a user.Your program should ensure that the computer 
   always wins. Rules for the game as follows:
	-There are 21 matchsticks
	-The computer asks the player to pick 1,2,3,or 4 matchsticks.
	-After the person picks,the computer does it's picking.
	-Whoever is forced to pick up the last matchstick loses the game*/

/*Apporach:
	1) The odd values of the variable matchstick are picked by the computer
	2) The even values are picked by the user 
	3) Since there is only 21 matchsticks,the user always force to loose the game*/ 

	#include<stdio.h>
	void main()
	{
		int matchstick = 1;

		while (matchstick <= 21)
		{

		   /* The computer picks odd values and it always wins the game*/

			matchstick = matchstick+2;
			printf("The computer picks %d and the computer wins the game\n",m);
		}

		if (matchstick == matchstick+1)
			printf("The user wins the game");
		else
			printf("The user always forces to loose\n");
				
		
	}
