/*(l) Write a program that receives wind speed as input and categorize hurricane as per the 
      following table:
      
      Windspeed in miles/hour            Hurricance Category
      	74 - 95				1
      	96 - 110				2
      	111 - 130				3
      	131 - 155				4
      	> 155					5

Apporach:
	1) A structure named wind is created with wind speed as data.
	2) Then the hurricane category is known according to the range
	   of wind speed.
*/
 
 #include<stdio.h>
 #include<stdlib.h>
 
 /*A structure named wind is created. */
 struct wind
 {
 	int wind_speed;
 }w[5];
 
 void main()
 {
 	/*Hurrincane category according to wind speed. */
 	for(int i = 0; i < 5; i++)
 	{
 		printf("Enter the wind speed in miles/hour\n");
 		scanf("%d", &w[i].wind_speed);
 		
 		if((w[i].wind_speed >= 74) && (w[i].wind_speed) <= 95)
 		{  
 			printf("Hurricane Category is 1\n");
 		}
 		else if((w[i].wind_speed >= 96) && (w[i].wind_speed) <= 110)
 		{  
 			printf("Hurricane Category is 2\n");
 		}
 		else if((w[i].wind_speed >= 111) && (w[i].wind_speed) <= 130)
 		{  
 			printf("Hurricane Category is 3\n");
 		}
 		else if((w[i].wind_speed >= 131) && (w[i].wind_speed) <= 155) 
 		{ 
 			printf("Hurricane Category is 4\n");
 		}
 		else if((w[i].wind_speed > 155))
 		{ 
 			printf("Hurricane Category is 5\n");
 		}
 		else
 		{
 			printf("Invalid windspeed\n");
 		}
 	}
 }
 	
