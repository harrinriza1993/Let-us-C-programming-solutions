/* (j) Given three points(x1, y1), (x2, y2) and (x3, y3), write a program to check if all three points fall on one 
       straight line.
*/

#include<stdio.h>

void main()
{
	int x1, x2, x3, y1, y2, y3, m, n;
	
	printf("Enter the x coordinates\n");
	scanf("%d%d%d", &x1, &x2, &x3);
	
	printf("Enter the y coordinates\n");
	scanf("%d%d%d", &y1, &y2, &y3);
	
	m = (y2 - y1) / (x2 - x1);
	n = (y3 -y1) / (x3 - x1);
	
	if(m == n)
		printf("All three points fall on one straight line\n");
	else
		printf("All three points does not fall on one straight line\n");
}
