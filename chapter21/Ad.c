/* (e) The time field in structure is 2 bytes long. Distribution of different bits which account for hours, 
       minutes and seconds is given below. Write a function which would receive the two-byte time 
       entry and return to the calling function, the hours, minutes and seconds.
       
       15  14  13   12   11   10    9    8    7    6     5    4    3   2   1   0
       H    H   H    H    H    M    M    M    M    M     M    S    S   S   S   S
*/

#include <stdio.h>
#include<math.h>

void main()
{
	int number, i;
	unsigned char k, andmask;
	
	printf("Enter the number\n");
	scanf("%d", &number);
	
	/*To find the seconds, minutes and hours find the binary value for each 4 bits and
	  divide the number by 16 at each step. */
	for(int i = 3; i >= 0; i--)
	{
		andmask = 1 << i;
		k = number & andmask;
		k == 0 ? printf("0s ") : printf("1s ");
	}
	
	number = number / (2 * 2 * 2 * 2);
	
	for(int i = 3; i >= 0; i--)
	{
		andmask = 1 << i;
		k = number & andmask;
		k == 0 ? printf("0M ") : printf("1M ");
	}
	
	number = number / 16;
	
	for(int i = 3; i >= 0; i--)
	{
		andmask = 1 << i;
		k = number & andmask;
		k == 0 ? printf("0H ") : printf("1H ");
	}
}

       
