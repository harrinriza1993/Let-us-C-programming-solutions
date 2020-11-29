/* (e) In order to save disk space information about student is stored in an integer variable. If bit number 0 
      is on then it indicates Ist year student, bit number 1 to 3 stores IInd year, IIIrd year and IVth year student 
      respectively. The bit number 4 to 7 stores stream Mechanical, Chemical, Electronics and CS. Rest of the bits store 
      room number. Such data for 4 students is stored in the following array:
      
      		int data[ ] = { 273, 548, 786, 1096 } ;
      		
      write a program that asks for the room number and displays the information about the student, if its data exists 
      in the array.  
*/


#include<stdio.h>

void main()
{
	int data[ ] = { 273, 548, 786, 1096 } ;
	int data_room_number[4], room_number, i, j, is_set_bit;
	char *year[] = {	"Ist year",
				"IInd year",
				"IIIrd year",
				"IVth year",
			};
	char *department[] = {	"Mechanical",
				"Chemical",
				"Electronics",
				"CS",
			    };
				
	
	printf("The room number of given data is\n");	
	for(i = 0; i <= 3; i++)
	{
		data_room_number[i] = data[i] >> 8;
		printf("%d\n", data_room_number[i]);
	}
	
	printf("Enter the room number\n");
	scanf("%d", &room_number);
	
	printf("The year of the student is\t");
	for(i = 0; i <= 3; i++)
	{
		if(data_room_number[i] == room_number)
		{
			for(j = 0; j <= 3; j++)
			{
				is_set_bit = data[i] & (1 << j);
				
				if(is_set_bit != 0)
				{
					printf("%s\n", year[j]); 
				}
			}
		}
	}
	
	printf("The department of the student is\t");
	for(i = 0; i <= 3; i++)
	{
		data[i] = data[i] >> 4;
		
		if(data_room_number[i] == room_number)
		{
			for(j = 0; j <= 3; j++)
			{
				is_set_bit= data[i] & (1 << j);
				
				if(is_set_bit != 0)
				{
					printf("%s\n", department[j]); 
				}
			}
		}
	}
}
