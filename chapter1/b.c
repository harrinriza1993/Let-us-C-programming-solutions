/* (b) The distance between two  cities(in km) is input through the keyboard.
       Write a program to convert and print this distance in meters, feet, inches
       and centimeters.
*/

#include<stdio.h>

void main()
{
	int distance_in_km;
	
	printf("Enter the distance between two cities in km\n");
	scanf("%d", &distance_in_km);
	
	printf("Distance in meters = %f\n", (float)distance_in_km / 1000);
	printf("Distance in feet = %f\n", (float)distance_in_km / 3280.839895);
	printf("Distance in inches = %f\n", (float) distance_in_km / 39370.0787);
	printf("Distance in centimeters = %f\n", (float) distance_in_km / 100000);
}
