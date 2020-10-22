/*(a) The information about colors is to be stored in bits of a char variable called color.
      Bit numbers 0 to 6, each represent 7 colors of a rainbow, i.e., bit 0 represents
      violet, 1 represents indigo, and so on. Write a program that ask the user to enter
      a number and based on this number it reports which colors in the rainbow do the 
      number represents.
*/
#include<stdio.h>

void main()
{
	int num;
	char color;
	
	printf("Please enter the number(0-6): \n");
	scanf("%d", &num);
	
	/*To make the corresponding bit on and other bit off, left shift 1 by the corresponding
	  number. */
	color = 1 << num;
	
	printf("The color is ");
	if (num == 0 && color == 1)
		printf("Violet\n");
		
	else if (num == 1 && color == 2)
		printf("Indigo\n");
		
	else if (num == 2 && color == 4)
		printf("Blue\n");
		
	else if (num == 3 && color == 8)
		printf("Yellow\n");	
		
	else if (num == 4 && color == 16)
		printf("Green\n");
		
	else if (num == 5 && color == 32)
		printf("Orange\n");	
		
	else if (num == 6 && color == 64)
		printf("Red\n");
		
	else
		printf("invalid option\n");
}
