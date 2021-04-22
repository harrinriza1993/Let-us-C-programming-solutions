/* (d) Write a program to receive Cartesian co-ordinates(x, y) of a point and convert them in to polar
       co-ordinates(r, s)
       
       Hint r = sqrt(x^2 + y^2)
       and  s = tan^-1(y / x)
 */
 
 #include<stdio.h>
 #include<math.h>
 
 void main()
 {
 	int x, y, r;
 	float s;
 	
 	printf("Enter the value of x and y\n");
 	scanf("%d%d", &x, &y);
 	
 	r = pow((x * x) + (y * y), 0.5);
 	s = atan(y / x);
 	
 	printf("The Polar co-ordinates are %d and %f\n", r, s);
 	
 }
