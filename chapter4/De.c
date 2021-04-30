/* (e) In digtal world colors are specified in Red-Green-Blue(RGB) format, with values of R, G, B varying on 
       an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-
       Black(CMYK) format, with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Write a 
       program that converts RGB color to CMYK color as per the following formulae:
       
       	White = max(Red / 255, Green / 255, Blue / 255)
       	
       	Cyan = (white - Red / 255 / white)
       	
       	Magenta = (white - Green / 255 / White)
       	
       	Yellow = (white - Blue / 255 / white)  
       	
       	Black = 1- White
       	
       	Note that if the RGB values are all 0, then the CMY values are all 0 and K value is 1.
*/

#include<stdio.h>

float max(int a, int b, int c)
{
	
	if((a > b) && ( a > c))
	{
		return a;
	}
	else if((b > a) && (b > c))
	{
		return b;
	}
	else
		return c; 
}
void main()
{
	float white, cyan, magenta, yellow, black, red, green, blue;
	
	printf("Enter the value of red, green, yellow\n");
	scanf("%f%f %f", &red, &green, &blue);
	
	white = max(red / 255, green / 255, blue / 255);
	
	cyan = (white - (red / 255)) / white;
	
	yellow = (white - (green / 255)) / white;
	
	black = 1 - white;
	
	printf("The value of white is %f\n", white);
	printf("The value of cyan is %f\n", cyan);
	printf("The value of yellow is %f\n", yellow);
	printf("The value of black is %f\n", black);
}
