/*(l) Write a program that receives wind speed as input and categorize hurricane as per the 
      following table:
      
      Windspeed in miles/hour            Hurricance Category
      	74 - 95				        1
      	96 - 110				2
      	111 - 130				3
      	131 - 155				4
      	> 155					5
*/
 
#include<stdio.h>
#include<stdlib.h>

void main()
{
	/*Hurrincane category according to wind speed. */
	int wind_speed;
	printf("Enter the wind speed in miles/hour\n");
	scanf("%d", &wind_speed);

	if((wind_speed >= 74) && (wind_speed) <= 95)
	{  
		printf("Hurricane Category is 1\n");
	}
	else if((wind_speed >= 96) && (wind_speed) <= 110)
	{  
		printf("Hurricane Category is 2\n");
	}
	else if((wind_speed >= 111) && (wind_speed) <= 130)
	{  
		printf("Hurricane Category is 3\n");
	}
	else if((wind_speed >= 131) && (wind_speed) <= 155) 
	{ 
		printf("Hurricane Category is 4\n");
	}
	else if((wind_speed > 155))
	{ 
		printf("Hurricane Category is 5\n");
	}
	else
	{
		printf("Invalid windspeed\n");
	}
}

