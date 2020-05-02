### Chapter 14 : Multidimensional Arrays

### [A] What will be the output of the following programs.

- This one is covered in `exerciseA` file.

### [B] Point out errors, if any, in the following programs,

- This one is covered in `exerciseB` file.

### [B] Attempt the following

**a.c** : How will you initialize a three-dimensional array thread[3][2][3].
How will you refer the first and last element in this array.

**b.c**: Write a program to pickup the largest number from any 5 row by 5 column 
matrix.

**c.c**: Write a program to obtain transpose of a 4 X 4 matrix. Thetranspose of a 
matrix is obtained by exchanging the elements of each row with the elements of the 
corresponding column.

**d.**: Match the following with reference to the program segment given below:

	int i, j = 25;
	int *pi, *pj = &j;
	/*more lines of program*/
	*pj = j + 5;
	 j = *pj + 5;
	 pj = pj;
	 *pi = i + j;

	Each integer quantity occupies 2 bytes of memory. The value assigned to i begin at (hexadecimal) address
	F9C and the value assigned to j begins at address F9E. Match the value represented by left hand side quantities
	with the right.

	1.	&j		a. 30
	2.	&j		b. F9E
	3.	pj		c. 35
	4.	*pj		d. FA2
	5.	i		e. F9C
	6. 	pi		f. 67
	7.	*pi		g. unspecified
	8. 	(pi + 2) 	h. 65
	9.	(*pi + 2)	i. F9E
	10.	*(pi + 2)	j. F9E
				k. FAO
				l. F9D

**e.**: Match the folowing with reference to the following programsegment:

	int x[3][5] = {
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15}
		      };

	1. 	*(*(x + 2) + 1)		a. 9
	2. 	*(*x + 2) + 5		b. 13
	3.	*(*(x + 1))		c. 4
	4.	*(*(x) + 2) + 1		d. 3
	5.	*(*(x + 1) + 3)		e. 2
	6.	*n			f. 12
	7.	*(n + 2)		g. 14
	8.	(*(n + 3) + 1		h. 7
	9.	*(n + 5) + 1		i. 1
	10.	++*n			j. 8
					k. 5
					l. 10
					m. 6

**f**: Match the following with reference to the following program segment:

	unsigned int arr[3][3] = {
				   2, 4, 6,
				   9, 1, 10,
			           16, 64, 5
				};

	1.	**arr					a. 64
	2.	**arr < *(*arr + 2)			b. 18
	3.	*(arr + 2)/(*(*arr + 1) > **arr)	c. 6
	4. 	*(arr[1] + 1)|arr[1][2]			d. 3
	5.	*(arr[0])|*(arr[2])			e. 0
	6.	arr[1][1] < arr[0][1]			f. 16
	7.  	arr[2][1] & arr[2][0]			g. 1
	8. 	arr[2][2] | arr[0][1]			h. 11
	9. 	arr[0][1] ^ arr[0][2]			i. 20
	10.	++**arr + --arr[1][1]			j. 2
							k. 5
							l. 4

**g.c**:  Write a program to find if a square matrix is symmetric.

**h.c**:  Write a program to add two 6 X 6 matrices.

**i.c**:  Write a program to multiply any 3 x 3 matrices.

**j.c**:  Given an array p[5], write a function to shift it circularly left by 
two positions. Thus,

	if p[0] = 15, p[1] = 30, p[2] = 28, p[3] = 19 and p[4] = 61 

then after the shift

	p[0] = 28, p[1] = 19, p[2] =61, p[3] = 15 and p[4] = 30.

Call this function for a (4 X 5) matrix and get it's rows left shifted.

**k.c**: A 6 x 6 matrix is entered through the keyboard. Write a program to 
obtain the Determinant value of the matrix.

**l.c**: For the following set of sample data, compute the standard 
deviation and the mean.
	
	-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2

	The formula for standard deviation is
	 	 __
	sqrt(xi - x)^2/n          __
	where xi is the data item  x is the mean.

**m.c**: The area of a triangle can be computed by the sine law when
2 sides of the triangle and the angle between them are known.

		Area = (1/2)absin(angle)

       Given the following 6 pieces of land, write a program to 
       find their area and determine which is largest.
	plotno	a	b	angle
	1	137.4	80.9	0.78
	2	155.2	92.62	0.89
	3	149.3	97.93	1.35
	4	160.0	100.25	9.00
	5	155.6	68.95	1.25
	6	149.7	120.0	1.75

**n.c**: For the following set of n data points (x, y), write a 
program to compute the correlation coefficient r, given by 

	r = ( sumOf(xy) - sumOf(x) * sumOf(y) )/
	      sqrt([n * ( sumOf(x^2)- sumOf(x) * sumOf(x) )]
	    * sqrt([n * ( sumOf(y^2)- sumOf(y) * sumOf(y) )]

	x 	y 	
	34.22	102.43
	39.87 	100.93
	41.85	97.43
	43.23	97.81
	40.06	98.32
	53.29	98.32
	53.29	100.07
	54.14	97.08
	49.12	91.59
	40.71	94.85
	55.15	94.65

**o.c**: For the following set of point given by (x, y) fit a straight line given by 

	y = a + bx

	where,	

		    ---  ---
		a =  y  - bx  and

		b = n * sumOf(xy) - sumOf(x) * sumOf(y)/
		    n * (sumOf(x^2)- sumOf(x) * sumOf(x))

		x	y
		3.0	1.5
		4.5	2.0
		5.5	3.5
		6.5	5.0
		7.5	6.0
		8.5	7.5
		8.0	9.0
		9.0	10.5
		9.5	12.0
		10.0	14.0

**p.c**: The X and Y coordinates of 10 different points are entered through
the keyboard. Write a program to find the distance of last point from the first 
point (sum of distance between consecutive points).

**q.c**: A dequeue is an ordered set of elements in which the  elements may be 
inserted or retrieved from either end. Using an array simulate a dequeue of characters
and the operations retrieve left, retrive right, insert left, insert right. Exceptional 
condition such as dequeue full or empty should be indicated. Two pointers(namely, left
and right) are needed in this simulation.











