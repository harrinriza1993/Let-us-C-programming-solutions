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
 
 /*A structure named players is created. */
 struct players
 {
 	int rank;
 }r[3];
 
 void main()
 {
 	int player[5], temp = 0;
 	
 	printf("Enter the rank of first judge, second judge, third judge of 5 players\n");
 	for(int i = 0; i < 5; i++)
 	{
 		temp = 0;
 		printf("The rank of %d player is \n", i+1);
		for(int j = 0; j < 3; j++)
 		{
 			scanf("%d", &r[j].rank);
 			temp = temp + r[j].rank;
	 	}
 		player[i] = temp;
 	}
 	
 	/*Prints the rank of players. */
 	printf("\nThe total rank of all the five players are \n"); 
 	for(int i = 0; i < 5; i++)
 	{
 		printf("%d\n", player[i]);
 	}
 	
 	/*Find the Most valuable player. */
 	for(int i = 0; i < 5; i++)
 	{
 		if(player[i] >= player[0])
	 	{
	 		if(player[i] >= player[1])
	 		{
	 			if(player[i] >= player[2])
	 			{
	 				if(player[i] >= player[3])
	 				{
	 					if(player[i] >= player[4])
	 					{
	 						/*Since the starting index of array is 0 , (i + 1) index is printed*/
	 						  printf("\nThe most valuable player is p[%d]\n", (i + 1));	
	 					}
	 				}
	 			}
	 		}
	 	}
 	}
 }

 				
  
