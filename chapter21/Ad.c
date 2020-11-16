/* (e) The time field in structure is 2 bytes long. Distribution of different bits which account for hours, 
       minutes and seconds is given below. Write a function which would receive the two-byte time 
       entry and return to the calling function, the hours, minutes and seconds.
       
       15  14  13   12   11   10    9    8    7    6     5    4    3   2   1   0
       H    H   H    H    H    M    M    M    M    M     M    S    S   S   S   S
*/


#include <stdio.h>

#define NUMBER_OF_BITS_SECONDS 0x1F
#define NUMBER_OF_BITS_MINUTES 0x2F
#define NUMBER_OF_BITS_HOUR 0x1F
 

int time(int number, int *seconds, int *minutes, int *hour)
{
	*seconds =  NUMBER_OF_BITS_SECONDS & number;
	
	*minutes = (NUMBER_OF_BITS_MINUTES << 5) & number;
	*minutes = *minutes >> 5;
	
	*hour = (NUMBER_OF_BITS_HOUR << 11) & number;
	*hour = *hour >> 11;
}

void main()
{
	int number;
	int seconds, minutes, hour;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	time(number, &seconds, &minutes, &hour);
	
	printf("\nSeconds = %d\n", seconds);
	printf("Minutes = %d\n", minutes);
	printf("Hour = %d\n", hour);
}
	
	
