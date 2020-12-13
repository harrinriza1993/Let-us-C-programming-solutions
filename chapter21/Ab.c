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
	int number, is_game_set, won = 0;
	char *game[8] = {
						"cricket",
						"basketball",
						"football",
						"hockey",
						"lawn tennis",
						"table tennis",
						"carom",
	                    "chess"
	                  };
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	printf("The game won by the colleges is\n");
	for(int i = 0; i < 8; i++)
	{
		is_game_set = number & (1 << i);
		
		if(is_game_set)
		{
			won++;
			printf("%s\n", game[i]);
		}
	}
	
	if(won >= 5)
	{
		printf("The college won the champions trophy\n");
	}
	else
	{
		printf("The college doesn't won the champions trophy\n");
	}
}
	

