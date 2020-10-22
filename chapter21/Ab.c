/* (b) In an inter-college competition, various sports like cricket, basketball, football
       hockey, lawn tennis, table tennis, carom and chess are played between different colleges.
       The information regarding the games won by a particular college is stored in bit numbers
       0, 1, 2, 3, 4, 5, 6, 7 and 8, respectively of an integer variable called game. The college
       that wins in 5 or more than 5 games is awarded the Champion of Champions trophy. If a 
       number representing the bit pattern mentioned above is entered through the keyboard then
       write a program to find out whether the college won the Champion of the Champions tropy
	or not, along with the games won by the college.
*/


#include<stdio.h>

void main()
{
	int game, number, won = 0;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	printf("\nThe name of the game won by the college %d is\n", number);
	for(int i = 1; i <= 8; i++)
	{
		/*To check the number of games won by college do and operation of given number with 
		  numbers 1 to 8. */
		game = number & i;
		
		if(game == 1)
		{
			printf("Cricket\n");
			won++;
		}
		else if(game == 2)
		{
			printf("Basketball\n");
			won++;
		}
		else if(game == 3)
		{
			printf("Football\n");
			won++;
		}
		else if(game == 4)
		{
			printf("Hockey\n");
			won++;
		}
		else if(game == 5)
		{
			printf("Lawn tennis\n");
			won++;
		}
		else if(game == 6)
		{
			printf("Tabble tennis\n");
			won++;
		}
		else if(game == 7)
		{
			printf("Carom\n");
			won++;
		}
		else if(game == 8)
		{
			printf("Chess\n");
			won++;
		}
	}
	
	if(won >= 5)
		printf("\nThe college %d wins the champion of Champions trophy\n", number);
	else
		printf("\nThe college %d does not win the champion of champions trophy\n", number);
}
		
		
	
	

