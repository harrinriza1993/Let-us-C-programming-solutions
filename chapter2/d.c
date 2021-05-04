/* (d) Write a program to receive Cartesian co-ordinates(x, y) of a point and convert them in to polar
       co-ordinates(r, s)
       
       Hint r = sqrt(x^2 + y^2)
       and  s = tan^-1(y / x)
 */
 
 #include<stdio.h>
 #include<math.h>
 
 void main()
 {
 	int x, y;
 	float s, r;
 	
 	printf("Enter the value of x and y\n");
 	scanf("%d%d", &x, &y);
 	
 	r = sqrt((x * x) + (y * y));
 	s = atan(y / x);
 	
 	printf("The Polar co-ordinates are %f and %f\n", r, s);
 	
 }
