/*(a) The information about colors is to be stored in bits of a char variable called color.
      Bit numbers 0 to 6, each represent 7 colors of a rainbow, i.e., bit 0 represents
      violet, 1 represents indigo, and so on. Write a program that ask the user to enter
      a number and based on this number it reports which colors in the rainbow do the 
      number represents.
*/

#include<stdio.h>

void main()
{
	unsigned char is_color_set, num, i;
	char *colour[7] = {
						"Violet",
						"Indigo",
						"Blue",
						"Green",
						"Yellow",
						"Orange",
						"Red"
					  };

	printf("Enter the number\n");
	scanf("%d", &num);
	
	for(i = 0; i <= 6; i++)
	{
		is_color_set = num & (1 << i);
		
		if(is_color_set)
		{
			printf("%s\n", colour[i]);
		}
	}
}

