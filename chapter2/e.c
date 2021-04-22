/* (e) Write a program to receive values of latitude(L1, L2) and longitude(G1, G2), in degrees,
       of two places on the earth and output the distance(D) between them in nautical miles.
       The formula for distance in nautical miles is
       
       D = 3963 cos^-1(sinL1sinL2 + cosL1cosL2 *cos(G2 - G1))
*/

#include<stdio.h>
#include<math.h>

void main()
{
	int L1, L2, G1, G2;
	float D;
	
	printf("Enter the values of latitude\n");
	scanf("%d%d", &L1, &L2);
	printf("Enter the values of longitude\n");
	scanf("%d%d", &G1, &G2);
	
	D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos (L2) * cos(G2 - G1));
	
	printf("The distance in nautical miles is %f\n", D);
}
