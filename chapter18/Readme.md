# Chapter 18 : Console Input / Output

### [A] What will be the output of the following program
- This one is covered in `exerciseA` file.

### [B] Point out the errors, if any, in the following programs
- This one is covered in `exerciseB` file.  

### [C] Answer the following
- This one is covered in `exerciseC` file.  
  
### [D] Answer the following

- **a.c** : Define two functions xgets() and xputs() which work similar to the standard library functions gets() and puts().

- **b.c** : Define a function getint(), which would receive a numeric string from the keyboard, convert it to an integer number and 
return the integer to the calling function. A sample usage of getint() is shown below.
       
       	#include<stdio.h>
       	
       	int main()
       	{
       		int a;
       		
       		a = getint();
       		printf("You entered %d\n", a);
       		
       		return 0;
       	}
- **c.c** : Define a function getfloat(), which would receive a numeric string from the keyboard, convert it to a float value and 
return the float to the calling function.

- **d.c** : If we are to display the following output properly aligned which format specifiers would you use?
      
      Discovery of India		JawaharlalNehru	425.50
      My Experiments With Truth	Mahatma Gandhi		375.50
      Sunny Days			Sunil Gavaskar		95.50
      One More Over			Erapalli prassana	85.00

