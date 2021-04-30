
### Chapter 4  : More Complex Decision Making  

### [A] If a = 10, b = 12, c = 0, find the values of the expression in the following table :

- This one is covered in `exerciseA` file.

### [B] What will be the output of the following programs:

- This one is covered in `exerciseB` file.

### [C] Point out the errors, if any, in the following programs:

- This one is covered in `exerciseC` file.  

### [D] Attempt the following

**a.c** : A year is entered through the keyboard, write a program to determine whether the year is leap or not.
Use the logical operators && and ||.

**b.c** : If a character is entered through the keyboard, write a program to determine whether the character is a capital letter,
a small case letter, a digit or a special symbol.
       
       The following table shows the range of ASCII values for various characters :
       
       characters		AsCII Values
       A - Z			65 - 90
       a - z			97 - 122
       0 - 9			48 - 57
       special symbols		0 - 47, 58 - 64, 91 - 96, 123 - 127
       
**c.c** : If three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater than the largest of three sides.

**d.c** : If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle.

**e.c** : In digtal world colors are specified in Red-Green-Blue(RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. 
In print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black(CMYK) format, with values of C, M, Y and K varying on a real scale 
from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:
       
       	White = max(Red / 255, Green / 255, Blue / 255)
       	
       	Cyan = (white - Red / 255 / white)
       	
       	Magenta = (white - Green / 255 / White)
       	
       	Yellow = (white - Blue / 255 / white)  
       	
       	Black = 1- White
       	
Note that if the RGB values are all 0, then the CMY values are all 0 and K value is 1.

**f.c** : A certain grade of steel is graded according to the following conditions:

	(i) Hardness must be greater than 50
	(ii) Carbon content must be less than 0.7
	(iii) Tensile strength must be greater than 5600
	
	The grades are as follows:
	
	Grade is 10 if all three conditions are met
	Grade is 9 if conditions (i) and (ii) are met
	Grade is 8 if conditions (ii) and (iii) are met
	Grade is 7 if conditions (i) and (iii) are met
	Grade is 6 if only one condition is met
	Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under 
consideration and output the grade of the steel.

**g.c** : The Body Mass Index(BMI) is defined as a ratio of weight of a person (in kilograms) to the square of the height(in meters). 
write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table.
       
       BMI Category			BMI
       
       Starvation			< 15
       Anorexic			15.1 to 17.5
       Underweight			17.6 to 18.5
       Ideal				18.6 to 24.9
       Overweight			25 to 25.9
       Obese				30 to 30.9
       Morbidly Obese			>= 40

### [E] Attempt the following

**a.c** : Using conditional operators determine :

 	(1) Whether the character entered through the keyboard is a lower case alphabet or not.
 	(2) Whether a character entered through the keyboard is a special symbol or not.
 	
**b.c** : Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
           
**c.c** : Write a program to find the greatest of three numbers entered through the keyboard.Use conditional operators.

**d.c** : Write a program to receive value of an angle in degrees and chek whether sum of squares of sine and cosine of this angle 
is equal to 1.

**e.c** : Rewrite the following program using conditional operators.

	#include<stdio.h>
	
	int main()
	{
		float sal;
		
		printf("Enter the salary");
		scanf("%f", &sal);
		
		if(sal >= 25000 && sal <= 40000)
			printf("Manager\n");
		else
			if(sal >= 150000 && sal < 25000)
				printf("Accountant\n");
			else
				printf("Clerk\n");
				
		return 0;
	}

